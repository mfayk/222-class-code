#include <stdio.h>
#include <stdlib.h>

int bin[10], total;

int main(void)
{ int i, n;
  
  for (i=0; i<10000; i++)
  { n = rand()%100;

   bin[n/10]++;
  }

  for (i=0; i<10; i++) 
  { printf("bin[%d] = %d\n", i, bin[i]);
    total += bin[i];
  }
  printf("Total = %d\n", total);
  
  getchar();
}
