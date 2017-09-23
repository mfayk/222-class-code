#include <stdio.h>
#include <math.h>
#include <sys/timeb.h>

/* Link this program dynamically and then statically 
     and note the difference.
*/

int main(void)
{  int i; 
  struct timeb time0, time1;
  
  printf("\nStatic Access\n");
  ftime(&time0); 
  printf("Time0 = %d : %d \n", time0.time, time0.millitm);

  for (i=1; i<=10000; i++)
  { 

    printf("%f ", sin (i));
    printf("%f ", cos (i));
    printf("%f ", tan (i));
    printf("%f ", sinh (i));
    printf("%f ", cosh (i));
    printf("%f ", tanh (i));
    printf("%f ", asin (i));
    printf("%f ", acos (i));
    printf("%f ", atan (i));
    printf("%f ", atan2 (i, i));
    printf("%f ", exp (i));
    printf("%f ", log (i));
    printf("%f ", log10 (i));
    printf("%f ", pow (i, 1));
    printf("%f ", sqrt (i));
    printf("%f ", ceil (i));
    printf("%f ", floor (i));
    printf("%f ", fabs (i));
    printf("%f ", ldexp (i, 1));
    printf("%f ", fmod (i, i));  
    printf("\n");
  }    
  ftime(&time1);
  printf("Time1 = %d : %d \n", time1.time, time1.millitm);
  printf("Difference = %d\n\n", (time1.time - time0.time) * 1000 + time1.millitm - time0.millitm);
  
  getchar();
}


