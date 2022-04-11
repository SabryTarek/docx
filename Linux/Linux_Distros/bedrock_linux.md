bedrock linux (brl)
===

/bedrock/etc/bedrock-release


$ sh bedrock-linux-0.7.19-x86_64.sh 
Usage: bedrock-linux-0.7.19-x86_64.sh <operations>

Install or update a Bedrock Linux system.

Operations:
  --hijack [name]       convert current installation to Bedrock Linux.
                        this operation is not intended to be reversible!
                        optionally specify initial stratum name.
  --update              update current Bedrock Linux system.
  --force-update        update current system, ignoring warnings.
  -h, --help            print this message

$ sh bedrock-linux-0.7.19-x86_64.sh --hijack
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*                                                               *
* Continuing will:                                              *
* - Move the existing install to a temporary location           *
* - Install Bedrock Linux on the root of the filesystem         *
* - Add the previous install as a new Bedrock Linux stratum     *
*                                                               *
* YOU ARE ABOUT TO REPLACE YOUR EXISTING LINUX INSTALL WITH A   *
* BEDROCK LINUX INSTALL! THIS IS NOT INTENDED TO BE REVERSIBLE! *
*                                                               *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

Please type "Not reversible!" without quotes at the prompt to continue:
> Not reversible!

__          __             __      
\ \_________\ \____________\ \___  
 \  _ \  _\ _  \  _\ __ \ __\   /  
  \___/\__/\__/ \_\ \___/\__/\_\_\ 
          Bedrock Linux 0.7.19 Poki

[1/6 ( 16%)] Performing sanity checks
[2/6 ( 33%)] Gathering information
* Using alpine for initial stratum
* Using alpine:/sbin/init as default init selection
* Using apk for as pmm user interface
* Unable to determine locale.gen language, continuing without it
* Using C.UTF-8 for $LANG
* Unable to automatically determine timezone, continuing without it
[3/6 ( 50%)] Hijacking init system
[4/6 ( 66%)] Extracting /bedrock
[5/6 ( 83%)] Configuring
* Configuring bedrock stratum
* Configuring alpine stratum
* Configuring bedrock.conf
* Configuring /etc/fstab
[6/6 (100%)] Finalizing
* Reboot to complete installation
* After reboot consider trying the Bedrock Linux basics tutorial command: brl tutorial basics






brl
brl list
brl fetch --list



/usr/bin/X
