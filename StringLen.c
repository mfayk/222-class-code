#include <string.h>
#include <stdio.h>

//---------------------------------------------------------//
int main(void)
{  char a[] = "The quick brown fox jumped over the lazy yellow dogs.";
   int i, j, k;

   printf("Length = %d\n", strlen(a));
   printf("String = %s\n\n", a);

   printf("Length = %d\n", strlen((const char*)&i));
   printf("String = %s\n\n", (const char*)&i);
   
   printf("Length =%d\n", strlen((const char*)&j));
   printf("String = %s\n\n", (const char*)&j);
   
   printf("Length =%d\n", strlen((const char*)&k));
   printf("String = %s\n\n", (const char*)&k);

   getchar();
}
