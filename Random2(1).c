#include <stdio.h>
#include <stdlib.h>

/* create value from -10.0 to 10.0 */

int main(void)
{ int i;
  float f, min = 0, max = 0;
  
  for (i=0; i<100; i++)
  { f = (float)rand();
    f /= RAND_MAX;
    f *= 20;
    f -= 10;

    if (f < min) min = f;
    else if (f > max) max = f;
    printf("%lf\n", f);
  }
  printf("min = %lf, max = %lf\n", min, max);
  
  getchar();
}
