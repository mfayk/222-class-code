#include <stdio.h>
#include <math.h>

int main(void)
{ int i;
  float f;

  while (!feof(stdin))
  { fscanf(stdin, "%d", &i); fflush(stdin);
    f = (float)i * M_PI / 180;
    fprintf(stdout, "%f\n", sin(f));
  }
}

