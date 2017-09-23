#include <stdio.h>
#include <math.h>

void hypcos(void)
{ float x, y;
  static int i; // static
  int j;        // not static
  
  x = exp(++i);
  y = exp(-i);
   
  printf("hypcos[%2d] = %f\n", i, (x + y)/2);
  printf("j = %d\n", ++j);
}

int main(void)
{ int n; 

  for (n=0; n<10; n++)
  { hypcos();
  }
    
  getchar();
}
