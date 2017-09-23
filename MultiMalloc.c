#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 10

//---------------------------------------------------------------------------

int main(void)
{ int i, j;
  int **Array;

  Array = (int **)malloc(ROWS*sizeof(int*));
  
  for (i=0; i<ROWS; i++) 
    Array[i] = (int *)malloc(COLS*sizeof(int));

  for (i=0; i<ROWS; i++) 
    for (j=0; j<COLS; j++)
      Array[i][j] = i*100 + j;
  
  for (i=0; i<ROWS; i++) 
    for (j=0; j<COLS; j++)
      printf("Array[%d][%d] = %d\n", i, j, Array[i][j]);
  getchar();

  for (i=0; i<ROWS; i++) 
    for (j=0; j<COLS; j++)
      printf("Array[%d][%d] = %d\n", i, j, *(*(Array + i) + j));

  for (i=0; i<ROWS; i++)
    free (Array[i]);
  free(Array);
  
  getchar();
}
