#include <stdio.h>
#include <stdlib.h>

double d1, d2;
float f1, f2;

int main(void)
{ int i;

  d1 = f1 = 1.2345678901234567890; 
  d2 = f2 = 1.0/3.0;
  
  printf("f1 = %0.20f, d1 = %0.20lf\n\n", f1, d1);
  printf("f2 = %0.20f, d2 = %0.20lf\n\n", f2, d2);
   
  getchar();
}

