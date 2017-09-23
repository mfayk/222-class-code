#include <stdio.h>
#include <stdlib.h>
#include <sys/timeb.h>

#define DEPTH 10
#define ROWS  10
#define COLS  10

int ***AD;

int main(void)
{ int i, j;
  int d, r, c;
  struct timeb time0, time1;

  printf("Dynamic Allocation\n");
  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);

  AD = (int ***)malloc(DEPTH*sizeof(int**));
  
  for (d=0; d<DEPTH; d++) 
  { AD[d] = (int **)malloc(ROWS*sizeof(int*));
  
    for (r=0; r<ROWS; r++) 
      AD[d][r] = (int *)malloc(COLS*sizeof(int));
  }

  /****************************************************/

  for (i=0; i<10000; i++)
  {
    for (d=0; d<DEPTH; d++) 
    { for (r=0; r<ROWS; r++)
      { for (c=0; c<COLS; c++)
        {  AD[d][r][c] = 0;
        }
      }
    }
  }
  
  /****************************************************/

  for (d=0; d<DEPTH; d++)
  { for (r=0; r<ROWS; r++)
    { free (AD[d][r]);
    }
    free (AD[d]);
  }
    
  free(AD);
  
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);
 
  getchar(); 
}
