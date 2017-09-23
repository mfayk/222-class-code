#include <stdio.h>

int main(void)
{ const int i = 1492;
  const float x = 3.1415926, y = 3.1415926E-10;
  const char str[] = "Clemson Tigers";
  int j;
  
  printf(" .0: %.d\n", i);
  printf(" .0: %.0d\n", i);
  printf(" .0: %.0d\n", 0);
  printf(" .1: %.1d\n", i);
  printf("1.3: %1.3d\n", i);
  printf("3.3: %3.3d\n", i);
  printf("8.3: %8.3d\n\n", i);

  printf(" .0: %.0e\t%.0e\n", x, y);
  printf(" .0: %.0e\n", 0);
  printf(" .1: %.1e\n\t%.1e", x, y);
  printf("1.1: %1.1e\t%1.1e\n", x, y);
  printf("1.3: %1.3e\t%1.3e\n", x, y);
  printf("3.3: %3.3e\t%3.3e\n", x, y);
  printf("8.3: %8.3e\t%8.3e\n\n", x, y);

  printf(" .0: %.0f\t%.0f\n", x, y);
  printf(" .0: %.0f\n", 0);
  printf(" .1: %.1f\n\t%.1f", x, y);
  printf("1.1: %1.1f\t%1.1f\n", x, y);
  printf("1.3: %1.3f\t%1.3f\n", x, y);
  printf("3.3: %3.3f\t%3.3f\n", x, y);
  printf("8.3: %8.3f\t%8.3f\n\n", x, y);

  printf(" .0: %.0g\t%.0g\n", x, y);
  printf(" .0: %.0g\n", 0);
  printf(" .1: %.1g\t%.1g\n", x, y);
  printf("1.1: %1.1g\t%1.1g\n", x, y);
  printf("1.3: %1.3g\t%1.3g\n", x, y);
  printf("3.3: %3.3g\t%3.3g\n", x, y);
  printf("8.3: %8.3g\t%8.3g\n\n", x, y);

  printf(" .0: %.0s\n", str);
  printf(" .1: %.1s\n", str);
  printf("1.1: %1.1s\n", str);
  printf("1.3: %1.3s\n", str);
  printf("3.3: %3.3s\n", str);
  printf("8.3: %8.3s\n\n", str);
  
  printf(".*s\n");
  for (j=0; j<=14; j++)
  { printf("%.*s\n", j, str);
  }
  printf("*.*s\n");
  for (j=0; j<=14; j++)
  { printf("%*.*s\n", 2*j,j, str);
  }

  
  getchar();
}
