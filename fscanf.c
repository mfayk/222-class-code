#include <stdio.h>
#include <unistd.h>

int main(void)
{ char c = 'A';
  int i = 1;
  float f = 2;
  char s[100] = "Clemson";

  printf("\nEnter a Character -> ");
  fscanf(stdin, "%c", &c);
  printf("c = %c\n", c);

  printf("\nEnter an integer -> ");
  fscanf(stdin, "%d", &i);
  printf("i = %d\n", i);

  printf("\nEnter a hex integer -> ");
  fscanf(stdin, "%x", &i);
  printf("i = 0x%X\n", i);

  printf("\nEnter a String -> ");
  fscanf(stdin, "%s", s);
  printf("s = %s\n", s);

  printf("\nEnter an int, char, and a String -> ");
  fscanf(stdin, "%d %c %s", &i, &c, s);
  printf("%d %c %s\n", i, c, s);

  printf("\nEnter an int,char,and a String -> ");
  fscanf(stdin, "%d%c%s", &i, &c, s);
  printf("%d %c %s\n", i, c, s);

  printf("\nEnter an int,char, and a string -> ");
  fscanf(stdin, "%3d%3c%6s", &i, &c, s);
  printf("%d %c %s\n", i, c, s);
}
