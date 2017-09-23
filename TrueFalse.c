#include <stdio.h>

int a = 0;
int b = 1;
int c = 2;

int main(void)
{  
   printf("!a = %d, !b = %d, !c = %d\n", !a, !b, !c);
   printf("(a == b) = %d\n", (a == b));
   printf("(a != b) = %d\n", (a != b));
   printf("(a < b) = %d\n", (a < b));
   printf("(a > b) = %d\n", (a > b));
   printf("(a || b) = %d\n", (a || b));
   printf("(a || !b) = %d\n", (a || !b));
   printf("(a && b) = %d\n", (a && b));
   printf("(b && c) = %d\n", (b && c));
   
   getchar();
}
