#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>

#define true      1
#define false     0
#define ANY_CHILD 0

int main(int argc, char *argv[]) {
  pid_t pid;
  char *line = NULL;
  size_t linecap = 0;
  ssize_t linelen;
  int *stat_loc = NULL;

  while(true) {
    printf("~) ");

    linelen = getline(&line, &linecap, stdin);

    if(strcmp(line, "exit\n") == 0) {
      break;
    } else {
      pid = fork();
    }

    if(pid == 0) {
      /* in child process */

      printf("executing %s", line);
      kill(getpid(), SIGTERM);
    } 

    waitpid(ANY_CHILD, stat_loc, 0);
  }

  return 0;
}

