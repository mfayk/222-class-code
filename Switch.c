#include <stdio.h>

int main(void)
{  int i;
   
   for (i=0; i<10; i++)
   {     
      switch (i)
      { case 0: printf("0"); break; 
        case 1: printf("1");
        case 2: printf("2");
        case 3: printf("3"); break;
        case 9: printf("9"); break;
        default: printf("\n");
      }
   }

   getchar();
}
