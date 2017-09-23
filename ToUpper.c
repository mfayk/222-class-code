#include <stdio.h>

//---------------------------------------------------------//
int main(void)
{  
    
   do 
   { fflush(stdin);
     printf("\nEnter a 'Q' to quit: \n");;
   }
   while (getchar() != 'Q');
   
   do 
   { fflush(stdin);
     printf("\nEnter a 'Q' or 'q' to quit: \n");;
   }
   while (toupper(getchar()) != 'Q');

 }
