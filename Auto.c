#include <stdio.h>
#include <math.h>

float hypsin(auto float y)
{ auto float x, z;
   
  x = exp(y);
  z = exp(-y);
  return (x - z)/2;   
}


float hypcos(auto float x)
{ auto float y, z;
   
  y = exp(x);
  z = exp(-x);
  return (y + z)/2;   
}


int main(void)
{ auto int i;
  auto float x, y;

  for (i=-9; i<10; i++)
  { x = hypcos(i);
    y = hypsin(i);
    printf("hypcos[%2d] = %f,   \thypsin[%2d] = %f\n", i, x, i, y);
  }
    
  getchar();
}


