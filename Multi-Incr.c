#include <stdio.h>

int main(void)
{ int i, j;

  printf("i, j++, ++j\n");
  i = 0;
  j = 1;
  do 
  { printf("%d %d %d\n", i, j++, ++j);
  } while (++i<10);

  getchar();
}
