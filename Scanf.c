#include <stdio.h>

int main(void)
{ char c;
  int i;
  float f;
  char s[256];
    
  printf("Input a character: ");
  scanf("%c", &c); //fflush(stdin);
  printf("The character input was %c\n", c);

  printf("Input an integer: ");
  scanf("%d", &i); //fflush(stdin);
  printf("The integer input was %d\n", i);
  
  printf("\nInput a float: ");
  scanf("%f", &f); //fflush(stdin);
  printf("The float input was %f\n", f);

  printf("\nInput a string: ");
  scanf("%s", s); //fflush(stdin);
  printf("The string input was %s\n", s);

  fflush(stdin);
  getchar();
}

