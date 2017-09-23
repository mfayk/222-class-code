#include <stdio.h>

int main(void)
{  int x, y;
   
   y = 54389;
   for (x = 10; x>=0; x--)
   { y = y/x;
     printf("y = %y\n", y);
   }   
   getchar();
}
