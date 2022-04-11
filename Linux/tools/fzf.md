[fzf]()
===

echo "red\ngreen\nblue" | fzf


options:

--multi, -m select/unselect multiple elements by TAB key to goes down after selection and Shift + TAB to goes up

--cycle

--reverse change display


support:
- mouse
- REGX
- fussy search
-  emacs keybinding
	- C-e -> end
- Ctrl + vim keybinding

`<fuzy-search-keyword> => exact search
~build sbt$ | scala$


env | fzf
alias | fzf
find * -type f -not -path '*/\./*'| fzf   === fzf
vim <C-t> -> open selected file by vim



change default atitude

environment variables:
- export FZF_DEFAULT_COMMAND='fd -type f --color=never --hidden' # by default fd hides the hidden files
- export FZF_DEFAULT_OPTS=''

vim /usr/local/** TAB => diffrance for C-t that this search for files inside /usr/local path

> bin `ls !.sh



 M-C it's not going to simply print it out it is actually going to change the directory into it

bat /etc/** TAB

ssh ** TAB


kill -9 TAB



fzf also comes with a tiny little bash script or zsa script called fzftmux okay and if you run fcftmux you can pass in a couple of commands and it will notice that if you're inside of a tmax session then it will do something awesome for you if you're not in the team accession then it will simply fall back to the regular fzf app



fzf-tmux

fzf-tmux -r 30%


export FZF_TMUX=1