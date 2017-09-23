#include <stdio.h>
#include <unistd.h>

int main(void)
{ int my_pid, i = 0, j;

  printf("%d: i = %d\n", getpid()%10, ++i);
  fork();
  printf("%d: i = %d\n", getpid()%10, ++i);
  fork();
  printf("%d: i = %d\n", getpid()%10, ++i);
  fork();
  printf("%d: i = %d\n", getpid()%10, ++i);

  my_pid = getpid()%10;

  while (1)
  { for (i=0; i<5*my_pid; i++)
    { printf(" ");
    }
    printf("%d is running\n", my_pid);
    for (j=0; j<1000000; j++)
    { i++;
    }
  }
}

