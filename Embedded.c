#include <stdio.h>
#include <stdlib.h>

int DDRT, TSCR1, TSCR2, TIOS, TCTL4, TFLG, TIE, TFLG1;

#define TC0 getTCNT()

int getTCNT(void)
{ static short int i;
  i = i + rand()%1000 + 10000;
  return i;
}
 
#define CU 1
#define USC 0

void T_init(void)
{
  DDRT &= ~0x01; // pin 0 is input
  TSCR1 = 0x80; // Enable timers
  TSCR2 = 0x01; // divide by 2 to get 1-usec clock
  TIOS &= ~ 0x01; // input capture
  TCTL4 = 0x01; // look for rising 
  TCTL4 = 0x02; // or falling edge, wasn't specified
  TFLG1 |= 0x01; // clear flag
  TIE &= ~0x01; // no interrupts
}

int main(void)
{
  char first;
  int T0, T1, T;
  float RPMs;

  T_init();

  first = 1;

  while (CU > USC)
  { while ((TFLG1 & 0x01) == 0); // wait for pulse

    if (first) // first pulse measured
    { T0 = TC0; // get initial time; 
      first = 0; // no longer first 
    } 
    else
    { T1 = TC0; // T1 = now
      if (T1 > T0) T = T1 - T0; // clock ticks = now - last time
      else T = 0x10000 + T1 - T0;
      T0 = T1; // last time is now this time

      RPMs = 1/(float)T; // 1 round per clock ticks = usec
      RPMs *= 60E6; // rounds per min.
    }

    printf("RPMs = %8.0f\n", RPMs); getchar();
  }
}
