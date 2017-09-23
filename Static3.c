#include <stdio.h>
#include <math.h>

void hypcos(void)
{ float x, y;
  static int i;
  int j;       // not static
  
  x = exp(++i);
  y = exp(-i);
   
  printf("hypcos[%2d] = %f\n", i, (x + y)/2);
  j++;
  printf("j = %d\n", j);
}

void junk(void)
{ float x, y;
  int j;
  
  j = 12;
  printf("junk j = %d\n", j);
}

int main(void)
{ int j; 

  for (j=0; j<10; j++)
  { hypcos();
    junk();
  }
    
  getchar();
}

