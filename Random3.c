#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bin[10], total;

/*** returns  Uniform Random Variable from min to max ***/
double UniformRV(double min, double max)
{ double x;
  x = (double)rand()/((double)(RAND_MAX) + 1.0);
  
  if (max > min) 
  { x *= max - min;
    x += min;
  }
  
  return (x);
}

/*** returns  Gaussian (Normal) RV, mean=0, stddev=1 ***/
double GaussianRV(void)
{ double u1, u2;
  
  u1 = UniformRV(0,1);
  u2 = UniformRV(0,1);
  
  return cos(8.0*atan(1.0)*u2)*sqrt(-2.0*log(u1)); 
}

/*****************************************/
int main(void)
{ int i;
  double x, y;
  
  for (i=0; i<10000; i++)
  { x = GaussianRV();
    x *= 2;
    x += 5;
    if ((x>0) && (x<10))
    { bin[(int)x]++;
    }
    printf("%lf\n", x);
   }

  for (i=0; i<10; i++) 
  { printf("bin[%d] = %d\n", i, bin[i]);
    total += bin[i];
  }
  printf("Total = %d\n", total);
  
  getchar();
}
