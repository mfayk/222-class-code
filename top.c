#include <stdio.h>
#include <math.h>

int main(void)
{ int i;
  float x;

  for (i=0; i<100000; i++)
  { x = (float)i/100*M_PI/180;
    printf("sin(%f) = %f\n", (float)i/100, sin(x));
  }
}


