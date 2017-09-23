#include <stdio.h>

int main(void)
{  int i = 5, j=6;
   int k[7];
   
   k[0] = i+j;  
   k[1] = i-j;
   k[2] = i*j;
   k[3] = i/j;
   k[4] = i%j;
   k[5] = i++;
   k[6] = j--;
   
   for (i=0; i<7; i++)
   { printf("k[%d] = %d\n", i, k[i]);
   }   
   getchar();
}
