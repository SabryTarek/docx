Bash Script
============




## What's Shell
- shell is a program
- the primary purpose of our shell is to execute or run some other programs
- for example in linux every command is a program

command types:
- 


- whenever a program is in running state then that particular program is a process
- for example currently our shell is running so currently our shell is a process
```bash
$ ps aux | grep bash
$ pgrep bash
```
## who initiated our bash shell?
  =>(gnome terminal)
:::Shell | CMD | Terminal | Console | Virtual Console | PTY | TTY :::
  + note that the very basic purpose of our terminal is to initiate our shell
  + note that our shell takes the input from the terminal and also gives the output to the terminal
::recap for 10min:: Standard Input/Output


+ bash is the most widely available shell that is used
+ other than the bash there are also other shells which are

## How to know what is the default shell in your system??? ::search for 5min::
```bash
$ echo $SHELL
```
-> Shell and Environment Variables and it's commands
## what are the installed shells present in my system??? ::search for 5min::
```bash
$ cat /etc/shells # show shell exectuble pathes
```
# How to install some other shell for example let's say I want to install fish or tcsh shell
```bash
$ apt search tcsh
$ apt install fish
$ cat /etc/shells # show shell exectuble pathes
```


### Shell history Eveluotion
1. Burne shell (sh) -> ~/.profile #### let's try to found this file at our home directory
```bash
$ ls #Why we can't find it ?!
$ ls -a ### as it a dotfile(hidden file in windows)
```
2. GNU Bourne Agin SHell (bash) -> (.bash_profile - .profile) .bashrc. .bash_logout .bash_history
3. Korn Shell (ksh) -> .profile, .kshrc
4. C Shell (csh) -> .login, .cshrc, .logout
5. tcsh -> .login, (.cshrc - .tcshrc) .logout
6. zsh -> .zlogin, .zshenv, (.zprofile - .zshrc), .zlogout, zsh_history


setting shell variables:
  - sh, ksh, bash, zsh -> export var=value || export var="value"
  - csh, tcsh -> setenv var=value || setenv var="value"
  - redirect stderr: 2>

setting shell variables:
  - sh, ksh, bash, zsh -> var=value || var="value"
  - csh, tcsh -> set var=value || set var="value"
  - redirect stderr: >&

::::::: POSIX Compliant shells :::::::

::::::: Single UNIX Specification (SUS) :::::::

### How to use other Shell and who is the parent of this shell??
```bash
$ tcsh # Temporary shell, after you colse your terminal It will back again to bash shell 
$ echo $SHLVL
```
### How to make it parmenent shell (our default shell)??
```bash
man chsh
$ chsh fish
$ chsh


# to show the effect you should relogin
$ su - $(whoami)

# if you close your terminal it will open bash again, you should relogin to your system
# make logout then login from Desktop Environment
```

## What is the Variable?
Variable-name=variable-value


## Who Create this Variables and who used them? (Proccess)
any process can create a variable any process can use the variable now in linux there are two types of variable in which first of all is the environment variable okay and the other variables are shell variables


- Any proccess can create environment variable including the shell process
- note that when an environment variable is created then the subsequent process can also use that particular variable 

- the shell variable can only be created by the shell process 
- when the shell process is creating a variable then the subsequent process will not be able to use this variable








# Environment Variables
## How to print out all the environment variables that has already been set?
```bash
$ env #=== printenv
```
## How to set your own environment variable?
```bash
$ export name=value
```
- if your value have some space then you have to use the double quotes or single quotes
- and if there is no space then you can remove the double quotes
- but it is good practice to always use these double quotes

## How to know the value of any particular variable?
```bash
$ echo $NAME
```

## Could environment variable assined to a command?!
```bash
$ export NAME="whoami"
$ $NAME
$ echo $NAME
```

## How to remove any particular variable?
```bash
$ unset NAME
```




# Shell Variable
## How to print out all the shell variables that has already been set?
```bash
$ set
```
## How to set your own environment variable?
```bash
$ name=value
```





# why we even use the environment variables and shellvariables?
- environment variables are generally used for sharing some data with the subsequent processes/command
```bash
$ python -m simple_HTTPS-ERVER 6064
$ export $PORT="6064"
$ curl locahost:$PORT/file.txt
$ curl locahost:${PORT}/file.txt
```
- i don't have to remember this unique port
- note that even though we can reference our variable in this form but generally using the curly braces is preferred





# How could we convert shell variable to environment variable?
```bash
$ name=value
$ env | grep name #=> nothing
$ export name
$ env | grep name #=> value
```


- whenever i'm creating a environment variable by our shell process then it is also becoming a shell variable 
```bash
$ cat /etc/environment # this file is used by our shell process to create the environment variables
```



# how you can identify whether the given variable is environment variable or shell variable?
```bash
$ name=value
$ env | grep name #=> nothing
$ export name
$ env | grep name #=> value
```


# Let's talk about important environment variables and shell variables that are used in linux
```bash
$ echo $USER # current loggen in user
$ echo $HOME # Home dircetory for current loggen in user
$ echo $SHELL # PAth of the current shell used by current loggen in user
$ echo $PWD # It's contain current woring dirctory
$ echo $PATH # It's contain current woring dirctory
$ echo $UID # current user uniqe ID
$ echo $HOSTNAME # Machine name
$ echo $OSTYPE # OS type

$ echo $EDITOR # Default CLI text Editor
$ echo $VISUAL # Default GUI text Editor
$ $VISUAL="/bin/nano" # Default GUI text Editor
# whenever any process want to use text editor first it will try to use the $VISUAL if it fails then it will use $EDITOR 

### Set the prompt
$ echo $PS1 # set shell prompt
$ echo $PS2 # set Line Continuation character
$ echo $PS3 # with prompt of select statement
$ echo $PS4 # when you excute your shell scripts in debug mode
```

# What's the Core of any programming language? #::Read Rashad articals::#
- Control Flow(if statements)
- Branching(Loop statements)


\ -> Line Continuation character

::Exercises::
- [] Pick a card from bottle then impelement the shell script the you asked
  - [] Create a program to make CRUD Operation at Users (Select statemant, Functions, If statement)
  - [] 
  - [] 
  - [] 
- [] HackerRank.com | CyberTalents
- [] 
- [] 
- [] 
- [] 
- [] 
::TODO::
- [] All members at advanced linux track should install [Ubuntu]
- [] Graphics Tablet and Witeboard for ilustration
- [] Advanced video recoreding for our sessions
- [] 
- [] Ilustrate Learning Approches like Depth and breadth Learning
- [] 
- [] 



- History Command
```bash
$ hsirory
$ hsirory -w # explicity write all history entries to $HISTFILE
# the default behaviour is write histry entries of current shell session after logout
$ hsirory -d <history-number>
$ hsirory -d <history-number> <history-number> # delete hsitory range
$ hsirory -c 3 clear hsitory 
$ hsirory | grep <key-word>
$ hsirory 20 # return the last 20 commands 
```


 history command is used to print the command that were run previously by our shell
- History Expansion (!)
```bash
$ !!
$ !!:p # only give the name of the previous command
$ !<history-number> # ! can used also with abslute history number assending
$ !-<history-number> # ! can used also with abslute history number desending
$ !<history-number> # ! can used also with relative history number
$ !<string> # ! it will print the latest command that was run which has the string as ls
$ !$ # return last argument of last exrecuted command
$ !
$ !
$ !
$ !
$ !
$ !
$ !
$ !
$ !
$ !
$ !
$ !
```
- Interactive History Search
C-s -> Interactive Search
C-r -> Reverse Interactive Search

stty -ixon

- switch off shell option
```bash
$ set -o # list all shell options
$ set -o | grep hist # list all shell options
$ set +o histexpand # switch off histexpand shell option to disable history expansion
$ set -o histexpand # switch on histexpand shell option to enable history expansion
```






```bash
### history related shell variables
$ echo $HISTSIZE # current loggen in user
$ echo $HISTFILE # Home dircetory for current loggen in user
$ echo $HISTFILESIZE # Home dircetory for current loggen in user
$ $HISTIGNORE="ls:history:cd" # PAth of the current shell used by current loggen in user
$ $HISTTIMEFORMAT="%d %m %t %T   " # 
$ $HISTCONTROL=ignorespace # 
$ $HISTCONTROL=ignoredups # 
$ $HISTCONTROL=ignoreboth # ignorespace + ignoredups
$ $HISTCONTROL=erasedups # 
$ $HISTCONTROL=ignorespace:erasedups # use maultiple options for HISTCONTROL you can seperate it by :
```




### What's Shell Options?
- shell options are the variables that have a special meaning to our shell
### How to list out all the options?
```bash
$ set -o # list all shell options
```

```bash
# History Shell Options
$ set -o | grep hist
history
histexpand
```


```bash
# Expansion/substitution Shell Options
$ set -o | grep hist
# echo {0..9}          #=>  0 1 2 3 4 5 6 7 8 9
# echo {0..9..2}       #=>  0  2  4  6  8
# echo {A..Z}          #=>  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
# echo {a..z}          #=>  a b c d e f g h i j k l m n o p q r s t u v w x y z
# echo {a..s}          #=>  a b c d e f g h i j k l m n o p q r s
# echo {a..s..2}       #=>  a c e g i k m o q s
# echo {abc,def}23     #=>  abc23 def23
# echo file{0..9}.txt  #=>  file0.txt file1.txt file2.txt file3.txt file4.txt file5.txt file6.txt file7.txt file8.txt file9.txt
# echo {a..c}{1..3}    #=>  a1 a2 a3 b1 b2 b3 c1 c2 c3
# echo {1..3}{a..c}    #=>  1a 1b 1c 2a 2b 2c 3a 3b 3c

$ set + bracesexpand
```

```bash
$ ls file[12]
$ set + noglob
$ ls file[12]
```

in case if you don't want to allow the redirection operator (>) to overwrite a file then you can set noclobber option

you may want to export the shell variables automatically to be environment variables in that case you can use the allexport option


if the execution is completed then at the end it will notify that the execution has been completed sometimes we require that as soon as the execution is completed give us some notification

$ set -o notify


C-d can exit/logout your shell
$ set -o ignoreeof
C-d can't exit/logout your shell

# A B    C D    E F G    H I    J K    L M N O P Q    R S T   U V  W X   Y Z

WildCards===Globing Characters

source === . (legacy from sh shell)
### How to switch on/off a shell option?
```bash
$ set +o histexpand # switch off histexpand shell option to disable history expansion
$ set -o histexpand # switch on histexpand shell option to enable history expansion
```





- shellcheck -> used to find syntax error in shell script also provides suggestions and warning that can be used to create a better shell script.
- bashdb -> bash debgger

* bash modes(used with set command and bash command during debugging):  noexec , xtrace and verbose
  - set -n || --noexec
  - set -x || --xtrace
  - set -v || --verbose


--------------------------------------------------------------
shopt (shell option)
===
- On Unix-like operating systems, shopt is a builtin command of the Bash shell that enables or disables options for the current shell session.
- shopt is similar to, but different than, the set builtin.
- if you want to change the behavior of bash as if it had been invoked with different command line options, use set.



```bash
$ shopt
$ shopt | wc -l
```
--------------------------------------------------------------
#! (Shebang)
===
- #! is a character sequance written at the first of the file to spacifiy the path of interpreter which will use when excuting this file
- used by Linux Kernel to 
- bin_fmt


```bash
$ nano script
$ chmod +x script

  ```bash
  #!/bin/cat

  This is Awesome
  ```

$ ./script # === $ /bin/cat ./script



  ```bash
  #!/bin/ls

  This is Awesome
  ```



  ```bash
  #!/bin/nano

  This is Awesome
  ```
```


* shell scripting:
  - #!/bin/sh
  - #!/ bin/bash # SPACE BETWWEN (#!) and interpereter is optional
  - #!/   bin/zsh
  - #!/bin/tcsh

- when text file (script file) acting as executable then our shebang is used to define the interpreter program that will use by our program loader (in this case our programl loader is the shell -bash- )while executing the file

- if I writeing "$ ls" then it's actually getiing executed as "$ /bin/ls"
--------------------------------------------------------------
time 
===
- time
- date
- time zone
- NTP server


```bash
$ date
$ cal
$ ncal
$ cal

```

```bash
$ timedatectl
  status
  list-timezones
  set-time
  set-date
  set-timezone


```

$ TZ=''
--------------------------------------------------------------
binfmt
===

