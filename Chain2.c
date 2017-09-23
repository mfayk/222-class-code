#include <stdio.h>
#include <math.h>

int main(void)
{ float f;

  while (!feof(stdin))
  { fscanf(stdin, "%f", &f); fflush(stdin);
    f = asin(f);
    f = f*180/M_PI;
    fprintf(stdout, "f = %f\n", f);
  }
}

