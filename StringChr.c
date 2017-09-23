#include <string.h>
#include <stdio.h>

int main(void)
{  char c;
   char *AlmaMater = "Where the Blue Ridge Yawns its Greatness...";
   char *ptr;
   
   for (c = 'a'; c <= 'z'; c++)
   { ptr = strchr(AlmaMater, c);
   
     if (ptr)
        printf("The character %c is at position %d in the string\n\"%s\"\n\n", c, ptr-AlmaMater, AlmaMater);
     else
        printf("The character % c was not found in the string\n\"%s\"\n\n", c, AlmaMater);
   }
  getchar();
}
