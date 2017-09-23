#include <stdio.h>

int main(void)
{ int i = 0;
  char s[100];

  while (!feof(stdin))
  { fscanf(stdin, "%s", s); fflush(stdin);
    printf("s[%d] = %s\n", ++i, s);
  }
}

