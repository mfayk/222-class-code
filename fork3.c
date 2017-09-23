#include <stdio.h>
#include <unistd.h>

int main(void)
{ int i, j;

  i = fork();

  for (j=0; j<10; j++)
  {
    if (i == 0)	/* child process */
    { printf("\t\t\tUSC: You're my Daddy!\n");
      sleep(2);
    }
    else 		/* parent process */
    {
      printf("Clemson: Who's your Daddy!?\n");
      sleep(1);
    }
  }
}
