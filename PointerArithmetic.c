#include <stdio.h>

char Memory[8];

char *ptrc;
short int *ptri;
long *ptrl;
double *ptrd;
struct S
{ char c[100];
} *ptrs;

//---------------------------------------------------------------------------

int main(void)
{ 
  printf("Memory = %u\n\n", Memory); 
  
  ptrc = (char *)Memory;
  printf("ptrc = %u\n\n", ++ptrc);

  ptri = (short int *)Memory;
  printf("ptri = %u\n\n", ++ptri);

  ptrl = (long *)Memory;
  printf("ptrl = %u\n\n", ++ptrl);

  ptrd = (double *)Memory;
  printf("ptrd = %u\n\n", ++ptrd);

  ptrs = (struct S *)Memory;
  printf("ptrS = %u\n\n", ++ptrs);

  getchar();
}
