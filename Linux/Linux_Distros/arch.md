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