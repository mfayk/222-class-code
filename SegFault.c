#include <stdio.h>

int main(void)
{ int i;
  int *ptri = (int *)100;

  for (i=0; i<5; i++)
  { printf("i = %d ", i);
  }
  *ptri = 3;
}

