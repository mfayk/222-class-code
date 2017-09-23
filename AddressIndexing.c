#include <stdio.h>

struct S
{ char c;
  char dummy;
}s = { 'A', 'B' };

int main(void)
{ 
  printf("&c = %u, &dummy1 = %u\n", &s.c, &s.dummy);
  
//  &s.c[1] = 'C';
  printf("1 dummy1 = %c\n", s.dummy);

  (&s.c)[1] = 'D';
  printf("2 dummy1 = %c\n", s.dummy);
  
//  (char *)&s.c[1] = 'E';
  printf("3 dummy1 = %c\n", s.dummy);

  ((char *)&s.c)[1] = 'F';
  printf("4 dummy1 = %c\n", s.dummy);

  (char *)(&s.c)[1] = 'G';
  printf("5 dummy1 = %c\n", s.dummy);

  ((char *)4202496)[1] = 'g';
  printf("8 dummy1 = %c\n", s.dummy);
  
//  (0x100)[1] = 'H';
  printf("6 dummy1 = %c\n", s.dummy);
  
//  (char *)(0x1000)[1] = 'I';
  printf("7 dummy1 = %c\n", s.dummy);

  ((char *)0x1000)[1] = 'J';
  printf("8 dummy1 = %c\n", s.dummy);
  

  getchar();
}
