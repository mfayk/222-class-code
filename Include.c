#include <math.h>
#include <complex.h>

int main(void)
{
  complex z;

  z = 4*cexp(I*M_PI/4);
  // or
  z = 1 + I*1;            

  printf("z = %f + j%f\n", creal(z), cimag(z));
  printf("|z| = %f\n", cabs(z));
  printf("arg(z) = %f\n", carg(z));
  printf("exp(z) = %f\n", cexp(z));

}

