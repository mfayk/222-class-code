#include <string.h>
#include <stdio.h>

int main(void)
{  char *str = "A South Carolina Gamecock allies himself with greatness!";
   char *s = "lie";
   char *ptr;
   
   ptr = strstr(str, s);
   
   if (ptr)
     printf("The string \"%s\" is located at position %d in the string\n\"%s\"\n\n", s, ptr-str, str);
   else
     printf("The string \"%s\" was not found in the string\n\"%s\"\n\n", s, str);

  getchar();
}
