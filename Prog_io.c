#include <stdio.h>
#include <math.h>

int main(void)
{ int i;

  while (!feof(stdin))
  { fscanf(stdin, "%d", &i); fflush(stdin);
    fprintf(stdout, "sin[%d] = %f\n", i, sin(i));
  }
}

