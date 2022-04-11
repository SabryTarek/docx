System initialistion (Boot)
----------------------------------
----------------------------------

Q: How a proccessor see memory
A: array of bites numberd with hexadicemal
#volatile: ذاكرة بتفتكر البيانات طالما كانت متصلة بالكهرباء و عند فصل الكهرباء تنسى تلك البيانات
#nanvolatile: ذاكرة بتفتكر البيانات سواء كانت متصلة بالكهرباءأو لا
Memory Concepts (Technologies) :-
- RAM & ROM
- EPROM
- E^2ROM
- FLASH MEMORY
- RDRAM
- SDRAM
- volatile & nanvolatile



983040 : 1028575 nanvolatile
firmware : program storage at nanvolatile
firmware tytpes :
- BIOS : compact 1982
- UEFI : intel 2009 2011
- WHEN YOU CONNECT YOUR COMPUTER WITH THE ELECTERCY firmware will intialize your devices (screen, keyboard, mouse, ....) to intialize your oprating system the firmware will call BOOTLOODER whoch store in byte zero in harddisk
- BOOTLOODER: 



NUM|ptogram|store on|Type|Functionality
------|----------|---------|-----|---------------
1|electercity|||power
2|processor|||
3|firmware|memory|BIOS- UEFI|intialize{test}{check} your devices (screen, keyboard, mouse,memory size, network card, ....) to intialize your oprating system the firmware will call BOOTLOODER whoch store in byte zero in harddisk
4|bootmanager|harddisk|Grub|get user to chose oprating system by chose his bootloader
5|bootloader|||intialize the oprating system{kernel}
6|kernal|harddisk{/boot/vmLinux}||intialize scree
7|intialization system|harddisk|sys v init{/etc/inittab}  - systemd|


Grub : make by linux . his old name is guru {hutu installer} 
when i co
tab stands to table

```sys v init```
---------------
---------------
windows :- mode
init :- run level
systemd :- target

- depend on ```run levels``` consist of 7 run levels
	- 0 : halt (poweroff)
	- 1 : Single user mod = halt + run single console -> using in tarooble shooting give you root permessions without ask to root password or sudo 
	- 2 : multi user mode (CLI) without GUI or NFS 
	- 3 :  multi user mode (CLI) without GUI -> servers
	- 4 : custom for user
	- 5 : multi user mode (CLI) with GUI -> desktops
	- 6 : Reboot

systemd targets :-

- poweroff (0)
- reboot (6)
- graphical.target (5)
- multi-user.target (3)
- rescue.target (1)





systemctl set-default multi-user.target






Lable:run level(s):Defult:::::::



XWindows VS Wayland : Graphical user interface to connect remotly

``Systemd``
--------------
--------------

> ``systemctl #command #programName|| #programName.service``

systemctl status httpd
		restart 
		

commands :-
- start
- stop
- status
- restart
- enable : service work by defult after you restart



bootloader 
BIOS| UEFI
------|------
sector 0 on disk




sector 0 on disk{MBR} = bootloader + partition table + signture
				= 0:445 + 446:509 + (510, 511)
				= 446 byte + 64 byte + 2 byte
				=		+4 partition table+ magic number (55AA) is a checksum for MBR

signture(55AA) : to sure this sector is MBR

Extented partition : is a format {type} for partition like FAT. NTFS, LINUX which store his partition table in the first sector at a partition to divide it  to 4 partition 

in window : allow for you 1 Extented patition so the maximum number of partitions on one hard disk is 7 partitions

partiton intiry (16 byte)
- 1 byte : status (active, ) i create it or no
- 3 byte : define the first sector in the partition by CHS [deprecated] we miss it for old oparating sys
- 1 byte : partition type code so i can define 256 type like FAT. NTFS, LINUX, Extented
- 3 byte : define the last sector in the partition by CHS [deprecated]
- 8 byte : free {not used}

when  we use CHS the maximum size for the partition is 500 MB
so we use the last 8 bytes to define partition size by LBA instide of CHS

- 8 byte : define the first sector in the partition by LBA and the sectors number

- we can define the first sector in the partition is sector 1 ,but usallaly we define it from sector 2048



UEFI

- sector 0 : protected MBR 
- 32 sector for partition table = 16 KB
- partition intity 128 byte at least (we can increase them as we need) instead of 16 byte
- so now we have 128 partition




file systerm & formating


file systerm type : the way that metadata is written by it 
file systerm is a partition formating using spacifice filesystem type













if i have a BIOS computer and connect a GPT hard disk with it as a secondary hard it will work normally

to rewrite MBR :-

- windows : fdisk/mbr
- Linux : Grub install script



<hr>
<br>

mounting
-----------
-----------

* / "root" parent of it self
* 









__understanding_Boot_process__
--------------------------------------

