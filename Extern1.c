#include <stdio.h>

#include "extern2.h"

int main(void)
{ 
  for (i=-9; i<10; i++)
  { printf("i = %d\t", i);
    hypcos();
    hypsin();
  }
    
  getchar();
}


