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
spacemacs
dooom


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
