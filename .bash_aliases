alias sl='ls'
alias gd='git diff --color'
alias gdw='git diff --color-words="\w+|\S"'
alias gg='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'''
alias gga='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --all'
alias ggs='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --simplify-by-decoration'
alias grep='grep --color=auto'
alias gs='git status'
alias gsh='git show'

# aliases usefull for generating commit history in 1 week or 1 month, usefull for reporting
alias gg7='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --since="7 days ago" --author="jkalmar"'
alias gg30='git log --graph --pretty=format:'\''%C(auto)%h%d %s %Cgreen%aN %Cblue%ar'\'' --since="30 days ago" --author="jkalmar"'


alias sshsuper='echo "Configure your server ip here"'

alias psudo="sudo env \"PATH=$PATH\"".
