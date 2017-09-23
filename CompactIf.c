#include <stdio.h>

int main(void)
{  int i;
   
   for (i=0; i<10; i++)
   {  printf("%d: ", i);
      printf((i > 4)?"gt4 ":"");    
      printf((i != 2)? "ne2 ":"");
      printf((i <= 5)? "le5 ":"");
      printf((i % 2 == 0)? "even ":"");
      
      if ((i > 4) && (i != 2) && (i <= 5) && (i%2 == 0)) 
      { printf("All\n");
        break;
      }
      else printf("\n");
   }

   getchar();
}
