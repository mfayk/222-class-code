#include "extern2.h"

int i;

void hypcos(void)
{ float x, y;
   
  x = exp(i);
  y = exp(-i);
  
  printf("hypcos[%2d] = %f", i, (x + y)/2);
}

void hypsin(void)
{ float x, y;
   
  x = exp(i);
  y = exp(-i);
  printf("   \thypsin[%2d] = %f\n", i, (x - y)/2);
}

