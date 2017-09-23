#include <stdio.h>
#include <sys/timeb.h>

int main(void)
{ FILE *fout;
  int i;
  struct timeb time0, time1;
  

  fout = fopen("Buffer.out", "w");

  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);
  for (i=0; i<10000; i++)
  { fprintf(fout, "i = %d\n", i);
  }
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);
  fclose(fout);
//  getchar();

  fout = fopen("Buffer.out", "w");
  
  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);
  for (i=0; i<10000; i++)
  { fprintf(fout, "i = %d\n", i); fflush(fout);
  }
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);
  fclose(fout);
  
  getchar();
}
