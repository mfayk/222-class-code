#include <stdio.h>
#include <signal.h>

typedef void (*fptr)();

void SignalHandler(int signum)
{ static int i;

  switch (i++)
  { case 0:
      printf("Yes.\n");
      break;
    case 1:
      printf("YES!\n");
      break;
    case 2:
      printf("YES!!!\n");
      break;
    case 3:
      printf("YES! YES!! YES!!!!\n");
      break;
    case 4:
      printf("SHUT UP!!!\n");
      break;
    case 5:
      printf("BANG!\n");
      break;
    case 6:
      printf("BANG! BANG! BANGBANGBANGBANGBANG!!!!!\n");
      exit(0);
  }      
}

int main(void)
{ void f(int);		/* prototype for signal handler function */
  int i;

  signal(SIGINT, (fptr)SignalHandler);	/* install the handler */
  
  while (1)
  { printf("Can you hear me now?\n");
    sleep(1);
  }
}

