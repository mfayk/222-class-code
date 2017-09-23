#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{ int i;
  float x;
  FILE *f_out;

  if ((f_out = fopen("sin.txt", "wt")) == NULL)
  { printf("cannot open file\n");
    exit(1);
  }

  for (i=0; i<1000000; i++)
  { x = (float)i/100*M_PI/180;
    fprintf(f_out, "sin(%f) = %f\n", (float)i/100, sin(x));
    fflush(f_out);
    rewind(f_out);
  }
}
