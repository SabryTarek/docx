-------------------------------------------------------------------------------------------------------------
Runtime Database :-
- Rethinck

Realm -> android

SaaS Database (Software as a Service Database):-
- firebase (Object Database)
- ElephantSQL (PostgresSQL)
--------------------------------------------------
Web Servers :-
- Apache
- Nginx
- Lighttpd
- cuddy/cuddy2
- Vanich Cache
- language built-in {}
--------------------------------------------------
static site generator :-
	- Jekyll (Ruby)
	- Gatsby (React)
    - Hugo (Go)
	- Hexo (Node.js)
	- Ghost (Node.js)
    - Nuxt.js (Vue.js & Node.js)
    - VuePress (Vue.js & Node.js)
    - GridSome (Vue.js & Node.js)
--------------------------------------------------
API
- postman
- insomnia
- fiddler
- swagger
--------------------------------------------------
infrastructure as a service (iaas)
- firebase
- fabric
- Heroku
- Nodejitsu
- back4app

- google amp
--------------------------------------------------
programing languges version manager :-
- nvm (node version manager)
- rvm (ruby version manager)
--------------------------------------------------
Node package manager :-
- yarn
- npm
- bower -> front end only
--------------------------------------------------
Preprocessor (template language) :-
	- html (view engine) :-
	    - pug (jade)
        - postHTML
	- css (Preprocessor) :-
	    - sass
	    - less
	    - stylus
        - postCSS

	- javascript (transpilers) :-
		- Typescript -> Microsoft
		- Babel (6to5)
		- Flow -> Facebook
        - Elm
        - ReasonML -> OCamel

--------------------------------------------------
front-end frameworks :-
	- Angular -> MEAN Stack
	- React, React Router, Redux
	- Vue , Vue Router , Vuex -> Laravel Stack
    -  Svalt
--------------------------------------------------
task runner :-
- grunt
- gulp
- webpack* = moudule bundler + task runner 
--------------------------------------------------
communications methods :-
- server-client (master-slave)
- peer-to-peer (end-to-end)
- pub/sub
    - Kafka
    - RabbitMQ
    - ZeroMQ
    - ActiveMQ
--------------------------------------------------
communication methods over http:
- Web Service
- API
	- web API
		- Rest
		- soap
HTTP
RPC
Massaging Queue
- pub-push
--------------------------------------------------
web hosting:-
- Dedicated Server
- VPS (Virtual private server)
- Cloud Server
--------------------------------------------------
cloud poviders:-
- AWS
- google cloud platform
- Microzoft Azure
- IBM Cloud (bluemix)
- Alibaba
- Oracle Cloud
- Dell Cloud

- Digital Oceans
- Linode
- Vultr
- RedHat openstack
- VMware vsphare
--------------------------------------------------
Distributed systems:-
- Cnteralized
- Decnteralized
--------------------------------------------------
Architecture:-
- Monolithic
    - easy to programing
    - faster
- SOA (Service Oriented Architecture)
- Microservice
--------------------------------------------------
web history:-
- CGI (Common Gateway Interface)
- static site generator
- Content Management System (CMS)
- Server Side Render (SSR) VS Client Side Render (CSR)
- Single Page Application (SPA) VS Multi Page Application (MPA)
- Progrissive Web Application (PWA)
--------------------------------------------------
UI frameworks (UI Kits):-
- Bootstrap
- Boot switch
- Bluma
- foundation
--------------------------------------------------
javascript widgets/plugins
- menues
- 
--------------------------------------------------
server-side technologies:-
- Nodejs/Express/Ramda
  - React
  - Vue
- PHP/Laravel
- Ruby/Rails
- Python/Django
- Perl/catalyst
- Dart/Flutter
- Go/Traefik/mux/gin
- Rust
- C
- C++
	- SFML
    - Boast
    - OpenGL
    - SML
	- QT
	- GTK
- C#/ASP.net
	- Entity Framework (ORM)
- Java/spring
	- Swing (GUI)
- Scala/aka
- Kotlin
- Cuda
- Haskell
- Erlang -> Elixir/phoenix
- OCaml/ReasonML
- Lisp - StandardML - Rocket
- Bash || Powershell
- SQL
- Markdown || Latex || OrgMode
- Assembly
- prolog
--------------------------------------------------
> Protocals:
- HTTP/S {}
- Gopher
- MQTT
- WebSocket
- WebRTC
--------------------------------------------------
> Mail
- SYNC
- STMP
- POP3
- IMAP
--------------------------------------------------

Limux Commands Categories:
==========================
> Navigation
> Text
    - cat
    - less
    - more


    - uniq
    - sort
    - cut
    - paste
    - join

    - top
    - htop

    - head
    - tail
    
    - nl
    - wc


    - diff

    - awk
    - sed
    - tr

> Text Editors
    - VI/VIM/NeoVIM
    - Emacs
        - Spacemacs
    - VScode
> Help
> Metadata
- type
- file
- state
> 
> Redirection
- >
- >>
- <
- SRDOUT,STDIN,STDERR
>Piping
    - non-Named (|)
    - Named (mkfifo)
