#include <stdio.h>
#include <math.h>

extern int i;

void hypsin(void)
{ float x, y;
   
  x = exp(i);
  y = exp(-i);
  printf("   \thypsin[%2d] = %f\n", i, (x - y)/2);
}

