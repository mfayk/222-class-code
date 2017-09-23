#include <stdio.h>
#include <string.h>

char str1[] = "Clemson";
char str2[] = "Tigers";

int main(void)
{  
   memset(str1, 'C', 5);
   printf("%s\n", str1);
 
   memset(str1, 'C', strlen(str1));
   printf("%s\n", str1);
  
   memcpy(str1, str2, 4);
   printf("%s\n", str1);
   
   memcpy(str2+1, str2, 4);
   printf("%s\n", str2);
 
   sprintf(str2,"Tigers");
   memmove(str2+1, str2, 4);
   printf("%s\n", str2);  
         
   getchar();
}
