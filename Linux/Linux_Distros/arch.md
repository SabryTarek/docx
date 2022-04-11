ArchLinux
===
--------------------------------------------------------------------------------------------
-- fdisk -l لرؤية مجموعة البارتشن
--cfdisk /dev/sda لعمل البرتشنز
--mkfs.ext4 /dev/sda2 لجعل البرتشن الرئيسى بصيغى ext4
--mount /dev/sda2 /mnt لعمل ماونت للبرتشن الاساسى
--mkswap /dev/sda1 لتفعيل مساحة السواب
--swapon /dev/sda1 لتفعيل مساحة السواب
---------------------------------------------------------------------------------------------
--pacstrap /mnt base base-devel لتثبيت اساس النظام فى بارتشن الاساسى
---------------------------------------------------------------------------------------------
--arch-chroot /mnt ليسمح لك بالدخول الى النظام
--passwd لعمل باسوورد للنظام
--nano /etc/locale.gen لضبط اعدادات المكان و الوقت و اللغة
--locale-gen لعمل الملف المسئول عن اللغة
--cd /usr/share/zoneinfo للدخول الى ملف المنطقة الزمنية
--ls لرؤية محتويات المجلد من مناطق زمنية
--cd /usr/share/zoneinfo/Africa للدخول الى قارتك
--ln -s /usr/share/zoneinfo/Africa/Cairo /etc/localtime لضبط المنطقة الزمنية
--echo box > /etc/hostname
--pacman -S grub-bios لتحميل محمل الاقلاع
--grub-install /dev/sda لتثبيت محمل الاقلاع
--mkinitcpio -p linux لعمل ملف الاقلاع
--grub-mkconfig -o /boot/grub/grub.cfg لعمل ملف اعدادات محمل الاقلاع
--exit للخروج من المجلد
--genfstab /mnt >> /mnt/etc/fstab لعمل الملف الذى يحتوى على معلومات الجهاز
--umount /mnt لعمل انماونت للبارتشن الرئيسى
--shutdown +1 -P لاغلاق النظام 
-----------------------------------------------------------------------------------------

# Arch Wiki (the best documentation available for linux)
https://github.com/lahwaacz/arch-wiki-docs

## installation
```pacman -S arch-wiki-docs```

```pacman -S arch-wiki-lite```

## path
/usr/share/doc/arch-wiki

## usage
1. go to '/usr/share/doc/arch-wiki/html/en' and open .html files manaually
2. use ```wiki-search <keyword>``` command from 'arch-wiki-lite' package to search from terminal



# add to wallpaper.md wallset


synchronizing the network time protocol

$ timedatectl set-ntp true
$ reflector



Installing ArchLinux 1.12.2021
===

set font in the terminal to terminus fot with size 32 points : => setfont ter-132n

the arch iso is actually booting up with the us keyboard layout
and if you don't have one you will have to look for your keyboard layout
so how can you do this well we can use a command which is called localectl
it does have actually many functions but the one we are looking for right now is to list the keymaps
$ localectl list-keymaps
$ localectl lis-keymaps | grep de
    => de_CH-latin1
$ loadkeys de_CH-latin1


$ ipa -c a
the interface name depend on WIFI adaptor like:
- lo
- Wlan0
- enp1s0

automaticlly detect ethernet connection,  if you have a wi-fi connection you will have to use the utility which is already included in the iso
$ iwctl



we need to perform here the partitioning the formatting and then the mounting before we can proceed installing the base system




UEFI VS Legacy (BIOS)



disk names

* Hard Disk Drive:
    - SD[a-b-c-d-...]
    - Partition: SD[a-b-c-d-...][1-2-3-...]
* Solid State Drive
    - SD[a-b-c-d-...]
    - Partition: SD[a-b-c-d-...][1-2-3-...]
* VDA
    - SD[a-b-c-d-...]
    - Partition: SD[a-b-c-d-...][1-2-3-...]


GPT VS MBR

gdisk tool which is meant to create gpt partition tables which are actually the best partition tables for ufi machines
gdisk /dev/vda



partition table types:
Partion Table Scan:
- MBT (Master Boot Record)
- GPT (General Partition Table)
- BSD
- APM


Creating new GPT entries in memory


parted -> gparted
disk
    - fdisk -> cfdisk
    - gdisk -> cgdisk


genfstab -U /mnt >> /mnt/etc/fstab
arch-chroot /mnt
---
Timezones
$ timedatectl --list-timezones | grep Africa | less
$ ls -sf /usr/share/zoneinfo/<>/<CITY> /etc/localtime
---
timedatectl set-ntp true #=> syncronise network time protocal (NTP)

