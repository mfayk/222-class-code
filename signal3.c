#include <stdio.h>
#include <signal.h>

int main(void)
{ void f(int);		/* prototype for signal handler function */
  int i;

  signal(SIGINT, SIG_IGN);	/* install the handler */
  printf("You can't stop me now!\n");
  
  while (1)
  { printf("Nanny Nanny Boo Boo.\n");
    sleep(1);
  }
}

