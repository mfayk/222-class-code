#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int i, n;
  
  printf("Not Seeded:");
  for (i=0; i<5; i++)
  { printf("\t%f", drand48());
  }

  printf("\n\nsrand48(1):");
  srand48(1);
  for (i=0; i<5; i++)
  { printf("\t%f", drand48());
  }

  printf("\n\nsrand48(time(0)):");
  srand48(time(NULL));
  for (i=0; i<5; i++)
  { printf("\t%f", drand48());
  }

  sleep(1);
  printf("\n\nsrand48(time(0)):");
  srand48(time(NULL));
  for (i=0; i<5; i++)
  { printf("\t%f", drand48());
  }

  printf("\n");
  getchar();
}
