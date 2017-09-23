#include <stdio.h>

int main(void)
{  int i, j, k[3];
   
   j = 54389;
   for (i = 10; i>=0; i--)
   { k[j] = j/i;
     printf("k[j] = %d\n", k[j]);
   }   
   getchar();
}
