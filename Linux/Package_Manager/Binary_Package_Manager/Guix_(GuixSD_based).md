[GUIX](https://guix.gnu.org/)
===
### Brief
- no need for root privileges to use this package manager



$ wget https://guix.gnu.org/install.sh
$ wget https://sv.gnu.org/people/viewgpg.php?user_id=15145 -qO - | gpg --import -
$ bash install.sh
$ guix install hello

---
sudo bash install.sh


    ░░░                                     ░░░
    ░░▒▒░░░░░░░░░               ░░░░░░░░░▒▒░░
     ░░▒▒▒▒▒░░░░░░░           ░░░░░░░▒▒▒▒▒░
         ░▒▒▒░░▒▒▒▒▒         ░░░░░░░▒▒░
               ░▒▒▒▒░       ░░░░░░
                ▒▒▒▒▒      ░░░░░░
                 ▒▒▒▒▒     ░░░░░
                 ░▒▒▒▒▒   ░░░░░
                  ▒▒▒▒▒   ░░░░░
                   ▒▒▒▒▒ ░░░░░
                   ░▒▒▒▒▒░░░░░
                    ▒▒▒▒▒▒░░░
                     ▒▒▒▒▒▒░
     _____ _   _ _    _    _____       _
    / ____| \ | | |  | |  / ____|     (_)
   | |  __|  \| | |  | | | |  __ _   _ ___  __
   | | |_ | . ' | |  | | | | |_ | | | | \ \/ /
   | |__| | |\  | |__| | | |__| | |_| | |>  <
    \_____|_| \_|\____/   \_____|\__,_|_/_/\_\

This script installs GNU Guix on your system

https://www.gnu.org/software/guix/
Press return to continue...
[1617447605.174]: Starting installation (Sat Apr  3 07:00:05 EDT 2021)
[1617447605.177]: [ PASS ] verification of required commands completed
[1617447605.193]: [ INFO ] init system is: systemd
[1617447605.200]: [ WARN ] We recommend installing and/or starting your distribution 'nscd' service
[1617447605.201]: [ WARN ] Please read 'info guix "Application Setup"' about "Name Service Switch"
[1617447605.202]: [ INFO ] system is x86_64-linux
[1617447605.400]: [ PASS ] Release for your system: guix-binary-1.2.0.x86_64-linux
[1617447605.402]: [ INFO ] Downloading Guix release archive
guix-binary-1.2.0.x86_64-linux.tar.xz           100%[=====================================================================================================>]  76.00M  46.9MB/s    in 1.6s
guix-binary-1.2.0.x86_64-linux.tar.xz.sig       100%[=====================================================================================================>]     833  --.-KB/s    in 0s
[1617447607.253]: [ PASS ] download completed.
[1617447608.022]: [ PASS ] Signature is valid.
[1617447618.736]: [ PASS ] unpacked archive
[1617447618.737]: [ INFO ] Installing /var/guix and /gnu...
[1617447618.742]: [ INFO ] Linking the root user's profile
[1617447618.747]: [ PASS ] activated root profile at /root/.config/guix/current
[1617447618.909]: [ PASS ] group <guixbuild> created
[1617447619.182]: [ PASS ] user added <guixbuilder01>
[1617447619.423]: [ PASS ] user added <guixbuilder02>
[1617447619.692]: [ PASS ] user added <guixbuilder03>
[1617447620.000]: [ PASS ] user added <guixbuilder04>
[1617447620.239]: [ PASS ] user added <guixbuilder05>
[1617447620.487]: [ PASS ] user added <guixbuilder06>
[1617447620.732]: [ PASS ] user added <guixbuilder07>
[1617447620.979]: [ PASS ] user added <guixbuilder08>
[1617447621.220]: [ PASS ] user added <guixbuilder09>
[1617447621.467]: [ PASS ] user added <guixbuilder10>
Created symlink from /etc/systemd/system/guix-daemon.service.wants/gnu-store.mount to /etc/systemd/system/gnu-store.mount.
Created symlink from /etc/systemd/system/multi-user.target.wants/guix-daemon.service to /etc/systemd/system/guix-daemon.service.
[1617447621.653]: [ PASS ] enabled Guix daemon via systemd
[1617447621.654]: [ INFO ] making the guix command available to other users
Permit downloading pre-built package binaries from the project's build farm? (yes/no) yes
[1617447626.676]: [ PASS ] Authorized public key for ci.guix.gnu.org
[1617447626.686]: [ PASS ] installed shell completion
[1617447626.688]: [ INFO ] cleaning up /tmp/guix.SUa
[1617447626.711]: [ PASS ] Guix has successfully been installed!
[1617447626.712]: [ INFO ] Run 'info guix' to read the manual.
[1617447626.714]: [ INFO ] Please log out and back in to complete the installation.
---

------------------------------------------------------------------------------------------------------------------------------------------------------
### References
- [all packages](https://guix.gnu.org/en/packages/)
- [vidoes](https://guix.gnu.org/en/videos/)
------------------------------------------------------------------------------------------------------------------------------------------------------
guix
	package
        -s, --search
		-i, --install
		-r, --remove
		-u, --upgrade
        --list-installed
        --list-generations
        -- roll-back



compund command (multiple-transaction), each operation is in fact a transaction that creates a new generation.
$ guix -r python -i guile


derivations (.drv)



   archive
   build
   challenge
   container
   copy
   deploy
   describe
   download
   edit
   environment
   gc
   graph
   hash
   import
   install -> guix package -i
   lint
   pack
   package
   processes
   publish
   pull
    --news
   refresh
   remove -> guix package -r
   repl
   search -> guix package -s
   show -> guix package -search=PACKAGE
   size
   system
   time-machine
   upgrade -> guix package -u
   weather



Guix downloaded pre-built binaries;or, if you explicitly chose to not use pre-built binaries, then probably Guix is still building software (see Substitutes, for more info).


------------------------------------------------------------------------------------------------------------------------------------------------------
$ export PATH="/home/<sabry>/.guix-profile/bin${PATH:+:}$PATH"

.guix-profile/ -> /var/guix/profiles/per-user/luke/guix-profile
├── bin
├── etc
├── include
├── lib
├── manifest
└── share

profiles: a way to group package installations together
all users on the same system are free to use as many profiles as they want
------------------------------------------------------------------------------------------------------------------------------------------------------


guix package -m <>

That is nice, because then you can just edit that file to change your package set. Also, you can backup that file, copy it to another computer, or put it under version control

emacs-nox
emacs-ng
emacs-mac
emacs-plus







hint: Consider installing the `glibc-utf8-locales' or `glibc-locales' package and defining `GUIX_LOCPATH', along these lines:

     guix install glibc-utf8-locales
     export GUIX_LOCPATH="$HOME/.guix-profile/lib/locale"

See the "Application Setup" section in the manual, for more info.




emacs mode

M-X guix-prettify-mode -> when it enabled -> hide hash /gnu/store/<HASH>-<package-name>-<apckage.version>









$ git clone https://git.savannah.gnu.org/git/guix.git
$ cd guix
$ guix environment --pure --ad-hoc coreutils findutils which # --pure => unset all environment variables we might have in the parent shell, --ad-hoc => install extra package inside this environment
$ ./bootstarp # command to prepare our system
$  ./configure --localestatedir=/var
$ make
$ which guix
    which: no guix in /gnu/store/...-profile/sbin) # because we didn't "$ make install" command
$ ./pre-inst-env guixsize --help
$ 
$ 



daily use tutorial for the guix package manager


- shell -> environment
- pre-built (binary) -> substitution
- revision



GUIX Package Manager Issues:
I installed LXC/LXD by guix, LXD need to root privileges to work, when I try to use sudo which installed from dnf package manager 