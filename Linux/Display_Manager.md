Display Manager
===

X11 display manager (login screen)


extremely configurable:
	we can change the theme
	we can run startup scripts
	we can even do remote access (VNC)
	all within this one display manager


DE | DM|
---|---|
Gnome | GDM |
KDE | SDDM |



sudo systemctl disable gdm ==> Removed /etc/systemd/system/display-manager.service.
sudo systemctl enable lightdm => Created symlink /etc/systemd/system/display-manager.service → /usr/lib/systemd/system/lightdm.service.



/usr/local/share/dwm
/usr/local/share/bspwm

/etc/lightdm/lightdm.conf
greeter


Install what ever theme you want, this is called a greeter in lightdm
> apt install lightdm-<greeter_name>-greeter
[Seat;*]
#greeter-session=lightdm-slick-greeter
#greeter-session=lightdm-webkit2-greeter #=> Canonical package 
#greeter-session=lightdm-gtk-greeter #=> Defualt