BIOS :- Basic Input Output System

- POST -> Power On Self Test -> Detect minimum hardware need to up and cheak its compatablity
- find bootable device and compare its periorty by your settings
- load IPL (Initial Program Loader) a very small code store in Bootable disk try to excuate BootLoader
- kernal load -> load some drivers from initrfs -> mount file system read-only -. remount read-write -> systemd
- systemd/init
- load system services

power ->Boot ->POST & bootable device & IPL -> BootLoader -> Kernal -> systemd/init -> services



BootLoader = 1st stage {usage : call 2nd stage}  -> MBR 
			+ 2nd stage -> /boot





MBR created by Microsoft


Microsoft BootLoader = NT Loader (NTLDR)
Linux BootLoader = Grub


Karnel = karnel 
	   + [(initrd)-> "init ram drive" (init ramfs)-> "init ram file system"]-> drivers




systemd
------------
------------
every sevice has a unit file/run script 






systemd enable/disable implementation :-

in : /usr/lib/systemd/system/#sshd#.service 
and symlink at : /etc/systemd/system/#target#.target.want/sshd.service
when you disabled a service , systemd remove a symlink from /etc/systemd/system/
when I should restart my pc in Linux ?
- when I reenable selinux
- upgrade Kernel -> daprecated -> k patch





service is a command interface to /etcinit.d
service sshd restart === etc/init.d/sshd restart

init enable/disable implementation :-


in /etc/init.d
scripts :-
{S,K}001#service_name#

- S->start
- K->kill
- num -> periorty

S






| diff                      | init          | systemd    |
|---------------------------|---------------|------------|
| command:-                 | service       |systemctl   |
| service booting system :- | series        | parelle    |
| use:-                     | shell scripts | unit files |





| init                  | systemd                                                                          |
|-----------------------|----------------------------------------------------------------------------------|
|service crond status   | systemctl status crond                                                           |
|service crond start    | systemctl start crond                                                            |
|service crond stop     | systemctl stop crond                                                             |
|                       | systemctl restart crond -> stop then start service                               |
|                       | systemctl reload crond -> reread configrations files without cutting the session |
|chkconfig crond on/off | systemctl enable/disable crond                                                   |
|                       | systemctl is-enable/active crond                                                 |
|                       | systemctl poweroff                                                               |
|                       | systemctl reboot                                                                 |
|                       | systemctl mask crond                                                             |
|                       | systemctl unmask crond                                                           |
|runlevel               | systemctl get-default                                                            |
|telinit 5/init 5       | systemctl isolate graphical.target                                               |
|                       | systemctl list-units                                                             |
|                       | systemctl list-units-files                                                       |



systemctl = 
- chkconfig --levels=2345 nginx on -> systemctl enable nginx
- rsyslogd -> journald
- 

<br>


systemd -> compatable with init and upstart

init -> upstart{ubuntu} -> systemd{fedora}



/etc/systemd/
- system/
- user/
- network/

------------------------------------------------------------------------
OpenRC
rc-service

rc-update


rc-update show === rc-update
------------------------------------------------------------------------


active vs enable
------------------
active -> running now
enable -> booting automatcly when system rebooting
#  vendor perset : enable/disable -> defult configration
<br>

systemctl status sshd



<br>


not allow to programs listen to the same port at the same time

----------------------------------------------------------------------------------------------------------------------------------------------------
With Systemd, all services have a unit file. A unit file defines how Systemd should manage the service. It will generally include:
- System dependencies and services which must be running
- Tasks to perform before launching
- How to start the process
- How to stop process
- How to restart the process if it crashes



When using Systemd to launch Docker containers the service file manages the processes via the Docker CLI. You can see the example of starting Postgres here cat postgres.service

[Unit]
Description=PostgreSQL container
Requires=docker.service
After=docker.service
[Service]
Restart=on-failure
RestartSec=10
ExecStartPre=-/usr/bin/docker stop postgres
ExecStartPre=-/usr/bin/docker rm postgres
ExecStart=/usr/bin/docker run --name postgres postgres:alpine
ExecStop=/usr/bin/docker stop postgres
[Install]
WantedBy=multi-user.target

# For Systemd to manage the service, the unit file needs to be in /etc/systemd/system

sudo cp postgres.service /etc/systemd/system
sudo systemctl enable /etc/systemd/system/postgres.service


journalctl --no-pager -u postgres.service



Referance:=> https://www.katacoda.com/courses/coreos/start-container-with-systemd
----------------------------------------------------------------------------------------------------------------------------------------------------
init system:
   - System V init or Sys V (pronounced as 'System Five') => /etc/inittab
   - systemd
   - openrc
   - upstart (initctl)=>  /usr/share/upstart
   - 





   0. kernel
   1. init
   2. bash


-----------------------------------------------------------------------------------------

