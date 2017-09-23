#include <string.h>
#include <stdio.h>

//---------------------------------------------------------//
int main(void)
{  char S[] = "I HATE WHEN PEOPLE TYPE IN ALL CAPITAL LETTERS!!!";

   printf("%s\n", S);
   
   strlwr(&S[1]);
   
   printf("%s\n", S);

   strupr(&S[1]);
   
   printf("%s\n", S);

   getchar();
}
