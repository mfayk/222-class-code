#include <stdio.h>

int main(void)
{ 
  goto d; 
  
a: printf("A");
   goto c;
         
b: printf("B"); getchar();
   return;
         
c: printf("C");
   goto e;
          
d: printf("D");
   goto a;
         
e: printf("E");
   goto b;  
  
}
