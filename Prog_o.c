#include <stdio.h>
#include <math.h>

int main(void)
{ int i;

  for (i=0; i<=20; i++)
  { fprintf(stdout, "2 ^ %d = %d\n", i, (int)pow(2,i));
  }
  getchar();
}

