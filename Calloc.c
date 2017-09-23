#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

//---------------------------------------------------------------------------

int main(void)
{ int i;
  int *ptri;

  //---------------------- First use malloc ------------------------//

  ptri = (int *)malloc(SIZE*sizeof(int));

  for (i=0; i<SIZE; i++) printf("ptr[%d] = %d\n", i, ptri[i]); 
  
  free(ptri);
  
  //---------------------- Now use calloc ------------------------//

  ptri = (int *)calloc(SIZE, sizeof(int));

  for (i=0; i<SIZE; i++) printf("ptr[%d] = %d\n", i, ptri[i]); 
  
  free(ptri);
  
  getchar();
}
