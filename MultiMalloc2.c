#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4
char **A;

int main(void)
{ int i, j;

  A = (char **)malloc(ROWS*sizeof(char*));
  
  for (i=0; i<ROWS; i++) 
    A[i] = (char *)malloc(COLS*sizeof(char));

  for (i=0; i<ROWS; i++) 
    for (j=0; j<COLS; j++)
      A[i][j] = i*10 + j;
  
  printf("&A = %d, A = %d\n", &A, A); 
  for (i=0; i<ROWS; i++)
  { printf("&A[%d] = %d, A[%d] = %d\n", i, &A[i], i, A[i]); 
    for (j=0; j<COLS; j++)
      printf("&A[%d][%d] = %d, A[%d][%d] = %d\n", i, j, &A[i][j], i, j, A[i][j]); 
  }

  for (i=0; i<ROWS; i++)
    free (A[i]);
  free(A);
  
  getchar();
}
