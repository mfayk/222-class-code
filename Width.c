#include <stdio.h>

int main(void)
{ const int i = 1492;
  
  printf("%d\n%3d\n%4d\n%5d\n%6d\n\n", i, i, i, i, i);

  printf("%d\n%*d\n%*d\n%*d\n%*d\n\n", i, 3, i, 6, i, 9, i, 12, i);
  
  getchar();
}
