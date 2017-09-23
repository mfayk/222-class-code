#include <stdio.h>

int main(void)
{ const float x = 365.24, y = 0.0000003;
  int i;
  
  printf("Character = %c %c %c\n", 'A', 65, 200);
  printf("String = %s\n", "Go Tigers");

  printf("Scientific = %e or %E\n", x, x);
  printf("Float = %f\n", x);
      
  printf("Either = %g or %G\n", x, x);
  printf("Either = %g or %G\n", y, y);

  printf("Octal = %o\n", (int)x);
  printf("Hex = %x or %X\n", (int)x, (int)x);
  
  printf("Address of x = %p\n", &x);
  printf("Nothing = %n:", &i);
  printf("i = %d\n", i);
  
  printf("%% = %d\n", '%'); 
  
  getchar();
}
