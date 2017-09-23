#include <stdio.h>

//---------------------------------------------------------//
int main(void)
{  char c;
    
   do 
   { fflush(stdin);
     printf("\nEnter a character (q to quit): \n");
     c = getchar();
     
     printf("Character is");
     if (!isalpha(c) ) printf(" NOT");
     puts(" a letter.\n");
   }
   while (c != 'q');
}