```bash
# grep binfmt /proc/mounts ==> binfmt_misc /proc/sys/fs/binfmt_misc binfmt_misc rw,relatime 0 0
# mount binfmt_misc -t binfmt_misc /proc/sys/fs/binfmt_misc


$ /proc/sys/fs/binfmt_misc/status
$ echo 1 > /proc/sys/fs/binfmt_misc/status
# echo 0 > /proc/sys/fs/binfmt_misc/status
```

echo ":<NAME>:TYPE:OFFSET:MAGIC"

What about systemctl mask proc-sys-fs-binfmt_misc.automount
--------------------------------------------------------------
what is exit status code?
===
- it's an integer value between 0 to 255
- which is returned by the child process to the parent process after its execution
- these integer values are helpful to determine that whatever the particular command runs successfully or not
- exit status value will also help us to determine what exactly is the error



+ status code of 0 -> command has been run successfully without any errors
+ exit status code is a non-zero value that is from 1 to 255 then it means that the command has been run with some errors
+ exit status code is 127 that means the command is not found
+ exit status code is 2 it means that the invalid options has been used with the command or the arguments are not given
+ exit status code of the previous command is stored in a special variable $?
+ in case if I'm not giving any value explicitly then the exit status code written by the exit command will be equal to the exit status code of the previous run command
+ what if instead of returning here values from 0 to 255 I exit here with 256 okay so in that case it will be in a loop okay so after 255 if I'm increasing it by 1 then it will be returning us 0 okay so if i'm writing here 256 it will return me 0 if i'll write here 257 it will return me 1 if i write here 258 it will return me 2 like that so the values are going in a circle
+ in case if you don't provide here exit code with the exit command also in that case our script written the exit status code of the last command run by the script

lines which written after the exit command will not be executed

```bash
$ ls
$ echo $? #=> 0


$ ls -e
$ echo $? #=> 2

$ lsls
$ echo $? #=> 127
```

```bsah
#!/bin/bash

echo "lines before exit command will excute"
exit

ls
pwd
echo "lines before exit command will not be excuted"
```
```bash
$ bash script.sh
$ echo $? #=> 2





okay so in the case of the error the exit status code also help us to determine what exactly is the reason of that error okay remember that each exit code has a different meaning okay so when it is 0 it means it is true right in linux or in shell scripting the zero value is taken as a true value and non-zero values means unsuccessful execution or i can write here false also


--------------------------------------------------------------
echo command
===
- use to print the text to the output screen

```bash
$ echo It's a great day #=> It's a great day
$ echo It's a     great day #=> It's a great day
$ echo "It's a     great day" #=> "It's a      great day"
$ 
```
--------------------------------------------------------------


- ::NOTE:: select statement isn't a part of the POSIX standards

- POSIX Standards are the various standards defined by the IEEE to maintain compatibility between various operating systems
- there are many categorization of these standards
- one such category is the shell commands and within that shell commands standards you will not see the select command
- that is also the reason in some reference you will see that there are three loops used inside the shell script that is the for, while and until loop 
- in some references you will see there are four loop that is along with the select loop
- in any case if you want to learn more about the posix standards or the shell command standards defined by the posix









```bash
$ pstree -s -p <procces-id>
$ pstree | grep bash
```















----------------------------------------------------------------------------------------------------------

Bash is a Unix shell and command language written by Brian Fox for the GNU Project as a free software replacement for the Bourne shell. Released in 1989, it has been distributed widely as the shell for the GNU operating system and as a default shell on Linux and OS X



* shell: /etc/shell
  - sh => Bourne [sh]ell -> for unix
  - bash => [B]ourne [a]gain [sh]ell -> for linux
  - fish
  - zsh + oh my zsh (framework or package manager for it)
  - dash
  - csh
  - ksh
  - ash



----------------------------------------------------------------------------------------------------------
* variable types:
  - local
  - environment

- store data
- a-zA-Z0-9_
- can't start with numbers
- convention: use upper-case charecters


whenever we have space in our vlue then always use single/double quotes 






```bash
#!/bin/bash


# String Data
VAR1="Sabry Tarek"
VAR2=sabry

# Numeric Data
VAR3=23
VAR4=3.4

# Boolean Data
VAR5=true
VAR6=FALSE

# access variable: $VAR_NNAE
# echo === print
echo $VAR1
echo $VAR2
echo $VAR3
echo $VAR4
echo $VAR5
echo $VAR6


# String concatination: str = str1 + str2 + str3
echo "Hi, my name is" $VAR1 "."
echo My favourite color is $VAR2 .
echo 'My age is' $VAR3 .
echo "My GPA is" $VAR4 .
echo "Is I use Linux?" $VAR5 '.'
echo "Is I married?" $VAR6 "."

ID="sabry-tarek"

echo "https://www.linkedin.com/in/" $ID
echo "https://www.linkedin.com/in/${ID}"
```


----------------------------------------------------------------------------------------------------------

shell types :-
- inreactive -> read from keyboard : bash; ls -la
	- login
	- non-login
- non-interactive -> read from file : bash script.sh


----------------------------------------------------------------------------------------------------------

login shell configrations files :-

1- /etc/profile
2- ~/.bash_profile
3- ~/.bash_login
4- ~/.profile




non-login shell configrations files :-

1- /etc/bash.bashrc
2- ~/.bashrc
----------------------------------------------------------------------------------------------------------
source ~/.bashrc
----------------------------------------------------------------------------------------------------------

!#/bin/bash

- echo "Hello, World! ^_^";
- # comment
- <<ANYWORD

for i in A B C D; do
  echo $i;
done

ANYWORD
- bash -x script.sh
- bash -n script.sh

!#/bin/bash -x

- set -x

environment:
- aliases
- shell functions

- set +x


BASH_VERSION
عرض اصدارة BASH
echo $BASH_VERSION
HOSTNAME
عرض اسم الكمبيوتر
echo $HOSTNAME
CDPATH
يبحث عن مسار الامر cd
echo $CDPATH
HISTFILE
اسم ملف التأريخ الخاص المخزنه به الاوامر المنفذة مؤخرا
echo $HISTFILE
HISTFILESIZE
العدد الاقصى للاسطر المسجلة في ملف التأريخ
echo $HISTFILESIZE
HOME
مجلد المنزل للمستخدم الحالي
echo $HOME
PATH
للبحث عن مسارات الاوامر
echo $PATH
TERM
نوع دخولك للطرفية
echo $TERM
SHELL
مسار الشل
echo $SHELL
DISPLAY
عرض وضبط اسم الشاشة X
echo $DISPLAY
EDITOR
المحرر الافتراضي وتعديلة
export EDITOR=/usr/bin/nano
echo $EDITOR

varibles :-
	- small or capital
	-$
	- ${}
	- sleep #second






variable == const
local 
cat <<- _EOF_



	_EOF_







#!/bin/bash
#####################################################
# Name: Bash CheatSheet for Mac OSX
# 
# A little overlook of the Bash basics
#
# Usage:
#
# Author: J. Le Coupanec
# Date: 2014/11/04
#####################################################

A
B
C
D
E
F
G
  H
  I
J
K
L
M
N
O 
P
  Q 
R
S
T
U
V 
W
X 
Y
Z
# 0. Shortcuts.


CTRL+A  # move to beginning of line
CTRL+B  # moves backward one character
CTRL+C  # halts the current command
CTRL+D  # deletes one character backward or logs out of current session, similar to exit
CTRL+E  # moves to end of line
CTRL+F  # moves forward one character
CTRL+G  # aborts the current editing command and ring the terminal bell
CTRL+J  # same as RETURN
CTRL+K  # deletes (kill) forward to end of line
CTRL+L  # clears screen and redisplay the line ->clear
CTRL+M  # same as RETURN
CTRL+N  # next line in command history
CTRL+O  # same as RETURN, then displays next line in history file
CTRL+P  # previous line in command history
CTRL+R  # searches backward
CTRL+S  # searches forward
CTRL+T  # transposes two characters
CTRL+U  # kills backward from point to the beginning of line
CTRL+V  # makes the next character typed verbatim
CTRL+W  # kills the word behind the cursor
CTRL+X  # lists the possible filename completefions of the current word
CTRL+Y  # retrieves (yank) last item killed
CTRL+Z  # stops the current command, resume with fg in the foreground or bg in the background

DELETE  # deletes one character backward
!!      # repeats the last command
exit    # logs out of current session


# 1. Bash Basics.


export              # displays all environment variables

echo $SHELL         # displays the shell you're using
echo $BASH_VERSION  # displays bash version

bash                # if you want to use bash (type exit to go back to your normal shell)
whereis bash        # finds out where bash is on your system

clear               # clears content on window (hide displayed lines)


# 1.1. File Commands.


ls                            # lists your files
ls -l                         # lists your files in 'long format', which contains the exact size of the file, who owns the file and who has the right to look at it, and when it was last modified
ls -a                         # lists all files, including hidden files
ln -s <filename> <link>       # creates symbolic link to file
touch <filename>              # creates or updates your file
cat > <filename>              # places standard input into file
more <filename>               # shows the first part of a file (move with space and type q to quit)
head <filename>               # outputs the first 10 lines of file
tail <filename>               # outputs the last 10 lines of file (useful with -f option)
emacs <filename>              # lets you create and edit a file
mv <filename1> <filename2>    # moves a file
cp <filename1> <filename2>    # copies a file
rm <filename>                 # removes a file
diff <filename1> <filename2>  # compares files, and shows where they differ
wc <filename>                 # tells you how many lines, words and characters there are in a file
chmod -options <filename>     # lets you change the read, write, and execute permissions on your files
gzip <filename>               # compresses files
gunzip <filename>             # uncompresses files compressed by gzip
gzcat <filename>              # lets you look at gzipped file without actually having to gunzip it
lpr <filename>                # print the file
lpq                           # check out the printer queue
lprm <jobnumber>              # remove something from the printer queue
genscript                     # converts plain text files into postscript for printing and gives you some options for formatting
dvips <filename>              # print .dvi files (i.e. files produced by LaTeX)
grep <pattern> <filenames>    # looks for the string in the files
grep -r <pattern> <dir>       # search recursively for pattern in directory


# 1.2. Directory Commands.


mkdir <dirname>  # makes a new directory
cd               # changes to home
cd <dirname>     # changes directory
pwd              # tells you where you currently are


# 1.3. SSH, System Info & Network Commands.


ssh user@host            # connects to host as user
ssh -p <port> user@host  # connects to host on specified port as user
ssh-copy-id user@host    # adds your ssh key to host for user to enable a keyed or passwordless login

whoami                   # returns your username
**passwd**                   # lets you change your password
quota -v                 # shows what your disk quota is
date                     # shows the current date and time
cal                      # shows the month's calendar
uptime                   # shows current uptime
w                        # displays whois online
finger <user>            # displays information about user
uname -a                 # shows kernel information
man <command>            # shows the manual for specified command
df                       # shows disk usage
du <filename>            # shows the disk usage of the files and directories in filename (du -s give only a total)
last <yourUsername>      # lists your last logins
ps -u yourusername       # lists your processes
kill <PID>               # kills (ends) the processes with the ID you gave
killall <processname>    # kill all processes with the name
top                      # displays your currently active processes
bg                       # lists stopped or background jobs ; resume a stopped job in the background
fg                       # brings the most recent job in the foreground
fg <job>                 # brings job to the foreground

ping <host>              # pings host and outputs results
whois <domain>           # gets whois information for domain
dig <domain>             # gets DNS information for domain
dig -x <host>            # reverses lookup host
wget <file>              # downloads file


# 2. Basic Shell Programming.

--------------------------------------------------------------------------------------------------------------------------------------------------------
# 2.1. Scalar Variables. (can hold a a single value at a time)

varname=value                # defines a variable
varname=value command        # defines a variable to be in the environment of a particular subprocess
echo $varname                # checks a variable's value
echo $$                      # prints process ID of the current shell
echo $!                      # prints process ID of the most recently invoked background job
echo $?                      # displays the exit status of the last command
export VARNAME=value         # defines an environment variable (will be available in subprocesses)
--------------------------------------------------------------------------------------------------------------------------------------------------------
# 2.2. Array Variables. (can store multiple values at a time)
- Indexed Arrays (Zero-based Index)
array(val val val)
array=([2]=val [0]=val [1]=val)
declare -a USER_NAMES=( "Sabry" "Ahmed" 5 1.5 's')
- Associative Arrays


CRUD Opration on Array
## How I can acsses multipl array values?
- name of array
- index of desired value
```bash
#~/bin/bash

