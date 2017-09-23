#include <stdio.h>
#include <unistd.h>

int main(void)
{ int my_pid, i = 0;

  my_pid = getpid();
  printf("Begin:  My pid is %d\n", my_pid);
  printf("i = %d\n", ++i);
  fork();
  printf("i = %d\n", ++i);
  fork();
  printf("i = %d\n", ++i);
  fork();
  printf("i = %d\n", ++i);
  my_pid = getpid();
  printf("End:    My pid is %d\n", my_pid);
}