$ vim /etc/locale.gen
on vim /en_US to search
$ locale-gen
$ echo "LANG="en_US.UTF-8" >> /etc/locale.conf # localectl, locale-update
$ echo "KEYMAP="de_CH-latin1" >> /etc/vconsole.conf
$ echo "arch" >> /etc/hostname # hostnamectl
$ vim /etc/hosts
$ passwd

$ setxkbmap ch # => change keyboard layout/keymap at X server
z in english = y in germen kryboard

when you use fdisk to partision -> because this is a ufi system I need to create a GPT label (GUID) so I'll type in g enter and the label is created


$ pacman -S grub \
            efibootmgr \
            networkmanger network-manger-applet dialog wps_supplicant \ #system-networkd
            base-devel linux-headers \ # used for development especially if you're installing something from the AUR
            xdg-utils xdg-user-dirs \ # create user directories
            bluez bluez-utils \  # if you have bluetooth adapters definitely install bluez
            cups \ #  if you have a printer definitely install cups the cups printing system
            pulseaudio alsa-utils pavuaduio \ # you can install pipewire if you want but i'm going to install a window manager so pullsaudio is fine, a very handy utility here for checking
out your sound devices
            terminus-font # because that is not installed in the new installation



we need to also install the grub bootloader because we installed the package but we didn't install yet the bootloader


systemctl enable NetworkManger
systemctl enable bluetooth
systemctl enable cups



minmal instllation = barebone instllation



kernel boot arguments







we need to synchronize the hardware clock and the system clock to do this we can type in hw clock
$ hwclock --sys2hc


Pacman
- witten in: C
- package format: pkg.tar.xz
$ pacman -Sy =>  to check if the repositories are online

Job sites

- Indeed
- Glassdoor
- Wuzzuf
- LinkedIn


tmux dependancy
libevent



paly-with-k8s.com
centos
    - to temux
/OOC -> out of capacity

issues
-> Docker palyground

Swap Partition VS Swap File

- cat
- more
- less
- [] install AlpineLinux on memory


vim --help

SRE Engineer



Testdisk
===



Testdisk
photorec






Display server
xorg group
xorg-server
xorg-xinit -> xinitrc file
xorg-xrandr -> change the reslution of the display
xorg-xsetroot
nirtogen
picom

cp /etc/X11/xinit/xinitrc ~/.xinit

we are going to put in here also a while loop so that we don't need to actually exit DWM and restart it in order for the changes to take effect

there is a DWM binary in the ushe repository but again I'm gonna stick here to (just to stay in line with) the suckless philosophy and just compile it from source

wget https://dl.suckless.org/dwm/dwm-6.2.tar.gz
wget https://dl.suckless.org/st/st-0.8.3.tar.gz
wget https://dl.suckless.org/tools/dmenu-4.9.tar.gz
tar -xzvf dwm-6.2.tar.gz
cd dwm-6.2.tar.gz
sudo make clean install


startx

https://dl.suckless.org/patches
patch < dwm-fill-gaps-6.3.diff
sudo cp config.def.h config.h
sudo make clean install
Mod-shift-q


https://dl.suckless.org/patches
patch -R < dwm-fill-gaps-6.3.diff
sudo cp config.def.h config.h
sudo make clean install
Mod-shift-q


adding blackArch repos to archlinux


vim ~/.xinitrc ```

# Keyboard Layout
setxkbmap en &

# Display Reselution
xrandr --output Virtual-1 --mode 1600x900 &

# Compisitor
picom -f &
# Wallpaper
nitrogen --restore &

# Excute DWM
# exec dwm
while true; do; dwm > /dev/null 2>&1 ; done # every time that we quit the DWM restarted it immediately
```

vim 

:tabnew
:e dwm.c



install dwm from git 

git clone --depth=1 https://git.suckless.org/dwm ; cd dwm ; sudo make && make clean install
git clone --depth=1 https://git.suckless.org/st ; cd st ; sudo make && make clean install
git clone --depth=1 https://git.suckless.org/dmenu ; cd dmenu ; sudo make && make clean install



sudo pacman -S alsa-utils pamixer playerctl ttf-font-awsome

Backlight keyboard
red dragon

Breakout
Hat





[[IDEA]]  :: Read a compete section at vim + Emacs documentation daily
[[IDEA]]  ::  search at github about X , X = any project







hostnamectl set-hostname cobox







AUR Helper

- yay
- paru
- Trizen