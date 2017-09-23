#include <stdio.h>
#include <string.h>
#include <sys/timeb.h>

//---------------------------------------------------------//
int main(void)
{ char a[1000];
  int i, j, k;
  double d;
  struct timeb time0, time1;
  
  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);

  for (i=0; i<1000; i++)
  { for (j=0; j<100; j++)
    { for (k=0; k<100; k++)
      { memmove(a, a+10, 900);
      }
    }
  }
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);

  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);

  for (i=0; i<1000; i++)
  { for (j=0; j<100; j++)
    { for (k=0; k<100; k++)
      { memcpy(a, a+100, 900);
      }
    }
  }
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);
  
  getchar();
}
