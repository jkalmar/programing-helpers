# programing-helpers
Some scripts that will help me(you) with programing stuff

### Bash_aliases

If you already have .bash_aliases in your system then please check it so you don't overwrite your aliases.

How to add to your system:
1. Clone this repo
2. copy .bash_aliases to your home directory (/home/{yourname} or `echo $HOME`)
3. edit .bashrc and somewhere at the end if you do not already have it in the file
```
if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi
```
4. logout and login and you should have the bash_aliases enabled. You can check it with `alias` command like this:  
```
xxx@supercomp:~/home$ alias
alias gd='git diff --color'
alias gdw='git diff --color-words="\w+|\S"'
alias gg='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'''
alias gg30='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --since="30 days ago" --author="jkalmar"'
alias gg7='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --since="7 days ago" --author="jkalmar"'
alias gga='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --all'
alias ggs='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --simplify-by-decoration'
alias gs='git status'
alias gsh='git show'
```

