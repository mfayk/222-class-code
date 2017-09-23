#include <stdio.h>

struct TTime
{ unsigned S0 : 4;
  unsigned S1 : 4;
  unsigned M0 : 4;
  unsigned M1 : 4;
  unsigned H0 : 4;
  unsigned H1 : 4;
};

struct TDate
{ unsigned M0 : 4;
  unsigned M1 : 4;
  unsigned D0 : 4;
  unsigned D1 : 4;
  unsigned Y0 : 4;
  unsigned Y1 : 4;
  unsigned Y2 : 4;
  unsigned Y3 : 4;
};

struct TRTC
{ struct TTime Time;
  struct TDate Date;
};

/*---------------------------------------------------------------------------*/

int main(void)
{ struct TRTC RTC;
  char *ptr, i;

  RTC.Time.S0 = 8;
  RTC.Time.S1 = 5;
  
  RTC.Time.M0 = 5;
  RTC.Time.M1 = 1;

  RTC.Time.H0 = 3;
  RTC.Time.H1 = 2;

  RTC.Date.M0 = 3;
  RTC.Date.M1 = 0;
  
  RTC.Date.D0 = 9;
  RTC.Date.D1 = 1;

  RTC.Date.Y0 = 0;
  RTC.Date.Y1 = 1;
  RTC.Date.Y2 = 0;
  RTC.Date.Y3 = 2;
  
  
  for (i=0, ptr = &RTC; i<sizeof(struct TRTC); i++)
  {  printf("RTC[%d] = 0x%02X\n", i, *ptr++);
  }
  getchar();
  return 0;
}
/*---------------------------------------------------------------------------*/
 
