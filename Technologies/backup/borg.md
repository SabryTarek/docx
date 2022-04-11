[Borg](https://www.borgbackup.org/)
===

Deduplicating
- archiver
- compression
    - LZ4
    - zlib
    - LZMA
    - zstd
- Secure, authenticated encryption  
- Free software (BSD license)
- Mountable backups with FUSE




hierarchy
repository -> archive


> package conatin borg + borgfs utility





---BorgBackup 1.1 - basic usage---
$ # Here you'll see some basic commands to start working with borg.           
$ # Note: This teaser screencast was made with borg version 1.1.0 – older or n
ewer borg versions may behave differently.                                    
$ # But let's start.                                                          
$                                                                             
$ # First of all, you can always get help:                                    
$ borg help
.
.
.
$ # These are a lot of commands, so better we start with a few:               
$ # Let's create a repo on an external drive:                                 
$ borg init --encryption=repokey /media/backup/borgdemo                       
Enter new passphrase:                                                         
Enter same passphrase again:                                                  
Do you want your passphrase to be displayed for verification? [yN]:           
                                                                              
By default repositories initialized with this version will produce security   
errors if written to with an older version (up to and including Borg 1.0.8).  
                                                                              
If you want to use these older versions, you can disable the check by running:
borg upgrade --disable-tam '/media/backup/borgdemo'                           
                                                                              
See https://borgbackup.readthedocs.io/en/stable/changes.html#pre-1-0-9-manifes
t-spoofing-vulnerability for details about the security implications.         
$ # This uses the repokey encryption. You may look at "borg help init" or the 
online doc at https://borgbackup.readthedocs.io/ for other modes.             
$                                                                             
$ # So now, let's create our first (compressed) backup.                       
$ borg create --stats --progress --compression lz4 /media/backup/borgdemo::bac
kup1 Wallpaper                                                                
Enter passphrase for key /media/backup/borgdemo:                              
420.92 MB O 420.38 MB C 382.91 MB D 727 N Wallpaper/bigco...LLCCorbisVCG_G.jpg
------------------------------------------------------------------------------
Archive name: backup1                                                         
Archive fingerprint: 9758c7db339a066360bffad17b2ffac4fb368c6722c0be3a47a7a9b63
1f06407                                                                       
Time (start): Fri, 2017-07-14 21:54:06                                        
Time (end):   Fri, 2017-07-14 21:54:17                                        
Duration: 11.40 seconds                                                       
Number of files: 1050                                                         
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:              618.96 MB            617.47 MB            561.67 MB
All archives:              618.96 MB            617.47 MB            561.67 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                     999                 1093                     
------------------------------------------------------------------------------
$ # That's nice, so far.                                                      
$ # So let's add a new file…                                                  
$ echo "added new nice file" > Wallpaper/newfile.txt                          
$ borg create --stats --progress --compression lz4 /media/backup/borgdemo::bac
kup2 Wallpaper                                                                
Enter passphrase for key /media/backup/borgdemo:
------------------------------------------------------------------------------
Archive name: backup2                                                         
Archive fingerprint: 5aaf03d1c710cf774f9c9ff1c6317b621c14e519c6bac459f6d64b31e
3bbd200                                                                       
Time (start): Fri, 2017-07-14 21:54:56                                        
Time (end):   Fri, 2017-07-14 21:54:56                                        
Duration: 0.33 seconds                                                        
Number of files: 1051                                                         
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:              618.96 MB            617.47 MB            106.70 kB
All archives:                1.24 GB              1.23 GB            561.77 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                    1002                 2187                     
------------------------------------------------------------------------------
$ # Wow, this was a lot faster!                                               
$ # Notice the "Deduplicated size" in "This archive"?                         
$ # Borg recognized that most files did not change and deduplicated them.     
$                                                                             
$ # But what happens, when we move a dir and create a new backup?
$ borg create --stats --progress --compression lz4 /media/backup/borgdemo::bac
kup3 Wallpaper                                                                
Enter passphrase for key /media/backup/borgdemo:                              
------------------------------------------------------------------------------
Archive name: backup3                                                         
Archive fingerprint: 36cd8fdf9b8b2e3bbb3fc2bb600acd48609efaf3a0880f900e0701a47
ff69d4d                                                                       
Time (start): Fri, 2017-07-14 21:55:37                                        
Time (end):   Fri, 2017-07-14 21:55:46                                        
Duration: 8.58 seconds                                                        
Number of files: 1051                                                         
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:              618.96 MB            617.47 MB            107.55 kB
All archives:                1.86 GB              1.85 GB            561.88 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                    1006                 3283                     
------------------------------------------------------------------------------
$ # Still quite fast…                                                         
$ # But when you look at the "deduplicated file size" again, you see that borg
 also recognized that only the dir and not the files changed in this backup.  
$ # Now let's look into a repo.                                              
$ borg list /media/backup/borgdemo                                            
Enter passphrase for key /media/backup/borgdemo:                              
backup1                              Fri, 2017-07-14 21:54:06 [9758c7db339a066
360bffad17b2ffac4fb368c6722c0be3a47a7a9b631f06407]                            
backup2                              Fri, 2017-07-14 21:54:56 [5aaf03d1c710cf7
74f9c9ff1c6317b621c14e519c6bac459f6d64b31e3bbd200]                            
backup3                              Fri, 2017-07-14 21:55:37 [36cd8fdf9b8b2e3
bbb3fc2bb600acd48609efaf3a0880f900e0701a47ff69d4d]                            
$ # You'll see a list of all backups.                                         
$ # You can also use the same command to look into an archive. But we better f
ilter the output here:                                                        
$ borg list /media/backup/borgdemo::backup3 | grep 'deer.jpg'                 
Enter passphrase for key /media/backup/borgdemo:                              
-rw-rw-r-- rugk   rugk    3781749 Fri, 2017-07-14 17:01:45 Wallpaper/deer.jpg 
$ # Oh, we found our picture. Now extract it:                                 
$ mv Wallpaper Wallpaper.orig                                                 
$ borg extract /media/backup/borgdemo::backup3 Wallpaper/deer.jpg             
Enter passphrase for key /media/backup/borgdemo:                              
$ # And check that it's the same:                                             
$ diff -s Wallpaper/deer.jpg Wallpaper.orig/deer.jpg                          
Files Wallpaper/deer.jpg and Wallpaper.orig/deer.jpg are identical            
$                                                                             
$ # And, of course, we can also create remote repos via ssh when borg is setup
 there. This command creates a new remote repo in a subdirectory called "demo"
:                                                                             
$ borg init --encryption=repokey borgdemo@remoteserver.example:./demo         
Enter new passphrase:                                                         
Enter same passphrase again:                                                  
Do you want your passphrase to be displayed for verification? [yN]:           
                                                                              
By default repositories initialized with this version will produce security   
errors if written to with an older version (up to and including Borg 1.0.8).  
                                                                              
If you want to use these older versions, you can disable the check by running:
borg upgrade --disable-tam 'ssh://borgdemo@remoteserver.example/./demo'       
                                                                              
See https://borgbackup.readthedocs.io/en/stable/changes.html#pre-1-0-9-manifes
t-spoofing-vulnerability for details about the security implications.         
$ # Easy, isn't it? That's all you need to know for basic usage.              
$ # If you want to see more, have a look at the screencast showing the "advanc
ed usage".                                                                    
$ # In any case, enjoy using borg!                                                                                
---                                                              
                     

---BorgBackup 1.1 - installation---
$ # This asciinema will show you the installation of borg as a standalone bina
ry. Usually you only need this if you want to have an up-to-date version of bo
rg or no package is available for your distro/OS.                             
$ # First, we need to download the version, we'd like to install…             
$ wget -q --show-progress https://github.com/borgbackup/borg/releases/download
/1.1.0b6/borg-linux64                                                         
borg-linux64        100%[=================>]  12.56M   417KB/s    in 39s      
$ # and do not forget the GPG signature…!                                     
$ wget -q --show-progress https://github.com/borgbackup/borg/releases/download
/1.1.0b6/borg-linux64.asc                                                     
borg-linux64.asc    100%[=================>]     819  --.-KB/s    in 0s       
$ # In this case, we have already imported the public key of a borg developer.
 So we only need to verify it: 
$ gpg --verify borg-linux64.asc                                               
gpg: assuming signed data in `borg-linux64'                                   
gpg: Signature made Sun Jun 18 16:54:19 2017 CEST                             
gpg:                using RSA key 0x243ACFA951F78E01                          
gpg: Good signature from "Thomas Waldmann <tw@waldmann-edv.de>" [ultimate]    
gpg:                 aka "Thomas Waldmann <tw-public@gmx.de>" [ultimate]      
gpg:                 aka "Thomas Waldmann <twaldmann@thinkmo.de>" [ultimate]  
gpg:                 aka "Thomas Waldmann <thomas.j.waldmann@gmail.com>" [ulti
mate]                                                                         
Primary key fingerprint: 6D5B EF9A DD20 7580 5747  B70F 9F88 FB52 FAF7 B393   
     Subkey fingerprint: 2F81 AFFB AB04 E11F E8EE  65D4 243A CFA9 51F7 8E01   
$ # Okay, the binary is valid!                                                
$ # Now install it:                                                           
$ sudo cp borg-linux64 /usr/local/bin/borg                                    
[sudo] password for rugk:                                                     
$ sudo chown root:root /usr/local/bin/borg                                    
$ # and make it executable…                                                   
$ sudo chmod 755 /usr/local/bin/borg                                          
$ # Now check it: (possibly needs a terminal restart)                         
$ borg -V                                                                     
borg 1.1.0b6                                                                  
$ # That's it! Check out the other screencasts to see how to actually use borg
backup.                                                                       
---



---BorgBackup 1.1 - advanced usage---
$ # For the pro users, here are some advanced features of borg, so you can imp
ress your friends. ;)                                                         
$ # Note: This screencast was made with borg version 1.1.0 – older or newer bo
rg versions may behave differently.                                           
$                                                                             
$ # First of all, we can use several environment variables for borg.          
$ # E.g. we do not want to type in our repo path and password again and again 
$ export BORG_REPO='/media/backup/borgdemo'                                   
$ export BORG_PASSPHRASE='1234'                                               
$ # Problem solved, borg will use this automatically… :)                      
$ # We'll use this right away…                                                
$                                                                             
$ ## ADVANCED CREATION ##                                                     
$                                                                             
$ # We can also use some placeholders in our archive name…                    
$ borg create --stats --progress --compression lz4 ::{user}-{now} Wallpaper
$ # We'll use this right away…                                                
$                                                                             
$ ## ADVANCED CREATION ##                                                     
$                                                                             
$ # We can also use some placeholders in our archive name…                    
$ borg create --stats --progress --compression lz4 ::{user}-{now} Wallpaper   
------------------------------------------------------------------------------
Archive name: rugk-2017-07-16T18:51:34                                        
Archive fingerprint: d054cc411324d4bd848b39d1c9cad909073f9ff1a1a503a676d3e050b
e140396                                                                       
Time (start): Sun, 2017-07-16 18:51:34                                        
Time (end):   Sun, 2017-07-16 18:51:35                                        
Duration: 0.18 seconds                                                        
Number of files: 1                                                            
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:                3.78 MB              3.80 MB                916 B
All archives:                1.86 GB              1.86 GB            561.88 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                    1008                 3288                     
------------------------------------------------------------------------------
$ # Notice the backup name.                                                   
$                                                                             
$ # And we can put completely different data, with different backup settings, 
in our backup. It will be deduplicated, anyway:                               
$ borg create --stats --progress --compression zlib,6 --exclude ~/Downloads/bi
g ::{user}-{now} ~/Downloads                                                  
------------------------------------------------------------------------------
Archive name: rugk-2017-07-16T18:52:19                                        
Archive fingerprint: 0de98f590b004ad7545f2013c4c9f2d4e3eed1415d177c89d6c2b7ff0
5918d2e                                                                       
Time (start): Sun, 2017-07-16 18:52:19                                        
Time (end):   Sun, 2017-07-16 18:52:20                                        
Duration: 0.63 seconds                                                        
Number of files: 6                                                            
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:                9.55 MB              8.04 MB              8.04 MB
All archives:                1.87 GB              1.86 GB            569.92 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                    1023                 3303                     
------------------------------------------------------------------------------
$                                                                             
$ # Or let's backup a device via STDIN.                                       
$ sudo dd if=/dev/sdx bs=10M | borg create --progress --stats ::specialbackup -
[sudo] password for rugk:                                                     
60+0 records in1 MB C 200.04 kB D 0 N stdin                                   
60+0 records out                                                              
629145600 bytes (629 MB, 600 MiB) copied, 4.31277 s, 146 MB/s                 
------------------------------------------------------------------------------
Archive name: specialbackup                                                   
Archive fingerprint: 68e942cc4a48402e48ba87f4887c24e5b9fe06e881b0ca241c791810a
108bec0                                                                       
Time (start): Sun, 2017-07-16 18:52:58                                        
Time (end):   Sun, 2017-07-16 18:53:05                                        
Duration: 6.99 seconds                                                        
Number of files: 1                                                            
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:              629.15 MB              2.47 MB            234.02 kB
All archives:                2.50 GB              1.87 GB            570.15 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                    1032                 3380                     
------------------------------------------------------------------------------
$                                                                             
$ # Let's continue with some simple things:                                   
$ ## USEFUL COMMANDS ##                                                       
$                                                                             
$ # You can show some information about an archive. You can even do it without
 needing to specify the archive name:
$ borg info :: --last 1                                                       
Archive name: specialbackup                                                   
Archive fingerprint: 68e942cc4a48402e48ba87f4887c24e5b9fe06e881b0ca241c791810a
108bec0                                                                       
Comment:                                                                      
Hostname: tux                                                                 
Username: rugk                                                                
Time (start): Sun, 2017-07-16 18:52:58                                        
Time (end): Sun, 2017-07-16 18:53:05                                          
Duration: 6.99 seconds                                                        
Number of files: 1                                                            
Command line: borg create --progress --stats ::specialbackup -                
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:              629.15 MB              2.47 MB            234.02 kB
All archives:                2.50 GB              1.87 GB            570.15 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                    1032                 3380                     
$                                                                             
$ # So let's rename our last archive:                                         
$ borg rename ::specialbackup backup-block-device                             
$ borg info :: --last 1                                                       
Archive name: backup-block-device                                             
Archive fingerprint: 5fd9732b4809252742a7cb3fadf2a971dd6371afd11a07944c0b5803d
57c240f                                                                       
Comment:                                                                      
Hostname: tux                                                                 
Username: rugk                                                                
Time (start): Sun, 2017-07-16 18:52:58                                        
Time (end): Sun, 2017-07-16 18:53:05                                          
Duration: 6.99 seconds                                                        
Number of files: 1                                                            
Command line: borg create --progress --stats ::specialbackup -                
Utilization of maximum supported archive size: 0%                             
------------------------------------------------------------------------------
                       Original size      Compressed size    Deduplicated size
This archive:              629.15 MB              2.47 MB            234.04 kB
All archives:                2.50 GB              1.87 GB            570.15 MB
                                                                              
                       Unique chunks         Total chunks                     
Chunk index:                    1032                 3380                     
---