#include <stdio.h>

int main(void)
{  int i;
   
   for (i=0; i<10; i++)
   {  printf("%d: ", i);
      if (i > 4) printf("gt4 ");  
      if (i != 2) printf("ne2 ");
      if (i <= 5) printf("le5 ");
      if (i % 2 == 0) printf("even ");
      if ((i > 4) && (i != 2) && (i <= 5) && (i%2 == 0)) 
      { printf("All\n");
        break;
      }
      else printf("\n");
   }

   getchar();
}
