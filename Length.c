#include <stdio.h>

int main(void)
{ const int i = 1000000L;
  const long double x = 1.1E400L;
  
  printf("%% d: %d\n", i);
  printf("%%hd: %hd\n\n", i);
  
  printf("%% d: %d\n", i);
  printf("%%ld: %ld\n\n", i);
 
  printf("%% E: %E\n", x);
  printf("%%LE: %LE\n\n", x);
 
  getchar();
}

