#include <stdio.h>

#define FALSE   0
#define TRUE    !FALSE

#define CLEMSON TRUE
#define USC     FALSE

int main(void)
{
  while (CLEMSON > USC)
  { printf("TRUE\n");
  }
}
