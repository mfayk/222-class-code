#include <stdio.h>
#include <sys/time.h>
#include <signal.h>

void main(void)
{  struct itimerval TimerVal;

  /* Find out what is the system clock granularity.  */
  TimerVal.it_interval.tv_sec = 0;
  TimerVal.it_interval.tv_usec = 1;
  TimerVal.it_value.tv_sec = 0;
  TimerVal.it_value.tv_usec = 0;

  /* Set the Real timer to an interval of 1 micro-second */
  setitimer (ITIMER_REAL, &TimerVal, 0);
  printf("Interval Seconds: %d\n", TimerVal.it_interval.tv_sec);
  printf("Interval uSeconds: %d\n\n", TimerVal.it_interval.tv_usec);

  /* Check to see what it was really set to */
  setitimer (ITIMER_REAL, 0, &TimerVal);

  printf ("System clock granularity\n");
  printf("Interval Seconds: %d\n", TimerVal.it_interval.tv_sec);
  printf("Interval uSeconds: %d\n", TimerVal.it_interval.tv_usec);
}