> Process Mangement
> Network Mangement
> Display Mangement
> Files
> Search
> Permissions
> Shell
- Bash
- ZSH (OH-My-ZSH)
- FISH
> Disk Utiles
- lsblk-> list block devices
- dd (diskdump) if= of= status="progress"
- fdisk
- cfdisk -> ncurse version of fdisk
- gdisk -> gpt
- parted
- gparted (GUI)
> Sys Info Utiles

> Virtualization
- KVM
- QEMU
- Libvirt
- Vagrant
    - VirtualBox
    - VMware
> Containerlization
- GNU chroot
- LXC/LXD
- systemd spawn
- kernel Namespaces/Cgroups
- Docker/Podman
    - Docker-compose
- Kubernetes
> Package Management
- Compile Source Code
- Standerd Packages Managers (apt(dpkg) | dnf=yum(rpm) | pakman | )
- Universal Packages Managers (AppImage | FlatPak(old name is "xdg-app") | Snap)
- Third Party Repositories "Community Repositories"(Ubuntu:PPA | Arch:AUR | Fedora:Copr)
> Archiving
> Compressing
> wine GUI:
    - PlayOnLinux (POL)
    - Crossover
    - 

> Tilling Window Manager (WM):

    * Manual
    - i3WM
    - BSPWM 11000 C

    * Dynamic
    - DWM (2000 line of code)
    - FXWM
    - XMonad : Haskell
        - xmobar
    - tilingq : Python
    - Qtile
    - AwsomeWM : Lua
    - 
> Desktop Environment (DE):
    - Gnome ($ gsettings set org.gnome.desktop.peripherals.touchpad tap-to-click true)
        - MATE (fork from Gnome 2.0)
    - KDE
    - XFCE (simpest one)
        apt install xfce4
    - Unity (old-ubuntu)
    - Cinamon (mint)
    - Elementry
    - Deepin
    -LXQT

> Display Manager(Login Manager)
> Network Manager
    - network
    - NetworkManager
> Daemons Manager
> File Manager:
    - vifm
    - nnn : C
    - Ranger : Python
> Daemons Manager=init system:
    - init (service) -> Debian
    - systemd (systemctl) -> Redhat-based, ArchLinux
    - upstart
    - runit -> VoidLinux


> panel:
> bar:
    - tent2
    - polybar


xmonad -> 

----------------------------------------------------------------------------------------------------------
> Notification Manager

notifications with dunst
dunst Notification servers
libnotify

notification daemon

lelban "notification daemon_setup" # _ = \n

----------------------------------------------------------------------------------------------------------
> Firmware:
    - BIOS
    - UEFI
    - [Coreboot](https://www.coreboot.org/)
    - [libreboot](https://libreboot.org/)
----------------------------------------------------------------------------------------------------------
> BootLoader:
    - Grub2
    - Lilio
    - Uboot at AVR arduino
    - OpenCore boot loader
    - Clover
----------------------------------------------------------------------------------------------------------
- vim
- tmux
- ssh & sshfs
----------------------------------------------------------------------------------------------------------
- w3m
- surf
----------------------------------------------------------------------------------------------------------
- ffmpeg | ava
- pandoc
- ImageMagick
- curl -> wget -> axel
- youtube-dl ->
----------------------------------------------------------------------------------------------------------

- fpaste | nctermbin 9999
- screenshot -> scrort -d5 c
----------------------------------------------------------------------------------------------------------
- mpd mpc ncmpcpp
- mpv
----------------------------------------------------------------------------------------------------------
docker
docker-compose
vagrant
kafka
envoy
kubrenetes
isto
Golang
----------------------------------------------------------------------------------------------------------







> window manager:
- DWM -> C
- AwsomeWM -> Lua
- I3WM
- Xmonad -> Haskell
- qtile -> Python
-

> file manager:
- vifm
- ranger -> Python
- nnn -> C


> image (jpg, png, gif):
feh
eog  (eye of gnu)
sxiv simple x image viewer
nitrogen

xwallpaper

/usr/share/backgrounds
/usr/local/share/backgrounds || usr/local/bgs/

> PDF:
- mupdf

> Mail Client:
- Mutt


> IRC:
- WeeChat
- xPitch

> Music:
- npc
moc
cmus
cave
{mpd=media player daemon}
	{ncmpcpp=new cursor media player client plus plus} s p q u 1-9 = 
	{mpdify}
	{mpc=media player client}






configuration

~/.mpd/mpd.conf
~/.ncmpcpp/config


~/.config/mpd/mpd.conf

> Video:

> 
- Pandoc -> Haskell
- ImageMagick = GraphicMagick -> C
- ffmpeg -> C

> Code Editor:
- vim
	- neovim
- Emacs
	- spacemacs
		- evil layer
	- org-mode
- VScode


> Web Browser:
- chromuim
	- google-chrome
- filefox
	- tor
- surf
- w3m | lynx | axel


> Search Engine:
- google
	- dork
- duck duck go (ddg)
	- 



| Shells | POSIX compline | 
- sh
- ash busybox sh
- ksh
- dash
- bash
- zsh
- fish
    - Highlighting
    - Auto suggestions
> Virtual Terminals = Terminalemulators :




Scrimba
ascicinema

sensors
lm-sensors
hdd utility


- CTF
- compatitive programming (CP)


Bit>Byte>Sector>Track>Header>Partition>iNode table + Free Blocklist>>