declare -a USER_NAMES=( "Sabry" "Ahmed" 5 1.5 's' )

echo ${NAMES[0]} #=> Sabry
echo ${NAMES[1]} #=> Ahmed
echo ${NAMES[2]} #=> 5
echo ${NAMES[3]} #=> 1.5
echo ${NAMES[4]} #=> s

# negative index = valus used from the end
echo ${NAMES[-1]} #=> s
echo ${NAMES[-2]} #=> 1.5
echo ${NAMES[-3]} #=> 5
echo ${NAMES[-4]} #=> Ahmed
echo ${NAMES[-5]} #=> Sabry


declare -a USER_NAMES=( seq 50 100 )

# change particular array values form representing spacific array index
USER_NAMES[0]="Tarek"
USER_NAMES[200]="Mai"

echo ${NAMES[0]} #=> 50
echo ${NAMES[200]} #=> Mai
echo ${NAMES[157]} #=> empty line(nothing)
```
Using internet relay chat on multiple devices can be challenging. Here's how ZNC can be used to stay connected to IRC networks on multiple devices.
bouncer(IRC proxy server) like ZNC(Very easy to setup & use)
- Some IRC servers have this built in. It keeps you logged into 24/7 and shows history once you take over the session.

array[0] = val               # several ways to define an array
array[1] = val
array[2] = val

${array[i]}                  # displays array's value for this index. If no index is supplied, array element 0 is assumed
${#array[i]}                 # to find out the length of any element in the array
${#array[@]}                 # to find out how many values there are in the array

declare -a                   # the variables are treaded as arrays
declare -f                   # uses funtion names only
declare -F                   # displays function names without definitions
declare -i                   # the variables are treaded as integers
declare -r                   # makes the variables read-only
declare -x                   # marks the variables for export via the environment

${varname:-word}             # if varname exists and isn't null, return its value; otherwise return word
${varname:=word}             # if varname exists and isn't null, return its value; otherwise set it word and then return its value
${varname:?message}          # if varname exists and isn't null, return its value; otherwise print varname, followed by message and abort the current command or script
${varname:+word}             # if varname exists and isn't null, return word; otherwise return null
${varname:offset:length}     # performs substring expansion. It returns the substring of $varname starting at offset and up to length characters

${variable#pattern}          # if the pattern matches the beginning of the variable's value, delete the shortest part that matches and return the rest
${variable##pattern}         # if the pattern matches the beginning of the variable's value, delete the longest part that matches and return the rest
${variable%pattern}          # if the pattern matches the end of the variable's value, delete the shortest part that matches and return the rest
${variable%%pattern}         # if the pattern matches the end of the variable's value, delete the longest part that matches and return the rest
${variable/pattern/string}   # the longest match to pattern in variable is replaced by string. Only the first match is replaced
${variable//pattern/string}  # the longest match to pattern in variable is replaced by string. All matches are replaced

${#varname}                  # returns the length of the value of the variable as a character string

*(patternlist)               # matches zero or more occurences of the given patterns
+(patternlist)               # matches one or more occurences of the given patterns
?(patternlist)               # matches zero or one occurence of the given patterns
@(patternlist)               # matches exactly one of the given patterns
!(patternlist)               # matches anything except one of the given patterns

$(UNIX command)              # command substitution: runs the command and returns standard output
--------------------------------------------------------------------------------------------------------------------------------------------------------
# 2.2. Functions.
# The function refers to passed arguments by position (as if they were positional parameters), that is, $1, $2, and so forth.
# $@ is equal to "$1" "$2"... "$N", where N is the number of positional parameters. $# holds the number of positional parameters.

functions and variables live in separate namespaces so if we have a variable named foo we can also have a function named foo and there's no interference there


functname() {
  shell commands
}

unset -f functname  # deletes a function definition
declare -f          # displays all defined functions in your login session


export PS1='\e[1m\e[31m[\h] \e[32m($(docker-prompt)) \e[34m\u@$(hostname -i)\e[35m \w\e[0m\n$ '
alias vi='vim'
export PATH=$PATH:/root/go/bin
export DOCKER_HOST=""
cat /etc/motd
echo $BASHPID > /var/run/cwd
--------------------------------------------------------------------------------------------------------------------------------------------------------
# 2.3. Flow Control.


$ test expression === [ expression ]
$ [[ expression ]] # enhanced version of test command which support
# logical operators: && ||
# Relational Operators: > < = >= <=
# Globing characters===wildCards: ? * []
# REGEX Pattern Matching: =~
$ man test


```bash
$ [ 2 > 5 ]
$ echo $? #=> 0


$ [[ 2 > 5 ]]
$ echo $? #=> 1
```



statement1 && statement2  # and operator
statement1 || statement2  # or operator

-a                        # and operator inside a test conditional expression
-o                        # or operator inside a test conditional expression

str1=str2                 # str1 matches str2
str1!=str2                # str1 does not match str2
str1<str2                 # str1 is less than str2
str1>str2                 # str1 is greater than str2
-n str1                   # str1 is not null (has length greater than 0)
-z str1                   # str1 is null (has length 0)

-a file                   # file exists
-d file                   # file exists and is a directory
-e file                   # file exists; same -a
-f file                   # file exists and is a regular file (i.e., not a directory or other special type of file)
-r file                   # you have read permission
-r file                   # file exists and is not empty
-w file                   # your have write permission
-x file                   # you have execute permission on file, or directory search permission if it is a directory
-N file                   # file was modified since it was last read
-O file                   # you own file
-G file                   # file's group ID matches yours (or one of yours, if you are in multiple groups)
file1 -nt file2           # file1 is newer than file2
file1 -ot file2           # file1 is older than file2

-lt                       # less than
-le                       # less than or equal
-eq                       # equal
-ge                       # greater than or equal
-gt                       # greater than
-ne                       # not equal

if condition
then
  statements
[elif condition
  then statements...]
[else
  statements]
fi

for x := 1 to 10 do
begin
  statements
end

for name [in list]
do
  statements that can use $name
done

for (( initialisation ; ending condition ; update ))
do
  statements...
done

case expression in
  pattern1 )
    statements ;;
  pattern2 )
    statements ;;
  ...
esac

select name [in list]
do
  statements that can use $name
done

while condition; do
  statements
done

until condition; do
  statements
done
----------------------------------------------------------------------------------------------------------------------------------------------


# 3. Command-Line Processing Cycle.


# The default order for command lookup is functions, followed by built-ins, with scripts and executables last.
# There are three built-ins that you can use to override this order: `command`, `builtin` and `enable`.

command  # removes alias and function lookup. Only built-ins and commands found in the search path are executed
builtin  # looks up only built-in commands, ignoring functions and commands found in PATH
enable   # enables and disables shell built-ins

eval     # takes arguments and run them through the command-line processing steps all over again


# 4. Input/Output Redirectors.


cmd1|cmd2  # pipe; takes standard output of cmd1 as standard input to cmd2
> file     # directs standard output to file
< file     # takes standard input from file
>> file    # directs standard output to file; append to file if it already exists
>|file     # forces standard output to file even if noclobber is set
n>|file    # forces output to file from file descriptor n even if noclobber is set
<> file    # uses file as both standard input and standard output
n<>file    # uses file as both input and output for file descriptor n
<<label    # here-document
n>file     # directs file descriptor n to file
n<file     # takes file descriptor n from file
n>>file    # directs file description n to file; append to file if it already exists
n>&        # duplicates standard output to file descriptor n
n<&        # duplicates standard input from file descriptor n
n>&m       # file descriptor n is made to be a copy of the output file descriptor
n<&m       # file descriptor n is made to be a copy of the input file descriptor
&>file     # directs standard output and standard error to file
<&-        # closes the standard input
>&-        # closes the standard output
n>&-       # closes the ouput from file descriptor n
n<&-       # closes the input from file descripor n


# 5. Process Handling.


# To suspend a job, type CTRL+Z while it is running. You can also suspend a job with CTRL+Y.
# This is slightly different from CTRL+Z in that the process is only stopped when it attempts to read input from terminal.
# Of course, to interupt a job, type CTRL+C.

myCommand &  # runs job in the background and prompts back the shell

jobs         # lists all jobs (use with -l to see associated PID)

fg           # brings a background job into the foreground
fg %+        # brings most recently invoked background job
fg %-        # brings second most recently invoked background job
fg %N        # brings job number N
fg %string   # brings job whose command begins with string
fg %?string  # brings job whose command contains string

kill -l      # returns a list of all signals on the system, by name and number
kill PID     # terminates process with specified PID

ps           # prints a line of information about the current running login shell and any processes running under it
ps -a        # selects all processes with a tty except session leaders

trap cmd sig1 sig2  # executes a command when a signal is received by the script
trap "" sig1 sig2   # ignores that signals
trap - sig1 sig2    # resets the action taken when the signal is received to the default

disown <PID|JID>    # removes the process from the list of jobs

wait                # waits until all background jobs have finished


# 6. Tips and Tricks.


# set an alias
cd; nano .bash_profile
> alias gentlenode='ssh admin@gentlenode.com -p 3404'  # add your alias in .bash_profile

# to quickly go to a specific directory
cd; nano .bashrc
> shopt -s cdable_vars
> export websites="/Users/mac/Documents/websites"

source .bashrc
cd websites


# 7. Debugging Shell Programs.


bash -n scriptname  # don't run commands; check for syntax errors only
set -o noexec       # alternative (set option in script)

bash -v scriptname  # echo commands before running them
set -o verbose      # alternative (set option in script)

bash -x scriptname  # echo commands after command-line processing
set -o xtrace       # alternative (set option in script)

trap 'echo $varname' EXIT  # useful when you want to print out the values of variables at the point that your script exits

function errtrap {
  es=$?
  echo "ERROR line $1: Command exited with status $es."
}

trap 'errtrap $LINENO' ERR  # is run whenever a command in the surrounding script or function exists with non-zero status 

function dbgtrap {
  echo "badvar is $badvar"
}

trap dbgtrap DEBUG  # causes the trap code to be executed before every statement in a function or script
# ...section of code in which the problem occurs...
trap - DEBUG  # turn off the DEBUG trap

function returntrap {
  echo "A return occured"
}

trap returntrap RETURN  # is executed each time a shell function or a script executed with the . or source commands finishes executing












--------------------------------------------------------------------------------------------------------------

# 2.3. Flow Control.


statement1 && statement2  # and operator
statement1 || statement2  # or operator

-a                        # and operator inside a test conditional expression
-o                        # or operator inside a test conditional expression

str1=str2                 # str1 matches str2
str1!=str2                # str1 does not match str2
str1<str2                 # str1 is less than str2
str1>str2                 # str1 is greater than str2
-n str1                   # str1 is not null (has length greater than 0)
-z str1                   # str1 is null (has length 0)

-a file                   # file exists
-d file                   # file exists and is a directory
-e file                   # file exists; same -a
-f file                   # file exists and is a regular file (i.e., not a directory or other special type of file)
-r file                   # you have read permission
-r file                   # file exists and is not empty
-w file                   # your have write permission
-x file                   # you have execute permission on file, or directory search permission if it is a directory
-N file                   # file was modified since it was last read
-O file                   # you own file
-G file                   # file's group ID matches yours (or one of yours, if you are in multiple groups)
file1 -nt file2           # file1 is newer than file2
file1 -ot file2           # file1 is older than file2


--------------------------------------------------------------------------------------------------------------
	if condition
then
  statements
[elif condition
  then statements...]
[else
  statements]
fi

--------------------------------------------------------------------------------------------------------------
case expression in
  pattern1 )
    statements ;;
  pattern2 )
    statements ;;
  ...
esac
--------------------------------------------------------------------------------------------------------------

for x := 1 to 10 do
begin
  statements
end



for name [in list]
do
  statements that can use $name
done


for (( initialisation ; ending condition ; update ))
do
  statements...
done



select name [in list]
do
  statements that can use $name
done



while condition; do
  statements
done

until condition; do
  statements
done

--------------------------------------------------------------------------------------------------------------
watch -n <period_in_seconds> <command>
--------------------------------------------------------------------------------------------------------------
#!/bin/bash
while[1]; do 
	notify-send "`lynx --dump "https://www." | grep -A 10 -e "B6 67 Flight Status" | taail -n 6`"
	sleep 5m
done;
--------------------------------------------------------------------------------------------------------------
`$#` is a special variable which returns the number of parameters given to a script, e.g.:

