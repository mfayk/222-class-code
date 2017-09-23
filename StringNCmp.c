#include <string.h>
#include <stdio.h>

void CompareString(char *str1, char *str2)
{  int n;

   printf(str1);
   
   n = strncmp(str1, str2, 2);
   
   if (n < 0) printf(" are less than " );

   if (n == 0) printf(" are equal to ");
 
   if (n > 0) printf(" are greater than ");

   
   printf(str2);
   printf("\n\n");
}
//---------------------------------------------------------//
int main(void)
{
   char *Tigers = "Tigers";
   char *Gamecocks = "Gamecocks";
   char *Squirrels = "Squirrels";
   char *Garbage = "Garbage";

   CompareString(Tigers, Gamecocks);
   CompareString(Tigers, Squirrels);
   CompareString(Gamecocks, Squirrels);   
   CompareString(Gamecocks, Garbage);   

   getchar();
}
