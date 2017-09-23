#include <stdio.h>
#include <signal.h>

typedef void (*fptr)();

void CtrlCHandler(int signum)
{ static int i;

  if (++i > 5) 
  { exit(0);
  }
  printf("CTRL-C Sent.\n");
}

void AlarmHandler(int signum)
{ static int i;

  if (++i > 20) 
  { exit(0);
  }
  printf("Alarm Signalled!!!.\n");
  alarm(rand()%5 + 1);
}

int main(void)
{ void f(int);		/* prototype for signal handler function */
  int i;

  signal(SIGINT, (fptr)CtrlCHandler);	/* install the handler */
  signal(SIGALRM, (fptr)AlarmHandler);
  alarm(1);
  
  while (1)
  { printf("Waiting...\n");
    sleep(1);
  }
}

