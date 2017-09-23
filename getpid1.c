#include <stdio.h>
#include <unistd.h>

int main(void)
{ int my_pid;

  my_pid = getpid();
  printf("Begin:  My pid is %d\n", my_pid);
  fork();
  fork();
  fork();
  my_pid = getpid();
  printf("End:    My pid is %d\n", my_pid);
}