```shell
#!/bin/bash
# saved as demo.sh
echo $#
```

```shell
./demo.sh       # will return 0
./demo.sh a     # will return 1
./demo.sh a b   # will return 2
```


















--------------------------------------------------------------------------------------------------------------
> Stampa:

#!/bin/bash
--------------------------------------------------------------------------------------------------------------
> Comments:

#
--------------------------------------------------------------------------------------------------------------
> Variables:

> Constants:
--------------------------------------------------------------------------------------------------------------
> Output:

echo
-n
--------------------------------------------------------------------------------------------------------------
> Iutput:

read <variable_or_constant_name_or_env_REPLAY>
-s -> password
-t <sec> -> timer
-p "<prompet>" EX-> read -p "what's your name ? " name; echo "my name is $name"
--------------------------------------------------------------------------------------------------------------
> operators:
  > Arithmatic operators:
  - +
  - -
  - *
  - /
  - %
  - **

  > Logical operators:
  -lt                       # less than
  -le                       # less than or equal
  -eq                       # equal
  -ge                       # greater than or equal
  -gt                       # greater than
  -ne                       # not equal
-----------------------

#!/bin/bash

seconds=0

echo -n "Enter number of seconds > "
read seconds

hours=$((seconds / 3600))
seconds=$((seconds % 3600))
minutes=$((seconds / 60))
seconds=$((seconds % 60))

echo "$hours hour(s) $minutes minute(s) $seconds second(s)"---------------------------------------------------------------------------------------
- bc
- w
- yes
$(command) in bash=== `command` in sh


exit status ($?)
[0-255]
0 -> sucssesful # return 0;
[1-255] -> faild
- true
- false
special parameters

--------------------------------------------------------------------------------------------------------------
#!/bin/bash -x  # -> tracing
-----------------------


set -x
if [ $number = "1" ]; then
    echo "Number equals 1"
else
    echo "Number does not equal 1"
fi
set +x
--------------------------------------------------------------------------------------------------------------
number=1
إلى:

number=



#!/bin/bash

if [ "$1" != "" ]; then
    echo "Positional parameter 1 contains something"
else
    echo "Positional parameter 1 is empty"
fi

#!/bin/bash

