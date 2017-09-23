#include <string.h>
#include <stdio.h>

int main(void)
{  int i, n, found;
   char c;
   char str[] = "Where the Blue Ridge Yawns its Greatness...";
   char *ptr;
   
   printf("String = \n%s\n", str);
   for (i=0; i <strlen(str); i++)
   { printf("%d", i%10);
   }
   
   printf("\n\nEnter letter to find: ", str);
   c = getchar();
   
   found = 0;
   ptr = str;
   for (i=0; i <strlen(str); i++)
   { ptr = strchr(ptr, c);
   
     if (ptr)
     { printf("There is a \'%c\' at position %d \n", c, ptr-str);
       found = 1;
       ptr++;
     }
     else
        break;
   }
   if (!found) printf("There are no %c\'s in the string.\n");
   
   getchar();
   getchar();
}
