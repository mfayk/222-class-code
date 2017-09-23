#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int i, n;
  
  printf("Not Seeded:");
  for (i=0; i<5; i++)
  { printf("\t%d", rand());
  }

  printf("\n\nsrand(1):");
  srand(1);
  for (i=0; i<5; i++)
  { printf("\t%d", rand());
  }

  printf("\n\nsrand(2):");
  srand(2);
  for (i=0; i<5; i++)
  { printf("\t%d", rand());
  }

  printf("\n\nsrand(2):");
  srand(2);
  for (i=0; i<5; i++)
  { printf("\t%d", rand());
  }
  
  printf("\n\nsrand(time(0)):");
  srand(time(NULL));
  for (i=0; i<5; i++)
  { printf("\t%d", rand());
  }

  printf("\n\nsrand(time(0)):");
  srand(time(NULL));
  for (i=0; i<5; i++)
  { printf("\t%d", rand());
  }

  sleep(1);
  printf("\n\nsrand(time(0)):");
  srand(time(NULL));
  for (i=0; i<5; i++)
  { printf("\t%d", rand());
  }

  getchar();
}
