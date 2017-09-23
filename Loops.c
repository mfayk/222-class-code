#include <stdio.h>

int main(void)
{  int i, j=0;
   
   for (i=0; i<5; i++)
   {  j += i;  
      printf("i = %d, j = %d\n", i, j);
   }
   printf("\n");
   while (i<10)
   {  j += i++;  
      printf("i = %d, j = %d\n", i, j);
   }
   printf("\n");
   do 
   {  j += i++;  
      printf("i = %d, j = %d\n", i, j);
   } while (i <15);

   getchar();
}
