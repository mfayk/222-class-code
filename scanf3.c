#include <stdio.h>

int main(void)
{ 
  char c = 0; 
  int i;
  float f;
  char str[20];
  
  while (c != 'q')
  {
    printf("Input an character, and integer, a float, and a string.\n\n");
    scanf("%c %i %f %s", &c, &i, &f, str); fflush(stdin);
  
    printf("c = \'%c\'\n", c);
    printf("i = %i\n", i);
    printf("f = %f\n", f);
    printf("str = \"%s\"\n\n", str);
  }
  
}

