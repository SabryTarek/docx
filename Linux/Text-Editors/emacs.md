<<<<<<< HEAD
[Emacs](https://www.gnu.org/)
===
https://www.gnu.org/software/emacs/tour/index.html
-----------------------------------------------------------------------------------------------------------------
### History
some history
in __1976__ **guy Steele** published the first version of the emacs
 which isn't really the what the same program we see today
 but it's also ends up being the same year that **Bill Joe** introduces a VI into Berkeley UNIX, he is the author of Common Lisp bill joy being kind of responsible for BSD and a lot of what UNIX is now today
and so different programs developed around the same time to do the same thing but in a very different way


- gnu emacs which hasn't really changed since __1985__ was written by **Richard Stallman** and **James Gosling**
- who and James Gosling is the creator of the Java programming language 

- a lot of significant people involved in text editors developing
-----------------------------------------------------------------------------------------------------------------
### ed
- line oriented text editor so called line editor
- the standard text editor of UNIX
- written in 1970
- by **Ken Thompson**
- designed before computers have screens
- it was for teletypes which was basically a typewriter connected to a computer
- so you really were not able to view all of this text like I can in the terminal window at once
- full-screen text editor
-----------------------------------------------------------------------------------------------------------------
### readline
- GNU Library to read line
- readline keybindings are the same as Emacs keybindings
-----------------------------------------------------------------------------------------------------------------


- Emacs belongs to a family of text editors and this distinction is becoming less and less relevant
> Modes:
# every buffer take one Major Mode and many Minor Mode
- Major Mode -> mode like vim [normal-visual]
- Minor Mode -> option

- fundamental
- text
- orgmode -> markdown
-----------------------------------------------------------------------------------------------------------------
# orgmode

- *
- M-Enter
- S-Enter
-----------------------------------------------------------------------------------------------------------------
> commands:

| Vim | Emacs |
|-----|-------|
| :   |M.x= Alt+x|

M.x:
- find-file -> C-x C-f


-----------------------------------------------------------------------------------------------------------------
> keyBinding:


-----------------------------------------------------------------------------------------------------------------
> Concepts:

- Frame -> window
    - Window -> tab
        - Buffer -> text area
            - Point -> cursor
        - ModeLine -> status bar
        - miniBuffer -> command
- cut, copy -> killing
- paste -> yank
-----------------------------------------------------------------------------------------------------------------
+ سلسلة دروس إيماكس 101، مُوجّهة للمستخدمين الجدد وتُركّز على استخدام ڤانيلا إيماكس
https://tinyurl.com/y9psyogk
+ تعديل وظيفة المفتاح Caps lock إلى Control في بيئة غنوم:
https://tinyurl.com/y77lt39f
في بيئة كدي:
https://i.imgur.com/BLkAQwo.png
في نظام التشغيل ويندوز:
https://tinyurl.com/yccp8a6u
------------------------------------------------------------------------------------------------------------------
+ اختصارات الحلقة:
find-file C-x C-f

- emacs => start emas GUI
- emacs -nw => start emacs ins terminal (-nw = no window)
- C-x C-c => exit emacs
> Navigation:
    * char level:
        - C-f => front
        - C-b => back
    * word level:
        - M-f => front
        - M-b => back
    * line level:
        - C-n => next
        - C-p => previous
        - C-g C-g <line_number> => go to spacific line

    * page level:
        - C-v => next page
        - M-v => previous page
        - C-a -> start of line
        - C-e => end of line
    * buffer level
        - M-< => start of buffer
        - M-> => end of buffer
        - C-x k => kill buffer
> Search:
    - C-s => search
    - C-r => revese search
> action:
    -C-spacebar => start select
    - C-k => kill (delete)
    - C-w => cut
    - M-w => copy
    - C-y => yank (paste)
> buffer:
    - C-x b => switch buffer
    - C-x C-b => list buffer
    - C-x k => kill buffer

لتفعيل وضع السطر المرئي M-x visual-line-mode


إلغاء الأمر الذي نقوم بتنفيذه (أثناء التنفيذ) C-g 

- C-x C-s => save-file



-----------------------------------------------------------------------------------------------------------------
# compilation system

- ido
- helm
- ivy
-----------------------------------------------------------------------------------------------------------------
> Configuration

- edit global variable -> (setq auto-save-default)
- edit global function
- create new function

~/.emacs
Emacs Lisp (elisp) language



-----------------------------------------------------------------------------------------------------------------
Emacs Lisp
==========

- (setq <variable_name> <value>)
- true -> t = +1
- false -> nil = -1

-----------------------------------------------------------------------------------------------------------------
# dried (file-manager)

- C-x d
+ M-x dired
-----------------------------------------------------------------------------------------------------------------
# Packages

- GNU Elpa
- Melpa

- list-packages
U -> update repo
package-install <name>
-----------------------------------------------------------------------------------------------------------------
pre-packaged configration system for emacs
- spacemanx
- doom
	- doom-mode-line
	- doom-themes

### Emacs (starter kits) (Distributions) ()
- [spacemacs](https://www.spacemacs.org/)
- [dooom](https://github.com/hlissner/doom-emacs)
- [Scimax](https://github.com/jkitchin/scimax)
-----------------------------------------------------------------------------------------------------------------
M-x org-timer-set-timer			===			C-c C-x ; inside any org-mode file buffer





all Possible command completions are:
	org-timer
	org-timer-change-times-in-region 	
	org-timer-item
	org-timer-set-timer
	org-timer-show-remaining-time
	org-timer-start
	org-timer-stop
	org-timer-pause-or-continue


-----------------------------------------------------------------------------------------------------------------
emacs search fuzzy search swiper


anytime you see a function that Emacs that ends with "-p" that is a like a predicate function it's basically a function that returns true or nil
-----------------------------------------------------------------------------------------------------------------
2 biggest selling points of emacs:
- org-mode
- emacs lisp
-----------------------------------------------------------------------------------------------------------------

http://emacs.sexy/
http://terminal.sexy/
http://nginx.config/Usage: emacs [OPTION-OR-FILENAME]...

Run Emacs, the extensible, customizable, self-documenting real-time
display editor.  The recommended way to start Emacs for normal editing
is with no options at all.

Run M-x info RET m emacs RET m emacs invocation RET inside Emacs to
read the main documentation for these command-line arguments.

Initialization options:

--batch                     do not do interactive display; implies -q
--chdir DIR                 change to directory DIR
--daemon, --bg-daemon[=NAME] start a (named) server in the background
--fg-daemon[=NAME]          start a (named) server in the foreground
--debug-init                enable Emacs Lisp debugger for init file
--display, -d DISPLAY       use X server DISPLAY
--no-build-details          do not add build details such as time stamps
--no-desktop                do not load a saved desktop
--no-init-file, -q          load neither ~/.emacs nor default.el
--no-loadup, -nl            do not load loadup.el into bare Emacs
--no-site-file              do not load site-start.el
--no-x-resources            do not load X resources
--no-site-lisp, -nsl        do not add site-lisp directories to load-path
--no-splash                 do not display a splash screen on startup
--no-window-system, -nw     do not communicate with X, ignoring $DISPLAY
--quick, -Q                 equivalent to:
                              -q --no-site-file --no-site-lisp --no-splash
                              --no-x-resources
--script FILE               run FILE as an Emacs Lisp script
--terminal, -t DEVICE       use DEVICE for terminal I/O
--user, -u USER             load ~USER/.emacs instead of your own

Action options:

FILE                    visit FILE
+LINE                   go to line LINE in next FILE
+LINE:COLUMN            go to line LINE, column COLUMN, in next FILE
--directory, -L DIR     prepend DIR to load-path (with :DIR, append DIR)
--eval EXPR             evaluate Emacs Lisp expression EXPR
--execute EXPR          evaluate Emacs Lisp expression EXPR
--file FILE             visit FILE
--find-file FILE        visit FILE
--funcall, -f FUNC      call Emacs Lisp function FUNC with no arguments
--insert FILE           insert contents of FILE into current buffer
--kill                  exit without asking for confirmation
--load, -l FILE         load Emacs Lisp FILE using the load function
--visit FILE            visit FILE

Display options:

--background-color, -bg COLOR   window background color
--basic-display, -D             disable many display features;
                                  used for debugging Emacs
--border-color, -bd COLOR       main border color
--border-width, -bw WIDTH       width of main border
--color, --color=MODE           override color mode for character terminals;
                                  MODE defaults to `auto', and
                                  can also be `never', `always',
                                  or a mode name like `ansi8'
--cursor-color, -cr COLOR       color of the Emacs cursor indicating point
--font, -fn FONT                default font; must be fixed-width
--foreground-color, -fg COLOR   window foreground color
--fullheight, -fh               make the first frame high as the screen
--fullscreen, -fs               make the first frame fullscreen
--fullwidth, -fw                make the first frame wide as the screen
--maximized, -mm                make the first frame maximized
--geometry, -g GEOMETRY         window geometry
--no-bitmap-icon, -nbi          do not use picture of gnu for Emacs icon
--iconic                        start Emacs in iconified state
--internal-border, -ib WIDTH    width between text and main border
--line-spacing, -lsp PIXELS     additional space to put between lines
--mouse-color, -ms COLOR        mouse cursor color in Emacs window
--name NAME                     title for initial Emacs frame
--no-blinking-cursor, -nbc      disable blinking cursor
--reverse-video, -r, -rv        switch foreground and background
--title, -T TITLE               title for initial Emacs frame
--vertical-scroll-bars, -vb     enable vertical scroll bars
--xrm XRESOURCES                set additional X resources
--parent-id XID                 set parent window
--help                          display this help and exit
--version                       output version information and exit

You can generally also specify long option names with a single -; for
example, -batch as well as --batch.  You can use any unambiguous
abbreviation for a --option.

Various environment variables and window system resources also affect
the operation of Emacs.  See the main documentation.

Report bugs to bug-gnu-emacs@gnu.org.  First, please see the Bugs
section of the Emacs manual or the file BUGS.


org-mode
- Major mode correspond to  files
- file type .org
- rendered by github -> you can write your readme file in orgmode
org-agenda -> extention that use org-mode for task managment
org-export -> generate PDFs
=======
[Emacs](https://www.gnu.org/)
===
https://www.gnu.org/software/emacs/tour/index.html
-----------------------------------------------------------------------------------------------------------------
> Modes:
# every buffer take one Major Mode and many Minor Mode
- Major Mode -> mode like vim [normal-visual]
- Minor Mode -> option

- fundamental
- text
- orgmode -> markdown
-----------------------------------------------------------------------------------------------------------------
# orgmode

- *
- M-Enter
- S-Enter
-----------------------------------------------------------------------------------------------------------------
> commands:

| Vim | Emacs |
|-----|-------|
| :   |M.x= Alt+x|

M.x:
- find-file -> C-x C-f


-----------------------------------------------------------------------------------------------------------------
> keyBinding:


-----------------------------------------------------------------------------------------------------------------
> Concepts:

- Frame -> window
    - Window -> tab
        - Buffer -> text area
            - Point -> cursor
        - ModeLine -> status bar
        - miniBuffer -> command
- cut, copy -> killing
- paste -> yank
-----------------------------------------------------------------------------------------------------------------
+ سلسلة دروس إيماكس 101، مُوجّهة للمستخدمين الجدد وتُركّز على استخدام ڤانيلا إيماكس
https://tinyurl.com/y9psyogk
+ تعديل وظيفة المفتاح Caps lock إلى Control في بيئة غنوم:
https://tinyurl.com/y77lt39f
في بيئة كدي:
https://i.imgur.com/BLkAQwo.png
في نظام التشغيل ويندوز:
https://tinyurl.com/yccp8a6u
------------------------------------------------------------------------------------------------------------------
+ اختصارات الحلقة:
find-file C-x C-f

- emacs => start emas GUI
- emacs -nw => start emacs ins terminal (-nw = no window)
- C-x C-c => exit emacs
> Navigation:
    * char level:
        - C-f => front
        - C-b => back
    * word level:
        - M-f => front
        - M-b => back
    * line level:
        - C-n => next
        - C-p => previous
        - C-g C-g <line_number> => go to spacific line

    * page level:
        - C-v => next page
        - M-v => previous page
        - C-a -> start of line
        - C-e => end of line
    * buffer level
        - M-< => start of buffer
        - M-> => end of buffer
        - C-x k => kill buffer
> Search:
    - C-s => search
    - C-r => revese search
> action:
    -C-spacebar => start select
    - C-k => kill (delete)
    - C-w => cut
    - M-w => copy
    - C-y => yank (paste)
> buffer:
    - C-x b => switch buffer
    - C-x C-b => list buffer
    - C-x k => kill buffer

لتفعيل وضع السطر المرئي M-x visual-line-mode


إلغاء الأمر الذي نقوم بتنفيذه (أثناء التنفيذ) C-g 

- C-x C-s => save-file



-----------------------------------------------------------------------------------------------------------------
# compilation system

- ido
- helm
- ivy
-----------------------------------------------------------------------------------------------------------------
> Configuration

- edit global variable -> (setq auto-save-default)
- edit global function
- create new function

Emacs Lisp (elisp) language

~/.emacs
~/.emacs.d/
    - init.e
    - package.el
    - congif.el
settings.org
-----------------------------------------------------------------------------------------------------------------
Emacs Lisp
==========

- (setq <variable_name> <value>)
- true -> t = +1
- false -> nil = -1
(global-set-key (kbd "<f6>") 'org-capture)
-----------------------------------------------------------------------------------------------------------------
# dried (file-manager)

- C-x d
+ M-x dired
-----------------------------------------------------------------------------------------------------------------
# Packages

- GNU Elpa
- Melpa

- list-packages
U -> update repo
package-install <name>
-----------------------------------------------------------------------------------------------------------------
* Emacs Distribution
    - Doom
    - Spacemacs
    - Scimax
    - [](https://github.com/rougier/elegant-emacs)
    - [](https://github.com/rougier/nano-emacs)

http://emacs.sexy/
http://terminal.sexy/
http://nginx.config/





### [Emacs tour](https://www.gnu.org/software/emacs/tour/index.html)
---
- extensible
- customizable
- self-documenting
- real-time display editor
---
---
- integrates with GDB to provide an IDE (M-x gdb)
- compare two files and highlight their differences (M-x ediff)
- Emacs is a file manager (M-x dired)
- read news, mail, and RSS feeds (M-x gnus)
- can even play tetris in Emacs (M-x tetris)

##### some people consider Emacs to be not merely a text editor but almost a complete operating system. Some users find that they can do almost all of their work from within Emacs.
---
### More useful features
###### Integration with common tools

- M-x shell
- M-x eshell
- M-x compile
- M-x gdb
- M-x grep
- M-x man
- M-x calculator
- M-x calendar
- M-x phases-of-moon
- M-x shell-command or M-!
- M-x shell-command-on-region or M-|
- 
- 
---
* [Emacs games](https://www.emacswiki.org/emacs/CategoryGames)
    - M-x tetris
    - M-x hanoi
    - M-x doctor
- 
- 

### Tips for beginners
- C-/
- C-g
- [instructions for moving Ctrl](https://www.emacswiki.org/emacs/MovingTheCtrlKey)
- 
### Migrating to Emacs
---
###### Emacs for Windows users "CUA mode"
- C-z -> suspend
- C-x -> prefix key
- C-c -> prefix key
- C-v -> next page
>> learn more about CUA mode by typing C-h f cua-mode RET
---
###### Emacs for vi/vim users Viper (M-x viper-mode)
- It provides different levels of vi-adherence, depending on how vi-like you want your Emacs to be.
>> For more information about Viper, see (info "(viper)")
---
### Emacs resources
- [separate manuals (C-h i d)](https://www.gnu.org/software/emacs/manual/)
    - [GNU Emacs Manual (C-h r)](https://www.gnu.org/software/emacs/manual/emacs.html)
    - [GNU Emacs FAQ (C-h C-f)](https://www.gnu.org/software/emacs/manual/efaq.html)
- [EmacsWiki](http://www.emacswiki.org/)
- [help-gnu-emacs mailing list](http://lists.gnu.org/mailman/listinfo/help-gnu-emacs)



.md
.org
.rst reStructuredText
docutils
rst2html,py
.

M-x load-file
M-x text-scale-increase alias: M-x text-increase

M-x



- magit
- projectile
- evil
- use-package
- EWW
- MU4e
- elfeed
- GNUS
- dired
- neotree -> nerdtree in vim
- dash
- doom-theme
- tramp
- ibuffer
- eshell
- ivy
- whichkey
- hydera
- vterm




- org-calc
- org-toc
- org-bable
- org-tangle
- 
>>>>>>> 4af8c228a1e5f92e035f488b94443d6c889500e6
