#include <stdio.h>

//---------------------------------------------------------------------------

int main(void)
{  char s[20];
   char i;
  
   s[0] = 'C';
   s[1] = 'l';
   s[2] = 'e';
   s[3] = 'm';
   s[4] = 's';
   s[5] = 'o';
   s[6] = 'n';
   s[7] = ' ';
   s[8] = 'T';
   s[9] = 'i';
   s[10] = 'g';
   s[11] = 'e';
   s[12] = 'r';
   s[13] = 's';
   s[14] = '!';

   for (i=0; i<20; i++) printf("%c", s[i]);
   printf("\n"); getchar();

   s[15] = 0;
   
   for (i=0; i<20; i++) printf("%c", s[i]);
   printf("\n"); getchar();
   
   i = 0;
   while (s[i] != NULL) { printf("%c", s[i++]); } 
   printf("\n"); getchar();
   
   printf("%s\n", s); getchar();
   
   printf("%s\n", &s[8]); getchar();
   
   printf("%s\n", s[0]); getchar();
   
}
