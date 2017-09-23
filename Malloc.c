#include <stdio.h>
#include <stdlib.h>

/*-------------------------------------------------------------------------*/

#define SIZE 10

int main(void)
{ int i;
  int *ptri, *ptrj;
  
  printf("ptri = 0x%X\n", ptri);
  ptri = (int *)malloc(SIZE*sizeof(int));
  printf("ptri = 0x%X\n", ptri);
  
  for (i=0; i<SIZE; i++) printf("ptri[%d] = %d\n", i, ptri[i]);
  
  for (i=0; i<SIZE; i++) ptri[i] = i;
  
  for (i=0; i<SIZE; i++) printf("ptri[%d] = %d\n", i, ptri[i]); 

  free(ptri);
  printf("ptri = 0x%X\n", ptri);
  for (i=0; i<SIZE; i++) printf("ptri[%d] = %d\n", i, ptri[i]); 
  getchar();
  
  ptrj = (int *)malloc(SIZE*sizeof(int));
  printf("ptrj = 0x%X\n", ptrj);
  for (i=0; i<SIZE; i++) ptrj[i] = -i);
  
  for (i=0; i<SIZE; i++) printf("ptrj[%d] = %d\n", i, ptrj[i]);
  for (i=0; i<SIZE; i++) printf("ptri[%d] = %d\n", i, ptri[i]); 
  getchar();
}
