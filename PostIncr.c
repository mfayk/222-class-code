#include <stdio.h>

int main(void)
{ int i, j = 0, k = 0;

  printf(" i j k\n");
  for (i=0; i<10; i++)
  { printf("%d %d %d\n", i, ++j, k++);
  }

}
