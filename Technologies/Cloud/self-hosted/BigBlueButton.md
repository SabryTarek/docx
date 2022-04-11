[BigBlueButton](https://bigbluebutton.org)
===
* brief:
	- virtual classroom for online teaching and learning
	- deeply embedded into the world’s major learning management system
	- web-based application


$ cat /etc/default/locale
LANG="en_US.UTF-8"

$ sudo apt-get install -y language-pack-en
$ sudo update-locale LANG=en_US.UTF-8
If you see an additional line LC_ALL=en_US.UTF-8, then remove the entry for LC_ALL from /etc/default/locale and logout and then log back in once more.

$ sudo systemctl show-environment
LANG=en_US.UTF-8
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
If you don’t see this, do sudo systemctl set-environment LANG=en_US.UTF-8 and run the above sudo systemctl show-environment again and confirm you see LANG=en_US.UTF-8 in the output.

$  cat /etc/lsb-release
$ grep -c ^processor /proc/cpuinfo
8

dpkg -l | grep bbb- to list all the core BigBlueButton packages







common in linux & windows
win + e => open file explorer
win + r => open run || rofi


 I'm avoiding running Alpine Linux on laptops as I know there will be issues that I will have to work through that I just don't have the time for right now. So far, I've put Alpine on a Dell Optiplex with a Core 2 Duo processor and also a Gnome Boxes virtual machine. 



Konsole, dolphin and kate kdeconnect kmix sddm krunne


xrandr -s 1920*1080
arandr

makepkg -si



https://www.one-tab.com/page/NTlPaNphQdWdnlSVi2nqqQ


generated PDF /usr/local/share/dwm/larbs.mom written in groff(GNU Troff) and pipe to zathura which is create /tmp/zathura.stdin.<6char> keybinding mod + F1

lightdm-gtk-greeter-settings

https://www.youtube.com/watch?v=jUPKrXO9_NU