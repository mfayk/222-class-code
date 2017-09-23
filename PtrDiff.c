#include <stdio.h>

char c; int i; float f; double d; 
struct st {char a; int b; float c; } s;  char dummy;

void main(void)
{ 
  printf("&c = %d\n&i = %d\n&f = %d\n&d = %d\n&s = %d\n&dummy = %d\n", &c, &i, &f, &d, &s, &dummy);

  printf("&i-&c = %d, &c-&i = \n", (int)&i-(int)&c);

  printf("&i-&c = %d, &c-&i = %d\n", &i-&c, &c-&i);

  printf("&f-&i = %d, &i-&f = %d\n", &f-&i, &i-&f);

  printf("&f-&c = %d, &c-&f = %d\n", &f-&c, &c-&f);

  printf("&d-&f = %d, &f-&d = %d\n", &d-&f, &f-&d);

  printf("&s-&d = %d, &d-&s = %d\n", &s-&d, &d-&s);

  
  getchar();
}
