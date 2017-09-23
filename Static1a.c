#include <stdio.h>
#include <math.h>

static int i;
//int i;

extern void hypsin(void);

void hypcos(void)
{ float x, y;
   
  x = exp(i);
  y = exp(-i);
  
  printf("hypcos[%2d] = %f", i, (x + y)/2);
}

int main(void)
{ 

  for (i=-9; i<10; i++)
  { hypcos();
    hypsin();
  }
    
  getchar();
}