if [ $# -gt 0 ]; then
    echo "Your command line contains $# arguments"
else
    echo "Your command line contains no arguments"
fi

--------------------------------------------------------------------------------------------------------------
> bash GUI:

- Zenity
- x dialogue
- k dialogue
- g dialogue
--------------------------------------------------------------------------------------------------------------
[LearnLinux.tv](https://www.youtube.com/user/JtheLinuxguy/playlists)



- /dev/random
- /dev/urandom

- echo $RANDOM
- echo $(( RANDOM%10 + 1 ))


# in BSD jot is equivelant shuf in GNU/Linux
shuf <file> -> shuffle lines randomly and output all of them
shuf -i 1-10 -> shuffle numbers from 1 to 10 randomly and output all of them
shuf -i 1-10 -n1 -> shuffle numbers from 1 to 10 randomly and output one of them
shuf <file> -n 1-> shuffle lines randomly and output one line of them




#/usr/bin/env bash
complete -W "now tomorrow never" dothis


> Programmable Completion Builtins:
- Static completion
- Dynamic completion
complete -A directory dothis


- echo "Please Enter an integer" -> by default echo command put \n at the end of file
- echo -n "Please Enter an integer" -> -n switch => no break line


--------------------------------------------------------------------------------------------


ls -l > output.txt
echo "Listing of foo.txt" >> output.txt
cat foo.txt >> output.txt

- group: { ls -l; echo "Listing of foo.txt"; cat foo.txt; } > output.txt
- subshell: (ls -l; echo "Listing of foo.txt"; cat foo.txt) > output.txt


-----------------------------------------------------------------------------------------------

read [-options] [variable...]

- read num
- read va1 val2 val3 val4 val5
    - if you send 3 argument only the last 2 parameters will be empty
    - if you send 7 argument the last one will contain other values
- read -> if you don't declare variabe name at read command the value while assigned to env variable called REPLY 


- read -p "Enter one or more values > "
- -t seconds
- -s silent mode like password
- -n num -> number of input characters
- -u <foo.txt> -> get your value from foo.txt file instead of stdin
- -e
- -i <string> -> defalt value

- (Internal Field Separator) IFS
- IFS=":" read user pw uid gid name home shell <<< "$file_info"
- OLD_IFS="$IFS" IFS=":" read user pw uid gid name home shell <<< "$file_info" IFS="$OLD_IFS"







fc command





history
=======

!!
!
!^ === !:1
![number]
!$
!*
C-r => [reverse - inverse] search in history
C-s => search in history
up arrow
down arrow

history | grep <keyword>


^soud^sudo=== sudo !*







Alt + . 
========
mkdir test/
cd (Alt + .) === cd test/

Cycle through past arguments 
cycle through your history argument by argument 


======================
#RMBXZ
======================
تنفيذ أمر دون حفظه في التاريخ
# Execute a command without saving it in the history
<space>command

======================

تنفيذ أمر في وقت معين
# Execute a command at a given time
echo "ls -l" | at midnight

======================

اخراج الصوت من جهاز الكمبيوتر البعيد
# output your microphone to a remote computer's speaker
dd if=/dev/dsp | ssh -c arcfour -C username@host dd of=/dev/dsp

======================

حجز جزء من الرام على شكل مجلد
# Mount a temporary ram partition
mkdir /media/myram
mount -t tmpfs tmpfs /media/myram -o size=32m

======================

تحميل موقع كامل
# Download an entire website
wget --random-wait -r -p -e robots=off -U mozilla http://www.example.com

======================

عندما يعمل الايبي اعطني تنبيها وافحصه كل 10 ثوان.
# Set alarm when an IP address comes online,check every 10 sec.
ping -i 10 -a IP_address

======================

إغلاق جميع العمليات الفرعية التوالي للشل
# Close shell keeping all subprocess running
disown -a && exit

======================

محاكاة الكتابة
# Simulate typing
sudo apt-get install pv
echo "You can do it man " | pv -qL 10

======================

نظام التشغيل 32 ام 64
# 32 bits or 64 bits?
getconf LONG_BIT

======================

عرض العمليات العشرة الأوائل حسب استخدام الذاكرة
# Display the top ten running processes - sorted by memory usage
ps aux | sort -nk +4 | tail

======================

ضع وحدة التحكم على مدار الساعة في أعلى الزاوية اليمنى
# Put a console clock in top right corner
while sleep 1;do tput sc;tput cup 0 $(($(tput cols)-29));date;tput rc;done &

======================

عرض البرامج المتصلة بالشبكة في الوقت الحقيقي
# Watch Network Service Activity in Real-time
lsof -i

======================

مقارنة ملفين لم يتم فرزهما دون إنشاء الملفات المؤقتة
# diff two unsorted files without creating temporary files
diff <(sort file1.txt) <(sort file2.txt)

======================

إعادة استخدام كل معلمة من سطر الأوامر السابق
# Reuse all parameter of the previous command line
!*

======================

HTTP 80 تبادل الملفات عبر مشاركة
# Sharing file through http 80 port
nc -v -l 80 < file.txt

======================

مشاهدة التطبيقات التي تستخدم اتصال بالإنترنت في الوقت الراهن. (متعدد اللغات)
# Show apps that use internet connection at the moment. (Multi-Language)
lsof -P -i -n

======================

حذف كافة الملفات في مجلد التي لا تتطابق مع ملحق ملف معين
# Delete all files in a folder that don't match a certain file extension
rm !(*.foo|*.bar|*.baz)

======================

حفظ إخراج الأمر إلى صورة
# save command output to image
ifconfig | convert label:@- ip.png

======================
عرض نوع التوزيعة
# Display which distro is installed
cat /etc/issue

======================

إزالة المكرر في ملف غير مرتب.
# Remove duplicate entries in a file without sorting.
awk '!x[$0]++' <file>

======================

إضافة حماية كلمة المرور إلى ملف.
# Add Password Protection to a file your editing in vim.
vim -x <FILENAME>

======================

فيلم ماتريكس
# Matrix film
tr -c "[:digit:]" " " < /dev/urandom | dd cbs=$COLUMNS conv=unblock | GREP_COLOR="1;32" grep --color "[^ ]"

======================

نسخ المفتاح العام SSH الخاص بك على جهاز بعيد عن passwordless تسجيل الدخول - طريقة سهلة
# Copy your SSH public key on a remote machine for passwordless login - the easy way
ssh-copy-id username@hostname

======================

إدراج نتائج لتكملة في سطر الأوامر
# Inserts the results of an autocompletion in the command line
ESC *

======================

عرض محتويات الرام
# view a ram contents
sudo dd if=/dev/mem | cat | strings

======================

عرض الملفات المتشابهة استندادا لحجم الملف ثم للهاش
# Find Duplicate Files (based on size first, then MD5 hash)
find -not -empty -type f -printf "%s\n" | sort -rn | uniq -d | xargs -I{} -n1 find -type f -size {}c -print0 | xargs -0 md5sum | sort | uniq -w32 --all-repeated=separate

======================

استبدال المسافات في أسماء الملفات بحرف (_)
# replace spaces in filenames with underscores
rename 'y/ /_/' *

======================

إنشاء نسخة PDF
# Create a pdf version of a manpage
man -t manpage | ps2pdf - filename.pdf

======================

مشاهدة التطبيقات التي تستخدم اتصال بالإنترنت في الوقت الراهن.
# Show apps that use internet connection at the moment.
ss -pr
ss -pn

======================

اظهار الايبي العام
# show public ip
curl icanhazip.com

======================

قائمة جميع اختصارات الباش
# List all bash shortcuts
bind -P

======================

إزالة القيود الأمنية من وثائق PDF باستخدام غوستسكريبت
# Remove security limitations from PDF documents using ghostscript
gs -q -dNOPAUSE -dBATCH -sDEVICE=pdfwrite -sOutputFile=OUTPUT.pdf -c .setpdfwrite -f INPUT.pdf

======================

مشاركة شاشة محطة مع الآخرين
# Share a terminal screen with others
% screen -r someuser/

======================

تشغيل فحص نظام الملفات بعد اعادة التشغيل .
# Run a file system check on your next boot.
sudo touch /forcefsck

======================

عرض فقط الدلائل
# List only the directories
ls -d */

======================

نشر الشل من خلال البورتات 5000 . 5001 .5002
# Broadcast your shell thru ports 5000, 5001, 5002 ...
script -qf | tee >(nc -kl 5000) >(nc -kl 5001) >(nc -kl 5002)

======================

إزالة كافة الملفات المستخرجة سابقا من الملف المضغوط
# Remove all files previously extracted from a tar(.gz) file.
tar -tf <file.tar.gz> | xargs rm -r

======================

ابدء الامر ثم اقتله إذا كان لا يزال يعمل بعد 5 ثوان
# Start COMMAND, and kill it if still running after 5 seconds
timeout 7s COMMAND

======================

إزالة كافة الدلائل بشكل اذا كانت فارغة
# Recursively remove all empty directories
find . -type d -empty -delete

======================

نسخ احتياطية لجميع قواعد البيانات في ملفات فردية
# Backup all MySQL Databases to individual files
for I in $(mysql -e 'show databases' -s --skip-column-names); do mysqldump $I | gzip > "$I.sql.gz"; done

======================

قرع البورتات
# Port Knocking!
knock <host> 3000 4000 5000 && ssh -p <port> user@host && knock <host> 5000 4000 3000

======================

بحث متكرر للبحث عن كلمة أو عبارة في أنواع معينة من الملفات السي،
# Search recursively to find a word or phrase in certain file types, such as c files or h files
find . -name "*.[ch]" -exec grep -i -H "search pharse" {} \;

======================

تحميل جميع الصور من الموقع
# Download all images from a site
wget -r -l1 --no-parent -nH -nd -P/tmp -A".gif,.jpg" http://example.com/images

======================

إعادة المحاولة الأمر السابق حتى ينجح
# Retry the previous command until it exits successfully
until !!; do :; done

======================

البرنامج الذي ينتمي إلى هذا البورت في الوقت الحالي؟
# which program is this port belongs to at current time ?
lsof -i tcp:80

======================

انشاء مجلدات فرعية
# make directory tree
mkdir -p work/{d1,d2}/{src,bin,bak}

======================

منبه للتذكير بعد خمس دقائق
# Remind yourself to leave in 5 minutes (remind me)
sudo apt-get install leave
leave +5 &

======================

تحويل الفيديو إلى صوت MP3
# Convert Youtube videos to MP3
youtube-dl -t --extract-audio --audio-format mp3 YOUTUBE_URL_HERE

======================

اعرض كل شئ الا الملفات المضغوطة
# ls not pattern
ls !(*.gz)

======================

البحث عن الملفات التي تم تعديلها على النظام الخاص بعد ساعةمن الان
# Find files that have been modified on your system in the more than 60 minutes
sudo find / -mmin +60 -type f

======================

تحقق من خدمة DNS
# Get your outgoing IP address (check DNS)
dig www.yahoo.com
dig www.yahoo.com @8.8.8.8

======================

الذهاب إلى المجلد الأصلي الذي تم تحريره في الامر الاخيرر
# Go to parent directory of filename edited in last command
which !$:h

======================

الفرق بين متغيرين
# Diff on two variables
diff <(echo "$a") <(echo "$b")

======================

قائمة جميع الملفات التي تم فتحها بواسطة أمر معين
# List all files opened by a particular command
lsof -c dhcpd

======================

لعرض معلومات الجهاز
# Use file to view device information
file -s /dev/sd*

======================

البحث عن قطعة اذا تم توصيلها للحاسوب USB
# Find usb device
diff <(lsusb) <(sleep 3s && lsusb)

======================

العثور على كل ملف أكبر من 500 ميجا
# find all file larger than 500M
find / -type f -size +500M

======================

رقم عشوائي بين 1 و 8
# Random Number Between 1 And 8
echo $[RANDOM%8+1]

======================

ارسال داتا الى المقبس
# send echo to socket network
echo "hii" > /dev/tcp/192.168.1.2/25

======================

انشاء بروكسي
# Create a single-use TCP (or UDP) proxy
nc -l -p 2000 -c "nc example.org 3000"

======================

التقاطع بين ملفين
# intersection between two files
grep -Fx -f file1 file2

======================

الفرق بين صفحات الويب
# Diff remote webpages using wget
diff <(wget -q -O - URL1) <(wget -q -O - URL2)

======================

قائمة المشتركين في الشبكة
# List alive hosts in specific subnet
nmap -sP 192.168.1.0/24

======================
الحد من استخدام وحدة المعالجة المركزية في عملية معينة
# Limit the cpu usage of a process
sudo cpulimit -p pid -l 50

======================

تحويل المتصفح الى نوت باد
# Notepad in a browser (type this in the URL bar)
data:text/html, <html contenteditable>

======================

تشفير المجلد عبر اتصال ssl
# Encrypted archive with openssl and tar
tar --create --file - --posix --gzip -- <dir> | openssl enc -e -aes256 -out <file>

======================

عرض الوقت الحالي في اليابان
# Display current time in japan
zdump Japan

======================

انشاء بروكسي عبر البورت 7000
# Create a file server, listening in port 7000
while true; do nc -l 7000 | tar -xvf -; done

======================

استخراج الصوت من الفيديو فلاش
# Extract audio from Flash video (*.flv) as mp3 file
ffmpeg -i video.flv -vn -ar 44100 -ac 2 -ab 192k -f mp3 audio.mp3

======================

الحصول على جميع ملفات الكتب والملفات المضغوطة من الموقع
# get all pdf and zips from a website using wget
wget --reject html,htm --accept pdf,zip -rl1 url

======================

اضاءة الضوء في كرت الشبكة
# Blink LED Port of NIC Card
ethtool -p eth0

======================

متى اخر مرة عمل اعادة تشغيل
# Find last reboot time
who -b

======================

عرض سعة الشبكة
# Display current bandwidth statistics
ifstat -nt

======================

فحص مجموعة عناوين
# ping a range of IP addresses
nmap -sP 192.168.1.100-254

======================

استخدام مدخلات اخر امر مع الامر التالي
# Use last argument of last command
file !$

======================

تظهر جميع الأوامر
# show all commands
compgen -c

======================

تحويل ملف نيرو الي ايزو
# Convert a Nero Image File to ISO
dd bs=1k if=image.nrg of=image.iso skip=300

======================

تببه بالرنين عند اطقاء السيرفر
# beep when a server goes offline
while true; do [ "$(ping -c1W1w1 server-or-ip.com | awk '/received/ {print $4}')" != 1 ] && beep; sleep 1; done

======================

عرض سرعة الرام
# Check Ram Speed and Type in Linux
sudo dmidecode --type 17 | more

======================

النسخ الاحتياطي القرص الصلب الخاص بكد
# Backup your hard drive with dd
sudo dd if=/dev/sda of=/media/disk/backup/sda.backup

======================

استخراج الصوت من الفيديو
# Extract audio from a video
ffmpeg -i video.avi -f mp3 audio.mp3

======================

تغيير حجم صورة
# Resize an image to at least a specific resolution
convert -resize '1024x600^' image.jpg small-image.jpg

======================

مقارنة الملفات باستخدام الهاش
# Compare copies of a file with md5
cmp file1 file2

======================

الحصول على جميع اللنكات من الموقع
# Get all links of a website
lynx -dump http://www.domain.com | awk '/http/{print $2}'

======================

عرض المعلومات BIOS
# Display BIOS Information
dmidecode -t bios

======================

تحويل المجلد الى ملف ايزو
# Make ISO image of a folder
mkisofs -J -allow-lowercase -R -V "OpenCD8806" -iso-level 4 -o OpenCD.iso ~/OpenCD

======================

كم سرعة القراءة في القرص الصلب
# Testing hard disk reading speed
hdparm -t /dev/sda

reference :- commandlinefu.com




for x in `seq 0 25 11825`; do sleep 1 ; curl "http://www.commandlinefu.com/.../sort-by-votes/plaintext/$x" ; done > allcommands.txt



https://play-with-docker.com
  -redirect to-> https://labs.play-with-docker.com
    -start-> https://labs.play-with-docker.com/#
      -> https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0
        -add new instance-> https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8lndim9m000d63neg |
                                                                                                                   |-> diff=> _bra8lndi
          -ssh-> ssh ip172-18-0-8-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com                            |


https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8oflim9m000d63oo0
ssh ip172-18-0-67-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com
_bra8ofli






https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8pllim9m000d63osg
ssh ip172-18-0-68-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com


https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8pr5im9m000d63otg
ssh ip172-18-0-69-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com

https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8q0tim9m000d63oug
ssh ip172-18-0-64-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com






















https://labs.play-with-docker.com/p/br9dajdim9m000bp86eg#br9dajdi_br9e8mtim9m000bp8aa0
https://labs.play-with-docker.com/p/<50 char>







playlist=https://web.microsoftstream.com/channel/41c96d80-a07d-4e58-a021-7de8a55f81b1 && youtube-dl --cookies /media/cookies.txt $playlist




py1

playlist=https://web.microsoftstream.com/channel/41c96d80-a07d-4e58-a021-7de8a55f81b1 && youtube-dl --cookies /media/cookies.txt 





$playlist




pages


DRY Don't Repeat Yourself
DRY Code
DRY Terminal Commands

mkdir -p $HOME/bin
export PATH=$PATH:$HOME/bin

Make bash excute any code




Referance:
- books
  - advansed bash scripting
  - bash script guide
- manual
  - gnu bash manual




create new script



------------------------------------------------------------------------------------------------------------------------

search 

apk search bash | grep <program-name>

<program-name>-bash-completion

$ apk search bash

    docker-bash-completion-19.03.12-r0
    tpm-bash-completion-1.3.3-r0
    swayidle-bash-completion-1.6-r2
    vifm-bash-completion-0.10.1-r2
    ibus-bash-completion-1.5.22-r3
    grub-bash-completion-2.04-r1
    libmbim-bash-completion-1.22.0-r0
    dconf-bash-completion-0.36.0-r0
    git-bash-completion-2.26.2-r0
    py3-pip-bash-completion-20.1.1-r0
    the_silver_searcher-bash-completion-2.2.0-r0
    meson-bash-completion-0.54.2-r1
    bash-5.0.17-r0
    aws-cli-bash-completion-1.18.55-r0
    ripgrep-bash-completion-12.1.0-r0
    tracker-bash-completion-2.3.4-r2
    subversion-bash-completion-1.13.0-r2
    virt-manager-bash-completion-2.2.1-r3
    mpv-bash-completion-0.32.0-r1
    fwup-bash-completion-1.5.2-r0
    task-bash-completion-2.5.1-r2
    appstream-glib-bash-completion-0.7.17-r2
    falkon-bash-completion-3.1.0-r3
    hstr-bash-completion-2.2-r0
    cpupower-bash-completion-5.4.35-r0
    stress-ng-bash-completion-0.11.21-r0
    bash-dev-5.0.17-r0
    bash-completion-2.10-r0
    bash-completion-doc-2.10-r0
    todo.txt-cli-bash-completion-2.11.0-r0
    bubblewrap-bash-completion-0.4.1-r0
    lldpd-bash-completion-1.0.5-r0
    pdfgrep-bash-completion-2.1.2-r3
    checkbashisms-2.20.3-r0
    bspwm-bash-completion-0.9.9-r0
    rcon-bash-completion-0.5-r0
    ikona-bash-completion-1.0-r1
    rustup-bash-completion-1.21.1-r0
    wireguard-tools-bash-completion-1.0.20200510-r0
    mosh-bash-completion-1.3.2-r14
    borgbackup-bash-completion-1.1.11-r2
    notmuch-bash-completion-0.29.3-r1
    libvirt-bash-completion-6.6.0-r4
    drbd-utils-bash-completion-9.12.2-r1
    gopass-bash-completion-1.9.2-r0
    rdiff-backup-bash-completion-2.0.3-r0
    jool-tools-bash-completion-4.0.9-r0
    pulseaudio-bash-completion-13.0-r10
    nnn-bash-completion-3.2-r0
    mtr-bash-completion-0.93-r2
    lxc-bash-completion-4.0.5-r0
    youtube-dl-bash-completion-2020.05.29-r0
    elogind-bash-completion-243.4-r4
    crystal-bash-completion-0.34.0-r0
    hugo-bash-completion-0.71.1-r0
    hcloud-bash-completion-1.16.2-r1
    bash-dbg-5.0.17-r0
    checkbashisms-doc-2.20.3-r0
    ldc-bash-completion-1.20.1-r6
    opensc-bash-completion-0.20.0-r2
    open-lldp-bash-completion-0.9.46-r5
    ethtool-bash-completion-5.6-r0
    lastpass-cli-bash-completion-1.3.3-r1
    lightdm-bash-completion-1.30.0-r2
    firejail-bash-completion-0.9.62-r1
    arch-install-scripts-bash-completion-23-r0
    libqmi-bash-completion-1.24.12-r0
    pass-bash-completion-1.7.3-r2
    jo-bash-completion-1.3-r0
    cargo-bash-completions-1.44.0-r0
    docker-compose-bash-completion-1.25.4-r3
    flatpak-bash-completion-1.6.3-r1
    zathura-bash-completion-0.4.5-r3
    cmake-bash-completion-3.17.2-r0
    faenza-icon-theme-bash-1.3.1-r6
    pacman-bash-completion-5.2.1-r2
    herbstluftwm-bash-completion-0.8.2-r0
    xbps-bash-completion-0.59.1-r0
    ceph-bash-completion-14.2.9-r1
    msitools-bash-completion-0.100-r0
    mercurial-bash-completion-5.4-r0
    networkmanager-elogind-bash-completion-1.24.2-r0
    modemmanager-bash-completion-1.12.10-r0
    wl-clipboard-bash-completion-2.0.0-r3
    fd-bash-completion-8.1.1-r0
    icingaweb2-bash-completion-2.7.3-r2
    networkmanager-bash-completion-1.24.2-r0
    sn0int-bash-completion-0.18.2-r0
    alacritty-bash-completion-0.4.2-r0
    powertop-bash-completion-2.11-r1
    cmus-bash-completion-2.8.0-r0
    ostree-bash-completion-2020.3-r0
    util-linux-bash-completion-2.35.2-r0
    ndctl-bash-completion-68-r1
    parallel-20200522-r0
    kmod-bash-completion-27-r0
    wbar-bash-completion-2.3.4-r3
    udisks2-bash-completion-2.9.0-r0
    icinga2-bash-completion-2.11.3-r1
    openvswitch-bash-completion-2.12.0-r3
    fzf-bash-completion-0.21.1-r1
    gpaste-bash-completion-3.36.3-r1
    etckeeper-bash-completion-1.18.14-r0
    perf-bash-completion-5.4.35-r0
    aria2-bash-completion-1.35.0-r0
    chezmoi-bash-completion-1.8.1-r0
    nvme-cli-bash-completion-1.11.1-r0
    btrfs-progs-bash-completion-5.6.1-r0
    mpc-bash-completion-0.33-r2
    gnome-control-center-bash-completion-3.36.4-r0
    lab-bash-completion-0.17.2-r1
    tlp-bash-completion-1.3.1-r3
    colord-bash-completion-1.4.4-r6
    go-ipfs-bash-completion-0.5.1-r0
    swaylock-bash-completion-1.5-r3
    sway-bash-completion-1.4-r5
    bash-doc-5.0.17-r0
    iproute2-bash-completion-5.6.0-r0
    openrc-bash-completion-0.42.1-r11
    polybar-bash-completion-3.4.3-r0
    restic-bash-completion-0.9.6-r1
------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------
[Zsh](http://www.zsh.org/)
==========================

The Z shell (zsh) is a Unix shell that can be used as an interactive login shell and as a powerful command interpreter for shell scripting. Zsh can be thought of as an extended Bourne shell with a large number of improvements, including some features of bash, ksh, and tcsh.



Oh-My-Zsh is an open source, community-driven framework for managing your ZSH configuration. It comes bundled with a ton of helpful functions, helpers, plugins and lots of themes to make your command line look fancy!

# install zsh then run oh-my-zsh script (sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)")

- upgrade_oh_my_zsh
- uninstall_oh_my_zsh

------------------------------------------------------------------------------------------------------------------------
Default: ZSH_THEME="robbyrussell"
faveourite: ZSH_THEME="agnoster"
------------------------------------------------------------------------------------------------------------------------
ZSH_THEME="random"

ZSH_THEME_RANDOM_CANDIDATES=(
  "robbyrussell"
  "agnoster"
)
------------------------------------------------------------------------------------------------------------------------
> plugins (https://github.com/robbyrussell/oh-my-zsh/tree/master/plugins)
plugins=(
  git
  bundler
  dotenv
  osx
  rake
  rbenv
  ruby
)
------------------------------------------------------------------------------------------------------------------------

This is the Z Shell configuration function for new users,
zsh-newuser-install.
You are seeing this message because you have no zsh startup files
(the files .zshenv, .zprofile, .zshrc, .zlogin in the directory
~).  This function can help you with a few settings that should
make your use of the shell easier.

You can:

(q)  Quit and do nothing.  The function will be run again next time.

(0)  Exit, creating the file ~/.zshrc containing just a comment.
     That will prevent this function being run again.

(1)  Continue to the main menu.

(2)  Populate your ~/.zshrc with the configuration recommended
     by the system administrator and exit (you will need to edit
     the file by hand, if so desired).

--- Type one of the keys in parentheses --- 





Looking for an existing zsh config...
Using the Oh My Zsh template file and adding it to ~/.zshrc
Time to change your default shell to zsh!
Password: 


------------------------------------------------------------------------------------------------------------------------
export ZSH="~/oh-my-zsh"
ZSH_THEME="agnoster"

plugins=(
  git
  vscode
)

source $ZSH/oh-my-zsh.sh
------------------------------------------------------------------------------------------------------------------------
.plugin.zsh
.theme.zsh
~/oh-my-zsh/
- cache/
- CONTRIBUTING.md
- custom/
- lib/
- LICENSE.txt
- log/
- oh-my-zsh.sh
- plugins/
- README.md
- templates/
- themes/
- tools/






/home/sabry/.oh-my-zsh/
├── cache
│   ├── SYS_ALL_UNITS
│   └── SYS_REALLY_ALL_UNITS
├── CONTRIBUTING.md
├── custom
│   ├── example.zsh
│   ├── plugins
│   │   └── example
│   │       └── example.plugin.zsh
│   └── themes
├── lib
│   ├── bzr.zsh
│   ├── clipboard.zsh
│   ├── compfix.zsh
│   ├── completion.zsh
│   ├── correction.zsh
│   ├── diagnostics.zsh
│   ├── directories.zsh
│   ├── functions.zsh
│   ├── git.zsh
│   ├── grep.zsh
│   ├── history.zsh
│   ├── key-bindings.zsh
│   ├── misc.zsh
│   ├── prompt_info_functions.zsh
│   ├── spectrum.zsh
│   ├── termsupport.zsh
│   └── theme-and-appearance.zsh
├── LICENSE.txt
├── log
│   └── update.lock
├── oh-my-zsh.sh
├── plugins
│   ├── adb
│   │   ├── _adb
│   │   └── README.md
│   ├── ant
│   │   └── ant.plugin.zsh
│   ├── apache2-macports
│   │   ├── apache2-macports.plugin.zsh
│   │   └── README.md
│   ├── arcanist
│   │   ├── arcanist.plugin.zsh
│   │   └── README.md
│   ├── archlinux
│   │   ├── archlinux.plugin.zsh
│   │   └── README.md
│   ├── asdf
│   │   ├── asdf.plugin.zsh
│   │   └── README.md
│   ├── autoenv
│   │   └── autoenv.plugin.zsh
│   ├── autojump
│   │   └── autojump.plugin.zsh
│   ├── autopep8
│   │   ├── _autopep8
│   │   └── autopep8.plugin.zsh
│   ├── aws
│   │   └── aws.plugin.zsh
│   ├── battery
│   │   └── battery.plugin.zsh
│   ├── bbedit
│   │   ├── bbedit.plugin.zsh
│   │   └── README.md
│   ├── bgnotify
│   │   ├── bgnotify.plugin.zsh
│   │   └── README.md
│   ├── boot2docker
│   │   ├── _boot2docker
│   │   └── README.md
│   ├── bower
│   │   ├── _bower
│   │   └── bower.plugin.zsh
│   ├── branch
│   │   ├── branch.plugin.zsh
│   │   └── README.md
│   ├── brew
│   │   └── brew.plugin.zsh
│   ├── bundler
│   │   ├── _bundler
│   │   ├── bundler.plugin.zsh
│   │   └── README.md
│   ├── bwana
│   │   └── bwana.plugin.zsh
│   ├── cabal
│   │   └── cabal.plugin.zsh
│   ├── cake
│   │   └── cake.plugin.zsh
│   ├── cakephp3
│   │   └── cakephp3.plugin.zsh
│   ├── capistrano
│   │   ├── _capistrano
│   │   └── capistrano.plugin.zsh
│   ├── cargo
│   │   ├── _cargo
│   │   └── README.md
│   ├── cask
│   │   ├── cask.plugin.zsh
│   │   └── README.md
│   ├── catimg
│   │   ├── catimg.plugin.zsh
│   │   ├── catimg.sh
│   │   └── colors.png
│   ├── celery
│   │   └── _celery
│   ├── chruby
│   │   └── chruby.plugin.zsh
│   ├── chucknorris
│   │   ├── chucknorris.plugin.zsh
│   │   ├── fortunes
│   │   │   └── chucknorris
│   │   └── LICENSE
│   ├── cloudapp
│   │   ├── cloudapp.plugin.zsh
│   │   └── cloudapp.rb
│   ├── codeclimate
│   │   └── _codeclimate
│   ├── coffee
│   │   ├── _coffee
│   │   ├── coffee.plugin.zsh
│   │   └── README.md
│   ├── colemak
│   │   ├── colemak-less
│   │   └── colemak.plugin.zsh
│   ├── colored-man-pages
│   │   └── colored-man-pages.plugin.zsh
│   ├── colorize
│   │   └── colorize.plugin.zsh
│   ├── command-not-found
│   │   └── command-not-found.plugin.zsh
│   ├── common-aliases
│   │   └── common-aliases.plugin.zsh
│   ├── compleat
│   │   └── compleat.plugin.zsh
│   ├── composer
│   │   └── composer.plugin.zsh
│   ├── copybuffer
│   │   ├── copybuffer.plugin.zsh
│   │   └── README.md
│   ├── copydir
│   │   └── copydir.plugin.zsh
│   ├── copyfile
│   │   └── copyfile.plugin.zsh
│   ├── cp
│   │   ├── cp.plugin.zsh
│   │   └── README.md
│   ├── cpanm
│   │   └── _cpanm
│   ├── debian
│   │   └── debian.plugin.zsh
│   ├── dircycle
│   │   └── dircycle.plugin.zsh
│   ├── dirhistory
│   │   └── dirhistory.plugin.zsh
│   ├── dirpersist
│   │   └── dirpersist.plugin.zsh
│   ├── django
│   │   └── django.plugin.zsh
│   ├── dnf
│   │   ├── dnf.plugin.zsh
│   │   └── README.md
│   ├── docker
│   │   ├── _docker
│   │   └── README.md
│   ├── docker-compose
│   │   ├── _docker-compose
│   │   ├── docker-compose.plugin.zsh
│   │   └── README.md
│   ├── docker-machine
│   │   ├── docker-machine.plugin.zsh
│   │   └── README.md
│   ├── dotenv
│   │   ├── dotenv.plugin.zsh
│   │   └── README.md
│   ├── droplr
│   │   ├── droplr.plugin.zsh
│   │   └── README.md
│   ├── eecms
│   │   └── eecms.plugin.zsh
│   ├── emacs
│   │   ├── emacsclient.sh
│   │   └── emacs.plugin.zsh
│   ├── ember-cli
│   │   ├── ember-cli.plugin.zsh
│   │   └── README.md
│   ├── emoji
│   │   ├── emoji-char-definitions.zsh
│   │   ├── emoji-data.txt
│   │   ├── emoji.plugin.zsh
│   │   ├── README.md
│   │   └── update_emoji.pl
│   ├── emoji-clock
│   │   └── emoji-clock.plugin.zsh
│   ├── emotty
│   │   ├── emotty_emoji_set.zsh
│   │   ├── emotty_floral_set.zsh
│   │   ├── emotty_love_set.zsh
│   │   ├── emotty_nature_set.zsh
│   │   ├── emotty.plugin.zsh
│   │   ├── emotty_stellar_set.zsh
│   │   └── emotty_zodiac_set.zsh
│   ├── encode64
│   │   └── encode64.plugin.zsh
│   ├── extract
│   │   ├── _extract
│   │   ├── extract.plugin.zsh
│   │   └── README.md
│   ├── fabric
│   │   ├── _fab
│   │   └── fabric.plugin.zsh
│   ├── fancy-ctrl-z
│   │   ├── fancy-ctrl-z.plugin.zsh
│   │   └── README.md
│   ├── fasd
│   │   └── fasd.plugin.zsh
│   ├── fastfile
│   │   └── fastfile.plugin.zsh
│   ├── fbterm
│   │   └── fbterm.plugin.zsh
│   ├── fedora
│   │   ├── fedora.plugin.zsh
│   │   └── README.md
│   ├── firewalld
│   │   ├── firewalld.plugin.zsh
│   │   └── readme.md
│   ├── forklift
│   │   ├── forklift.plugin.zsh
│   │   └── README.md
│   ├── fossil
│   │   ├── fossil.plugin.zsh
│   │   └── README.md
│   ├── frontend-search
│   │   ├── frontend-search.plugin.zsh
│   │   ├── _frontend-search.sh
│   │   └── README.md
│   ├── gas
│   │   └── _gas
│   ├── gb
│   │   ├── _gb
│   │   └── README.md
│   ├── geeknote
│   │   ├── _geeknote
│   │   ├── geeknote.plugin.zsh
│   │   └── README.md
│   ├── gem
│   │   ├── _gem
│   │   └── gem.plugin.zsh
│   ├── git
│   │   ├── git.plugin.zsh
│   │   └── README.md
│   ├── git-extras
│   │   ├── git-extras.plugin.zsh
│   │   └── README.md
│   ├── gitfast
│   │   ├── _git
│   │   ├── git-completion.bash
│   │   ├── gitfast.plugin.zsh
│   │   └── git-prompt.sh
│   ├── git-flow
│   │   ├── git-flow.plugin.zsh
│   │   └── README.md
│   ├── git-flow-avh
│   │   └── git-flow-avh.plugin.zsh
│   ├── github
│   │   ├── github.plugin.zsh
│   │   ├── _hub
│   │   └── README.md
│   ├── git-hubflow
│   │   └── git-hubflow.plugin.zsh
│   ├── gitignore
│   │   └── gitignore.plugin.zsh
│   ├── git-prompt
│   │   ├── git-prompt.plugin.zsh
│   │   └── gitstatus.py
│   ├── git-remote-branch
│   │   └── git-remote-branch.plugin.zsh
│   ├── glassfish
│   │   ├── _asadmin
│   │   └── glassfish.plugin.zsh
│   ├── globalias
│   │   ├── globalias.plugin.zsh
│   │   └── README.md
│   ├── gnu-utils
│   │   └── gnu-utils.plugin.zsh
│   ├── go
│   │   └── go.plugin.zsh -> ../golang/golang.plugin.zsh
│   ├── golang
│   │   ├── golang.plugin.zsh
│   │   └── templates
│   │       ├── package.txt
│   │       └── search.txt
│   ├── gpg-agent
│   │   └── gpg-agent.plugin.zsh
│   ├── gradle
│   │   ├── _gradle -> gradle.plugin.zsh
│   │   ├── gradle.plugin.zsh
│   │   └── _gradlew -> gradle.plugin.zsh
│   ├── grails
│   │   └── grails.plugin.zsh
│   ├── grunt
│   │   └── grunt.plugin.zsh
│   ├── gulp
│   │   └── gulp.plugin.zsh
│   ├── helm
│   │   └── helm.plugin.zsh
│   ├── heroku
│   │   └── _heroku
│   ├── history
│   │   ├── history.plugin.zsh
│   │   └── README.md
│   ├── history-substring-search
│   │   ├── history-substring-search.plugin.zsh
│   │   ├── history-substring-search.zsh
│   │   ├── README.md
│   │   └── update-from-upstream.zsh
│   ├── httpie
│   │   ├── httpie.plugin.zsh
│   │   └── README.md
│   ├── iterm2
│   │   └── iterm2.plugin.zsh
│   ├── iwhois
│   │   └── iwhois.plugin.zsh
│   ├── jake-node
│   │   └── jake-node.plugin.zsh
│   ├── jhbuild
│   │   ├── jhbuild.plugin.zsh
│   │   └── README.md
│   ├── jira
│   │   ├── _jira
│   │   ├── jira.plugin.zsh
│   │   └── README.md
│   ├── jruby
│   │   └── jruby.plugin.zsh
│   ├── jsontools
│   │   ├── jsontools.plugin.zsh
│   │   └── README.md
│   ├── jump
│   │   └── jump.plugin.zsh
│   ├── kate
│   │   └── kate.plugin.zsh
│   ├── kitchen
│   │   └── _kitchen
│   ├── knife
│   │   └── _knife
│   ├── knife_ssh
│   │   └── knife_ssh.plugin.zsh
│   ├── kops
│   │   └── kops.plugin.zsh
│   ├── kubectl
│   │   └── kubectl.plugin.zsh
│   ├── kube-ps1
│   │   ├── kube-ps1.zsh
│   │   └── README.md
│   ├── laravel
│   │   ├── _artisan
│   │   └── laravel.plugin.zsh
│   ├── laravel4
│   │   └── laravel4.plugin.zsh
│   ├── laravel5
│   │   └── laravel5.plugin.zsh
│   ├── last-working-dir
│   │   ├── last-working-dir.plugin.zsh
│   │   └── README.md
│   ├── lein
│   │   └── lein.plugin.zsh
│   ├── lighthouse
│   │   └── lighthouse.plugin.zsh
│   ├── lol
│   │   └── lol.plugin.zsh
│   ├── macports
│   │   ├── macports.plugin.zsh
│   │   └── _port
│   ├── man
│   │   └── man.zsh
│   ├── marked2
│   │   ├── marked2.plugin.zsh
│   │   └── README.md
│   ├── mercurial
│   │   ├── mercurial.plugin.zsh
│   │   └── README.md
│   ├── meteor
│   │   ├── _meteor
│   │   ├── meteor.plugin.zsh
│   │   └── README.md
│   ├── mix
│   │   └── _mix
│   ├── mix-fast
│   │   ├── mix-fast.plugin.zsh
│   │   └── README.md
│   ├── mosh
│   │   └── mosh.plugin.zsh
│   ├── mvn
│   │   ├── mvn.plugin.zsh
│   │   └── README.md
│   ├── mysql-macports
│   │   └── mysql-macports.plugin.zsh
│   ├── n98-magerun
│   │   └── n98-magerun.plugin.zsh
│   ├── nanoc
│   │   ├── _nanoc
│   │   └── nanoc.plugin.zsh
│   ├── ng
│   │   ├── ng.plugin.zsh
│   │   └── README.md
│   ├── nmap
│   │   ├── nmap.plugin.zsh
│   │   └── README.md
│   ├── node
│   │   └── node.plugin.zsh
│   ├── nomad
│   │   ├── _nomad
│   │   └── README.md
│   ├── npm
│   │   └── npm.plugin.zsh
│   ├── npx
│   │   ├── npx.plugin.zsh
│   │   └── README.md
│   ├── nyan
│   │   └── nyan.plugin.zsh
│   ├── oc
│   │   └── oc.plugin.zsh
│   ├── osx
│   │   ├── osx.plugin.zsh
│   │   ├── README.md
│   │   └── spotify
│   ├── pass
│   │   └── _pass
│   ├── paver
│   │   └── paver.plugin.zsh
│   ├── pep8
│   │   └── _pep8
│   ├── per-directory-history
│   │   ├── per-directory-history.plugin.zsh -> per-directory-history.zsh
│   │   ├── per-directory-history.zsh
│   │   └── README.md
│   ├── perl
│   │   └── perl.plugin.zsh
│   ├── perms
│   │   ├── perms.plugin.zsh
│   │   └── README.md
│   ├── phing
│   │   └── phing.plugin.zsh
│   ├── pip
│   │   ├── _pip
│   │   └── pip.plugin.zsh
│   ├── pj
│   │   ├── pj.plugin.zsh
│   │   └── README.md
│   ├── pod
│   │   └── _pod
│   ├── postgres
│   │   └── postgres.plugin.zsh
│   ├── pow
│   │   └── pow.plugin.zsh
│   ├── powder
│   │   └── _powder
│   ├── powify
│   │   └── _powify
│   ├── profiles
│   │   └── profiles.plugin.zsh
│   ├── pyenv
│   │   └── pyenv.plugin.zsh
│   ├── pylint
│   │   ├── _pylint
│   │   └── pylint.plugin.zsh
│   ├── python
│   │   ├── _python
│   │   └── python.plugin.zsh
│   ├── rails
│   │   ├── _rails
│   │   └── rails.plugin.zsh
│   ├── rake
│   │   └── rake.plugin.zsh
│   ├── rake-fast
│   │   ├── rake-fast.plugin.zsh
│   │   └── README.md
│   ├── rand-quote
│   │   └── rand-quote.plugin.zsh
│   ├── rbenv
│   │   └── rbenv.plugin.zsh
│   ├── rbfu
│   │   └── rbfu.plugin.zsh
│   ├── react-native
│   │   ├── _react-native
│   │   ├── react-native.plugin.zsh
│   │   └── README.md
│   ├── rebar
│   │   └── _rebar
│   ├── redis-cli
│   │   └── _redis-cli
│   ├── repo
│   │   ├── README.md
│   │   ├── _repo
│   │   └── repo.plugin.zsh
│   ├── rsync
│   │   └── rsync.plugin.zsh
│   ├── ruby
│   │   └── ruby.plugin.zsh
│   ├── rust
│   │   └── _rust
│   ├── rvm
│   │   └── rvm.plugin.zsh
│   ├── safe-paste
│   │   └── safe-paste.plugin.zsh
│   ├── sbt
│   │   ├── _sbt
│   │   └── sbt.plugin.zsh
│   ├── scala
│   │   └── _scala
│   ├── scd
│   │   ├── README.md
│   │   ├── scd
│   │   └── scd.plugin.zsh
│   ├── screen
│   │   └── screen.plugin.zsh
│   ├── scw
│   │   ├── README.md
│   │   └── _scw
│   ├── sfffe
│   │   └── sfffe.plugin.zsh
│   ├── shrink-path
│   │   ├── README.md
│   │   └── shrink-path.plugin.zsh
│   ├── singlechar
│   │   └── singlechar.plugin.zsh
│   ├── spring
│   │   ├── README.md
│   │   └── _spring
│   ├── sprunge
│   │   └── sprunge.plugin.zsh
│   ├── ssh-agent
│   │   ├── README.md
│   │   └── ssh-agent.plugin.zsh
│   ├── stack
│   │   └── stack.plugin.zsh
│   ├── sublime
│   │   ├── README.md
│   │   └── sublime.plugin.zsh
│   ├── sudo
│   │   └── sudo.plugin.zsh
│   ├── supervisor
│   │   ├── _supervisorctl
│   │   ├── _supervisord
│   │   └── supervisor.plugin.zsh
│   ├── suse
│   │   └── suse.plugin.zsh
│   ├── svn
│   │   ├── README.md
│   │   └── svn.plugin.zsh
│   ├── svn-fast-info
│   │   └── svn-fast-info.plugin.zsh
│   ├── swiftpm
│   │   ├── README.md
│   │   └── swiftpm.plugin.zsh
│   ├── symfony
│   │   └── symfony.plugin.zsh
│   ├── symfony2
│   │   └── symfony2.plugin.zsh
│   ├── systemadmin
│   │   └── systemadmin.plugin.zsh
│   ├── systemd
│   │   └── systemd.plugin.zsh
│   ├── taskwarrior
│   │   ├── README.md
│   │   ├── _task
│   │   └── taskwarrior.plugin.zsh
│   ├── terminalapp
│   │   └── terminalapp.plugin.zsh
│   ├── terminitor
│   │   └── _terminitor
│   ├── terraform
│   │   ├── README.md
│   │   ├── _terraform
│   │   └── terraform.plugin.zsh
│   ├── textastic
│   │   ├── README.md
│   │   └── textastic.plugin.zsh
│   ├── textmate
│   │   └── textmate.plugin.zsh
│   ├── thefuck
│   │   ├── README.md
│   │   └── thefuck.plugin.zsh
│   ├── themes
│   │   ├── _theme
│   │   └── themes.plugin.zsh
│   ├── thor
│   │   └── _thor
│   ├── tig
│   │   ├── README.md
│   │   └── tig.plugin.zsh
│   ├── tmux
│   │   ├── tmux.extra.conf
│   │   ├── tmux.only.conf
│   │   └── tmux.plugin.zsh
│   ├── tmux-cssh
│   │   └── _tmux-cssh
│   ├── tmuxinator
│   │   └── _tmuxinator
│   ├── torrent
│   │   └── torrent.plugin.zsh
│   ├── tugboat
│   │   └── _tugboat
│   ├── ubuntu
│   │   ├── readme.md
│   │   └── ubuntu.plugin.zsh
│   ├── urltools
│   │   └── urltools.plugin.zsh
│   ├── vagrant
│   │   └── _vagrant
│   ├── vault
│   │   ├── README.md
│   │   └── _vault
│   ├── vim-interaction
│   │   ├── README.md
│   │   └── vim-interaction.plugin.zsh
│   ├── vi-mode
│   │   ├── README.md
│   │   └── vi-mode.plugin.zsh
│   ├── virtualenv
│   │   └── virtualenv.plugin.zsh
│   ├── virtualenvwrapper
│   │   └── virtualenvwrapper.plugin.zsh
│   ├── vundle
│   │   └── vundle.plugin.zsh
│   ├── wakeonlan
│   │   ├── README
│   │   ├── _wake
│   │   └── wakeonlan.plugin.zsh
│   ├── wd
│   │   ├── LICENSE
│   │   ├── README.md
│   │   ├── wd.plugin.zsh
│   │   ├── _wd.sh
│   │   └── wd.sh
│   ├── web-search
│   │   └── web-search.plugin.zsh
│   ├── wp-cli
│   │   ├── README.md
│   │   └── wp-cli.plugin.zsh
│   ├── xcode
│   │   ├── README.md
│   │   ├── xcode.plugin.zsh
│   │   └── _xcselv
│   ├── yarn
│   │   └── yarn.plugin.zsh
│   ├── yii
│   │   └── yii.plugin.zsh
│   ├── yii2
│   │   ├── README.md
│   │   └── yii2.plugin.zsh
│   ├── yum
│   │   └── yum.plugin.zsh
│   ├── z
│   │   ├── Makefile
│   │   ├── README
│   │   ├── z.1
│   │   ├── z.plugin.zsh
│   │   └── z.sh
│   ├── zeus
│   │   ├── README.md
│   │   ├── _zeus
│   │   └── zeus.plugin.zsh
│   ├── zsh-navigation-tools
│   │   ├── LICENSE
│   │   ├── n-aliases
│   │   ├── n-cd
│   │   ├── n-env
│   │   ├── NEWS
│   │   ├── n-functions
│   │   ├── n-help
│   │   ├── n-history
│   │   ├── _n-kill
│   │   ├── n-kill
│   │   ├── n-list
│   │   ├── n-list-draw
│   │   ├── n-list-input
│   │   ├── n-options
│   │   ├── n-panelize
│   │   ├── README.md
│   │   ├── znt-cd-widget
│   │   ├── znt-history-widget
│   │   ├── znt-kill-widget
│   │   ├── znt-tmux.zsh
│   │   ├── znt-usetty-wrapper
│   │   └── zsh-navigation-tools.plugin.zsh
│   └── zsh_reload
│       └── zsh_reload.plugin.zsh
├── README.md
├── templates
│   └── zshrc.zsh-template
├── themes
│   ├── 3den.zsh-theme
│   ├── adben.zsh-theme
│   ├── af-magic.zsh-theme
│   ├── afowler.zsh-theme
│   ├── agnoster.zsh-theme
│   ├── alanpeabody.zsh-theme
│   ├── amuse.zsh-theme
│   ├── apple.zsh-theme
│   ├── arrow.zsh-theme
│   ├── aussiegeek.zsh-theme
│   ├── avit.zsh-theme
│   ├── awesomepanda.zsh-theme
│   ├── bira.zsh-theme
│   ├── blinks.zsh-theme
│   ├── bureau.zsh-theme
│   ├── candy-kingdom.zsh-theme
│   ├── candy.zsh-theme
│   ├── clean.zsh-theme
│   ├── cloud.zsh-theme
│   ├── crcandy.zsh-theme
│   ├── crunch.zsh-theme
│   ├── cypher.zsh-theme
│   ├── dallas.zsh-theme
│   ├── darkblood.zsh-theme
│   ├── daveverwer.zsh-theme
│   ├── dieter.zsh-theme
│   ├── dogenpunk.zsh-theme
│   ├── dpoggi.zsh-theme
│   ├── dstufft.zsh-theme
│   ├── dst.zsh-theme
│   ├── duellj.zsh-theme
│   ├── eastwood.zsh-theme
│   ├── edvardm.zsh-theme
│   ├── emotty.zsh-theme
│   ├── essembeh.zsh-theme
│   ├── evan.zsh-theme
│   ├── example.zsh-theme
│   ├── fino-time.zsh-theme
│   ├── fino.zsh-theme
│   ├── fishy.zsh-theme
│   ├── flazz.zsh-theme
│   ├── fletcherm.zsh-theme
│   ├── fox.zsh-theme
│   ├── frisk.zsh-theme
│   ├── frontcube.zsh-theme
│   ├── funky.zsh-theme
│   ├── fwalch.zsh-theme
│   ├── gallifrey.zsh-theme
│   ├── gallois.zsh-theme
│   ├── garyblessington.zsh-theme
│   ├── gentoo.zsh-theme
│   ├── geoffgarside.zsh-theme
│   ├── gianu.zsh-theme
│   ├── gnzh.zsh-theme
│   ├── gozilla.zsh-theme
│   ├── half-life.zsh-theme
│   ├── humza.zsh-theme
│   ├── imajes.zsh-theme
│   ├── intheloop.zsh-theme
│   ├── itchy.zsh-theme
│   ├── jaischeema.zsh-theme
│   ├── jbergantine.zsh-theme
│   ├── jispwoso.zsh-theme
│   ├── jnrowe.zsh-theme
│   ├── jonathan.zsh-theme
│   ├── josh.zsh-theme
│   ├── jreese.zsh-theme
│   ├── jtriley.zsh-theme
│   ├── juanghurtado.zsh-theme
│   ├── junkfood.zsh-theme
│   ├── kafeitu.zsh-theme
│   ├── kardan.zsh-theme
│   ├── kennethreitz.zsh-theme
│   ├── kiwi.zsh-theme
│   ├── kolo.zsh-theme
│   ├── kphoen.zsh-theme
│   ├── lambda.zsh-theme
│   ├── linuxonly.zsh-theme
│   ├── lukerandall.zsh-theme
│   ├── macovsky-ruby.zsh-theme
│   ├── macovsky.zsh-theme
│   ├── maran.zsh-theme
│   ├── mgutz.zsh-theme
│   ├── mh.zsh-theme
│   ├── michelebologna.zsh-theme
│   ├── mikeh.zsh-theme
│   ├── miloshadzic.zsh-theme
│   ├── minimal.zsh-theme
│   ├── mira.zsh-theme
│   ├── mortalscumbag.zsh-theme
│   ├── mrtazz.zsh-theme
│   ├── murilasso.zsh-theme
│   ├── muse.zsh-theme
│   ├── nanotech.zsh-theme
│   ├── nebirhos.zsh-theme
│   ├── nicoulaj.zsh-theme
│   ├── norm.zsh-theme
│   ├── obraun.zsh-theme
│   ├── peepcode.zsh-theme
│   ├── philips.zsh-theme
│   ├── pmcgee.zsh-theme
│   ├── powerlevel9k
│   │   ├── CHANGELOG.md
│   │   ├── CODE_OF_CONDUCT.md
│   │   ├── debug
│   │   │   ├── font-issues.zsh
│   │   │   └── iterm.zsh
│   │   ├── docker
│   │   │   ├── antibody
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── antigen
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── base-4.3.11
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.0.3
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.1.1
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.2
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.3.1
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.4.2
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.5.1
│   │   │   │   └── Dockerfile
│   │   │   ├── dotfile
│   │   │   │   ├── Dockerfile
│   │   │   │   └── zshrc
│   │   │   ├── fred-sudoers
│   │   │   ├── omz
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── prezto
│   │   │   │   ├── Dockerfile
│   │   │   │   └── install.zsh
│   │   │   ├── zgen
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── zim
│   │   │   │   ├── Dockerfile
│   │   │   │   └── install.zsh
│   │   │   ├── zplug
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── zplugin
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc.plugins
│   │   │   ├── zpm
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── zshing
│   │   │   │   ├── Dockerfile
│   │   │   │   └── install.zsh
│   │   │   └── zulu
│   │   │       ├── Dockerfile
│   │   │       └── install.zsh
│   │   ├── functions
│   │   │   ├── colors.zsh
│   │   │   ├── icons.zsh
│   │   │   ├── utilities.zsh
│   │   │   └── vcs.zsh
│   │   ├── LICENSE
│   │   ├── powerlevel9k.zsh-theme
│   │   ├── prompt_powerlevel9k_setup -> powerlevel9k.zsh-theme
│   │   ├── README.md
│   │   ├── shunit2
│   │   ├── test
│   │   │   ├── core
│   │   │   │   ├── color_overriding.spec
│   │   │   │   ├── joining_segments.spec
│   │   │   │   ├── prompt.spec
│   │   │   │   └── visual_identifier.spec
│   │   │   ├── functions
│   │   │   │   ├── colors.spec
│   │   │   │   ├── icons.spec
│   │   │   │   └── utilities.spec
│   │   │   ├── powerlevel9k.spec
│   │   │   ├── segments
│   │   │   │   ├── anaconda.spec
│   │   │   │   ├── aws_eb_env.spec
│   │   │   │   ├── background_jobs.spec
│   │   │   │   ├── battery.spec
│   │   │   │   ├── command_execution_time.spec
│   │   │   │   ├── context.spec
│   │   │   │   ├── custom.spec
│   │   │   │   ├── detect_virt.spec
│   │   │   │   ├── dir.spec
│   │   │   │   ├── disk_usage.spec
│   │   │   │   ├── go_version.spec
│   │   │   │   ├── ip.spec
│   │   │   │   ├── kubecontext.spec
│   │   │   │   ├── laravel_version.spec
│   │   │   │   ├── load.spec
│   │   │   │   ├── newline.spec
│   │   │   │   ├── nodeenv.spec
│   │   │   │   ├── node_version.spec
│   │   │   │   ├── nvm.spec
│   │   │   │   ├── php_version.spec
│   │   │   │   ├── public_ip.spec
│   │   │   │   ├── ram.spec
│   │   │   │   ├── rust_version.spec
│   │   │   │   ├── ssh.spec
│   │   │   │   ├── status.spec
│   │   │   │   ├── swap.spec
│   │   │   │   ├── swift_version.spec
│   │   │   │   ├── symfony_version.spec
│   │   │   │   ├── todo.spec
│   │   │   │   ├── vcs-git.spec
│   │   │   │   ├── vcs-hg.spec
│   │   │   │   ├── vi_mode.spec
│   │   │   │   └── vpn_ip.spec
│   │   │   └── suite.spec
│   │   ├── test-bsd-vm
│   │   │   ├── bootstrap.sh
│   │   │   ├── bootstrap-zero.sh
│   │   │   └── Vagrantfile
│   │   ├── test-in-docker
│   │   ├── TESTS.md
│   │   ├── test-vm
│   │   │   ├── antigen.sh
│   │   │   ├── bootstrap.sh
│   │   │   ├── omz.sh
│   │   │   ├── prezto.sh
│   │   │   ├── README.md
│   │   │   └── Vagrantfile
│   │   └── test-vm-providers
│   │       ├── plain.sh
│   │       └── setup-environment.sh
│   ├── pure.zsh-theme
│   ├── pygmalion.zsh-theme
│   ├── re5et.zsh-theme
│   ├── refined.zsh-theme
│   ├── rgm.zsh-theme
│   ├── risto.zsh-theme
│   ├── rixius.zsh-theme
│   ├── rkj-repos.zsh-theme
│   ├── rkj.zsh-theme
│   ├── robbyrussell.zsh-theme
│   ├── sammy.zsh-theme
│   ├── simonoff.zsh-theme
│   ├── simple.zsh-theme
│   ├── skaro.zsh-theme
│   ├── smt.zsh-theme
│   ├── Soliah.zsh-theme
│   ├── sonicradish.zsh-theme
│   ├── sorin.zsh-theme
│   ├── sporty_256.zsh-theme
│   ├── steeef.zsh-theme
│   ├── strug.zsh-theme
│   ├── sunaku.zsh-theme
│   ├── sunrise.zsh-theme
│   ├── superjarin.zsh-theme
│   ├── suvash.zsh-theme
│   ├── takashiyoshida.zsh-theme
│   ├── terminalparty.zsh-theme
│   ├── theunraveler.zsh-theme
│   ├── tjkirch_mod.zsh-theme
│   ├── tjkirch.zsh-theme
│   ├── tonotdo.zsh-theme
│   ├── trapd00r.zsh-theme
│   ├── wedisagree.zsh-theme
│   ├── wezm.zsh-theme
│   ├── wezm+.zsh-theme
│   ├── wuffers.zsh-theme
│   ├── xiong-chiamiov-plus.zsh-theme
│   ├── xiong-chiamiov.zsh-theme
│   ├── ys.zsh-theme
│   └── zhann.zsh-theme
└── tools
    ├── check_for_upgrade.sh
    ├── install.sh
    ├── require_tool.sh
    ├── theme_chooser.sh
    ├── uninstall.sh
    └── upgrade.sh

283 directories, 693 files



alias -s jpg="sxiv" # suffix alias
alias -g jpg="sxiv" # global alias
------------------------------------------------------------------------------------------------------------------------











My ~/.bashrc



alias ll="ls -lsa --color"
LANG=en_US.UTF-8


[[ -s "/root/.gvm/scripts/gvm" ]] && source "/root/.gvm/scripts/gvm"


file.io(){ curl -sF "file=@$1" https://file.io | jq -r '.link' | xclip -sel clip; xclip -o; }


ipinfo.io(){ curl  https://ipinfo.io | jq -r '.ip' | xclip -sel clip; }


cmdfu(){ curl "http://www.commandlinefu.com/commands/matching/$@/$(echo -n $@ | openssl base64)/plaintext"; }

weather(){ curl wttr.in/cairo; }

ip(){ curl http://www.whatismyip.org/wget -qO- icanhazip.com; }

geoip(){ curl -s "http://www.geody.com/geoip.php?ip=${1}" | sed '/^IP:/!d;s/<[^>][^>]*>//g'; }

[ -f ~/.fzf.bash ] && source ~/.fzf.bash