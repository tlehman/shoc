# `shoc` is a unix shell, implemented in C. 
I wrote it while following [jstorimer's tutorial](http://www.jstorimer.com/2012/02/21/a-unix-shell-in-ruby-builtins.html) where he builds a Ruby-based shell called shirt. This is to get better at programming in C, and also learn how shells work.

# `shoc` stands for SHell On C

# TODO List
 - Use `execvp(3)` to replace simple echo. (Actually exec processes, not just dummy output)
 - Fix memory leaks
 - Make response to SIGTERM ~~more graceful~~ less terrible
