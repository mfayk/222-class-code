#include <stdio.h>

struct TTime
{ union 
  { struct
    { unsigned S0 : 4;
      unsigned S1 : 4;
    }Second;
    unsigned char Seconds;
  } U1;
  
  union
  { struct
    { unsigned M0 : 4;
      unsigned M1 : 4;
    } Minute;
    unsigned char Minutes;
  } U2;
  
  union
  { struct
    { unsigned H0 : 4;
      unsigned H1 : 4;
    } Hour;
    unsigned char Hours;
  } U3;
};

/*---------------------------------------------------------------------------*/

int main(void)
{ struct TTime Time;

  Time.U1.Seconds = 0x58;
  Time.U2.Minutes = 0x15;
  Time.U3.Hours = 0x22;
  
  printf("Time.U1.Second.S0 = %d\n", Time.U1.Second.S0);
  printf("Time.U1.Second.S1 = %d\n", Time.U1.Second.S1);
  printf("Time.U2.Minute.M0 = %d\n", Time.U2.Minute.M0);
  printf("Time.U2.Minute.M1 = %d\n", Time.U2.Minute.M1);
  printf("Time.U3.Hour.H0 = %d\n", Time.U3.Hour.H0);
  printf("Time.U3.Hour.H1 = %d\n", Time.U3.Hour.H1);

  getchar();
  return 0;
}
/*---------------------------------------------------------------------------*/
 