### Systemd Timer

there are a number of different demons out there programs that can run in your computer that exist to run other programs at certain times say you want to run a program at the same time every week or every 24 hours maybe you're running some kind of cleanup task rotating log files in my case I've been using timers recently




- cleanup task
- rotating log


- at
- cron
- crond
- anacron



setup for a systemd timer is a little bit more complicated than a cron entry traditionally
with cron systems you would have a single line of configuration you would put in a file somewhere
with systemd we're going to make a script first then we're going to make a system D service to start the script and then we're going to make a timer to start the service so it's to system D unit file



create systemd service/unit file

``` bash
$ cd /etc/systemd/system
$ vim myscript.service

# unit section
[Unit]
# only requiired 
Description=my custom script

# serive section since this a service file
[Service]
# you don't need to but this line beacuse of "simple" is the default value
# which is basically just starting a process and then as soon as the process has started system D considers it's successfully executed
# it's not going to track how long it's running or anything like that
# I like to include the type even when it is simple just to make my files easier to read
Type=simple

# this is the file that we're going to call when we actually start this service
ExecStart=/optmtscript.sh

# finally I'm going to put user equals Jakob
# if I don't put user equals Jakob the script will run but it would be run as the root user
# since that's the default user to run system D services as
# that's not a security flaw because it requires root access to enable their start services
# so it makes sense that if you've got root access you should be able to run your services as root if you want to
# but in this case I want to be able to open my log file up
# I would be able to read it you if it was created by root but I just want that to be owned by my user here for simplicity
# so I'm including the user line
# now if we were just making a system tea service and we wanted to run this every boot we could do that very easily if you want a log of every time your $\
User=Jakob

# if you want a log of every time your system boots we can put a little install section down here
# and we can say wanted by equals and then the target that we want this to be run with
# so if I put multi user dot target then this service when enabled would run whenever the multi user target is starting
# if I wanted to only run when I'm starting the GUI that I can put graphical target graphical at that target is what I normally use when I want services to actually run on desktop computers on startup
# but in this case we actually don't need an install section at all
# because we're not going to enable this service if we enable the service it would start along with a target
# but that's not what we want we want the service to start on a timer
# and in order to do that we need to have the timer unit in addition to the service unit
# so I'm actually going to get rid of the install section altogether
# and I'm going to save the service so that's all that our service file where there needs to be like I mentioned before
# this can seem overwhelming if you've never done it before but really it's seven lines of text we're only using four options here
# out of the many possible options that you can put into a service file
# so that's all we need to do inside of there at this point
[Install]
WantedBy=
# we can actually test that our service file is working by starting the service manually
# now we can't enable the service because it doesn't have an install section but we can start the service manually


# that's going to scan for new and updated services
$ sudo systemctl daemon-reload
# so we know that our service file is working now
#  and all that we have left is to actually put the timer in place to automatically run that at the interval that we want so
$ sudo systemctl start myscript.service
# in order to do that

$ cd /etc/systemd/system
$ vim myscript.timer
# it's recommended that you name the service unit and the timer unit the same thing before the file extension
# it is not required and I'll show you how to not do that if you want to

[Unit]
Description=my custom script timer
# instead of a service section and this file we're going to put a timer section since this is a timer unit
[timer]


# now inside the timer unit if your timer and your service are named the same thing you do not need to include the unit option
# because it's going to default to running a service that's the same name as the timer
# however if for some reason you do want to make a timer that's named something different than the service
# then you can put unit equals and then I'm gonna put my script dot service

# and just like the type equals simple that I put in my service file even when I'm making timers that run similarly named services
# I still like to include the unit equals option just to make these easier to read if somebody's unfamiliar with system D
# and they don't know that a timer is going to automatically run a service with the same name
# then if they're looking at a timer unit they might be confused about its relation to the service unit
# so it's just an extra line of text that you can put in there to explicitly state when this timer runs we want to start this service
Uint=myscript.service
OnBotoSec=5min
OnUnitActivateSec=15min
```






# I keep all my media on s3 buckets in form of year-month-day prefixed in on history but at the same time I want to keep backups of my s3 bucket locally
$ aws s3 sync s3://s.natalian.org /mnt/2tb/s.natalian.org


# I recommend "aws s3 sync" because it seems to be a little bit more efficient than the s3 command client
# your mileage may vary but on my test AWS s3 sync was better
# I've already got sort of my keys configured though for your backup strategy
# you probably want to set up an s3 read-only account for your backups
# set up you key in AWS.config and this should hopefully work

most widely used in it system and service management system
$ systemctl list-timers --all


To see logs of what it's doing: journalctl -u s3staticbackup.service -f

Make sure to start the timer and start the service to test.

docker --env-file










sshadmin@meet:~$ logout
bash: logout: not login shell: use `exit'
