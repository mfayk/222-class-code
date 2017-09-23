#include <stdio.h>

int main(void)
{  int i, j;
   
   for (i=0, j=0; i<5; i++, j+=5)
   {  
      printf("i = %d, j = %d\n", i, j);
   }

   getchar();
}
