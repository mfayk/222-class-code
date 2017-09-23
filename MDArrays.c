#include <stdio.h>

//---------------------------------------------------------------------------

char      c[10];
short int si[10];
int       i[10];
double    d[10];
char dummy ;

//---------------------------------------------------------------------------

int main(void)
{  char n;
   char *ptrc;
  
   printf("Address of c = %d\n", &c);
   printf("Address of si = %d\n", &si);
   printf("Address of i = %d\n", &i);
   printf("Address of d = %d\n", &d);
   printf("Address of dummy = %d\n", &dummy);
   
   // store i in type[i]
   for (n=0; n<10; n++) 
   { c[n] = n;
     si[n] = n;
     i[n] = n;
     d[n] = n;
   }
   // print values 
   for (n=0; n<10; n++) printf("c[%d] = %d\n", n, c[n]); 
   for (n=0; n<10; n++) printf("si[%d] = %d\n", n, si[n]); 
   for (n=0; n<10; n++) printf("i[%d] = %d\n", n, i[n]); 
   for (n=0; n<10; n++) printf("d[%d] = %f\n", n, d[n]); 
   // print memory
   for (ptrc = &c[0]; ptrc <&dummy; ptrc++)
   {  printf("%d - 0x%X\n", ptrc, *ptrc);
   }
   getchar();
   // store outside of array
   for (n=10; n<100; n++) 
   { c[n] = n;
   }
   // print values
   for (n=0; n<10; n++) printf("c[%d] = %d\n", n, c[n]); 
   for (n=0; n<10; n++) printf("si[%d] = %d\n", n, si[n]); 
   // print memory 
   for (ptrc = &c[0]; ptrc <&dummy; ptrc++)
   {  printf("%d - 0x%X\n", ptrc, *ptrc);
   }
   getchar();
}
