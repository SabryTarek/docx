Make Your Own:
- Website
    - HTML+CSS+Javascript
    - Wordpress
- Newsetters
- RSS
- Web Server
- WIKI
    - DokuWiki
    - 
- Web Static Generator


Capture Card -> record BIOS
Live Boot
- Live CD/DVD

---
ping 8.8.8.8

** Partitioning
$ fdisk -l === lsblk
$ cfdisk /dev/sda
DOS
/dev/sda1   128M    Bootable
/dev/sda1   all space    

Root Drive
Partitioning Scheme

** Formating
$ mkfs.ext4 /dev/sda1
$ mkfs.ext4 /dev/sda2
$ mount /dev/sda2 /mnt/gentoo/





Custom Partitioning
- separate home partiotion
- separate var partiotion

freeBSD 

defualt filesystem UFS and support ZFS


install your favorite desktop environment or 
window manager
install a login manager like like DM or whatever
install you know a panel or a doc
something to set your wallpaper like nitrogen or Feh
install a network manager
volume icon
clipboard manager

Tip for a more minimal installation that you guys might want
Instead of pkg install xorg, run    pkg install xorg-minimal

wipefs -a /dev/sdb
add back arch repos to archlinux


packer
===
Build Automated Machine Images

packer validate template.json
packer build template.json
packer build \
    -var 'aws_access_key=YOUR ACCESS KEY' \
    -var 'aws_secret_key=YOUR SECRET KEY' \
    example.json

INTEGRATIONS

Out of the box Packer comes with support to build images for:
Amazon EC2, CloudStack, DigitalOcean, Docker, Google Compute Engine, Microsoft Azure, QEMU, VirtualBox, VMware, and more.
 Support for more platforms is on the way, and anyone can add new platforms via plugins.