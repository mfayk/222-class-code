#include <string.h>
#include <stdio.h>
#include <sys/timeb.h>

//---------------------------------------------------------//
int main(void)
{ char a[1000] = "The quick brown fox jumps over the lazy yellow dog.";
  char b[2] = "A";
  
  int i, j, k, n, m;
  double d;
  struct timeb time0, time1;
  
  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);
  m = 0;
  n = strlen(a);
  for (i=0; i<1000; i++)
  { for (j=0; j<1000; j++)
    { for (k=0; k<n; k++)
      { m += k;
      }
    }
  }
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);

  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);
  m = 0;
  for (i=0; i<1000; i++)
  { for (j=0; j<1000; j++)
    { for (k=0; k<strlen(a); k++)
      { m += k;
      }
    }
  }
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);
  
  getchar();
  
  for (k=0; k<strlen(a); k++)
  {   b[0] = rand() % 26 + 'A';
      strcat(a, b);
      printf("a[%d] = %s\n", strlen(a), a);
  }
  
}
