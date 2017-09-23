#include <string.h>
#include <stdio.h>

void CompareString(char *str1, char *str2)
{
   printf(str1);

   switch (strcmp(str1, str2))
   { case -1:  printf(" are less than " );
       break;
     case 0:  printf(" are equal to ");
       break;
     case 1:  printf(" are greater than ");
   }
   
   printf(str2);
   printf("\n\n");
}
//---------------------------------------------------------//
int main(void)
{
   char *Tigers = "Tigers";
   char *Gamecocks = "Gamecocks";
   char *Squirrels = "Squirrels";

   CompareString(Tigers, Gamecocks);
   CompareString(Tigers, Squirrels);
   CompareString(Gamecocks, Squirrels);   

   getchar();
}
