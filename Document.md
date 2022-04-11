Also available for these apps:

Atom
BBEdit
Brackets
CodeMirror
Emacs
Gedit
highlight.js
IDEA
iTerm2
Mou
Notepad++
Prettify.js
Prism.js
PuTTY
Pygments
Rainbow
Shell
Sublime Text
Terminal
TextMate
Vim
Visual Studio
Windows Command Prompt
XCode
Installation

Extension Marketplace

Launch Quick Open, paste the following command, and press Enter

ext install idleberg.hopscotch

Packaged Extension

Download the package extension from the the release page and install it from the command-line:

$ code --install-extension hopscotch-*.vsix
Clone Repository

Change to your Visual Studio Code extensions directory:

# Windows
$ cd %USERPROFILE%\.vscode\extensions

# Linux & macOS
$ cd ~/.vscode/extensions/
Clone repository as hopscotch:

$ git clone https://github.com/idleberg/vscode-hopscotch idleberg.hopscotch










Please wait...
The first initialization requires Internet connection and may take a while (need to install dependent toolchains, frameworks, SDKs).
Please be patient and let the initialization complete.


Project Structure
PlatformIO project consists of 3 main items:
 lib - put here project specific (private) libraries
 src - put your source files in this folder
 platformio.ini - project configuration file




platformio.ini
PlatformIO Project Configuration File:
Generic options - development platforms, boards, frameworks
Build options - build flags, source filter, extra scripting
Upload options - custom port, speed and extra flags
Library options - dependencies, extra library storages
 Please visit documentation for the other options and examples.




Upload Port
PlatformIO automatically detects upload port by default. You can configure a custom port using upload_port option in platformio.ini:
upload_port = COM1 - particular port
upload_port = /dev/ttyUSB* - any port that starts with /dev/ttyUSB
upload_port = COM[13] - COM1 or COM3.





freopen("notshort.in" , "r" , stdin);


-------------------------------------------------------------------------------------


