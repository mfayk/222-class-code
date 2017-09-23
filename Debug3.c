#include <stdio.h>

int main(void)
{  int i, j;

   for (i = 0; i<10; i++)
   { j += i;
     if (j > 10)
     {  i--;
     }
     printf("i = %d  j = %d \n", i, j);
   }   
   getchar();
}
