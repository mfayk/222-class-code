#include <string.h>
#include <stdio.h>

char d[] = "CU", e[]= "CLEMSON", f[] = "TIGERS";

int main(void)
{
   char a[] = "CU", b[]= "CLEMSON", c[] = "TIGERS";

   strcpy(a, b);
   
   printf("&a = %u, a = %s\n", a, a);
   printf("&b = %u, b = %s\n", b, b);
   printf("&c = %u, c = %s\n\n", c, c);


   strcpy(d, e);
   
   printf("&d = %u, e = %s\n", d, d);
   printf("&e = %u, e = %s\n", e, e);
   printf("&f = %u, f = %s\n", f, f);
   
   getchar();
}
