#include <stdio.h>
#include <unistd.h>

int main(void)
{ int my_pid, i = 0;

  my_pid = getpid();
  printf("Begin:  My pid is %d\n", my_pid);
  printf("%d: i = %d\n", getpid()%10, ++i);
  fork();
  printf("%d: i = %d\n", getpid()%10, ++i);
  fork();
  printf("%d: i = %d\n", getpid()%10, ++i);
  fork();
  printf("%d: i = %d\n", getpid()%10, ++i);
  my_pid = getpid();
  printf("End:    My pid is %d\n", my_pid);
}


