#include <stdio.h>

int dummy1 = 1;
char c = 'A';
int i = 65;
float f = 54.123456789;
double d = 54.123456789;
int dummy2 = 2;

int main(void)
{  
   
   printf("c= %c  i= %d  f= %12f  d= %12lf\n", c, i, f, d);
   printf("c= %d  i= %c  f= %12.9f  d= %12.9lf\n", c, i, f, d);

   printf("i= %f  i= %12.9lf\n", i, i);
   printf("f= %d  d= %d\n", f, d);
   
   getchar();
}
