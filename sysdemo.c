#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ char text[256];
  int year;

  if (argc != 2)
  { printf("Usage: sysdemo year, where year is 1-9999.\n");
    exit(1);
  }
  else if ((strcmp(argv[1], "1") < 0) || (strcmp(argv[1], "9999") > 0))
  { printf("Year must be between 1 and 9999.\n");
    exit(2);
  }

  sprintf(text, "cal %s", argv[1]);
  printf("About to call '%s'...\n\n", text);
  system(text);
  printf("\ncal called and finished.\n");
}

