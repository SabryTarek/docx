Users & Groups
===============

users types :-
- normal
- root
- service

# every service have user



root : 0
users : >=1000
system users : ]0,1000[



> to get your root user a password for first time

1. sudo
2. su   # su === su root by default if you want to change to anther user substitute <root> by <user_name> 

-----------------------------------------------------------------------------
- useradd
- userdel

- groupadd
- groupdel

- passwd
-----------------------------------------------------------------------------

# usermod -aG wheel admin    #CentOS/RHEL === # usermod -aG sudo admin     #Debian/Ubuntu

From now on, when root user logs in, he/she will get the message “This account is currently not available.” This is the default message, but, you can change it and set a custom message in the the file /etc/nologin.txt





sudo usermod -aG lxd $USER === sudo gpasswd -a lxd $USER
newgrp lxd || logout
getent groups lxd
groups === id




- sudo (220 000 sloc) Vs doas (400 sloc)






sudo -s
sudo -i
sudo -e