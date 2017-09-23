#include <stdlib.h>
#include <stdio.h>
#include <sys/timeb.h>

#define LOOP 500
#define VARS 10000

//---------------------------------------------------------//
int main(void)
{ int i, j, k;
  struct timeb time0, time1;
  double *ptrd;
  
  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);
  for (i=0; i<LOOP; i++)
  { for (j=0; j<LOOP; j++)
    { if ((ptrd = (double *)malloc(VARS*sizeof(double))) == NULL) 
      { printf("Cannot make array\n");  exit(1);
      }
      for (k=0; k<VARS; k++)
      {  ptrd[i] = 0;
      }
      free(ptrd);
    }
  }

  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);

  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);
  for (i=0; i<LOOP; i++)
  { for (j=0; j<LOOP; j++)
    { if ((ptrd = (double *)calloc(VARS,sizeof(double))) == NULL) 
      { printf("Cannot make array\n");  exit(1);
      }   
      free(ptrd);
    }
  }

  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);
  
  getchar();
  
}
