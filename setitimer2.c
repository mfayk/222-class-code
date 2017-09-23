#include <stdio.h>
#include <sys/time.h>
#include <signal.h>

typedef void (*fptr)();

int counter, old_counter;

void Catcher(int i)
{
   printf("Timer Expired! Counts = %d\n", counter-old_counter);
   old_counter = counter;
}

int main(void)
{ int i, j;
  struct itimerval Timer;

  signal(SIGALRM, (fptr)Catcher);

  /* Set the timer to expire first after 2 seconds. */
  Timer.it_value.tv_sec = 1;
  Timer.it_value.tv_usec = 0;
  /* Set the timer up to be repeating, so that once
  * it expires, it starts another cycle.  */
  Timer.it_interval.tv_sec = 0;
  Timer.it_interval.tv_usec = 100000;
  
  setitimer (ITIMER_REAL, &Timer, NULL);

  while (1)
  { for (i=0; i<10000; i++) {}
    counter++;
  }
}

