#include <stdio.h>
#include <stdlib.h>

#define DEPTH 3
#define ROWS  4
#define COLS  5

int ***A;

int main(void)
{ int d, r, c;

  A = (int ***)malloc(DEPTH*sizeof(int**));
  
  for (d=0; d<DEPTH; d++) 
  { A[d] = (int **)malloc(ROWS*sizeof(int*));
  
    for (r=0; r<ROWS; r++) 
      A[d][r] = (int *)malloc(COLS*sizeof(int));
  }

  for (d=0; d<DEPTH; d++) 
  { for (r=0; r<ROWS; r++)
    { for (c=0; c<COLS; c++)
      {  A[d][r][c] = d*100 + r*10 + c;
      }
    }
  }
  
  printf("&A = %u, A = %u\n", &A, A);
   
  for (d=0; d<DEPTH; d++)
  { printf("&A[%u] = %u, A[%u] = %d\n", d, &A[d], d, A[d]); 
    for (r=0; r<ROWS; r++)
    { printf("&A[%u][%u] = %u, A[%u][%u] = %u\n", d, r, &A[d][r], d, r, A[d][r]); 
      for (c=0; c<COLS; c++)
      { printf("&A[%u][%u][%u] = %u, A[%u][%u][%u] = %u\n", d, r, c, &A[d][r][c], d, r, c, A[d][r][c]);
      }
    }
  }

  for (d=0; d<DEPTH; d++)
  { for (r=0; r<ROWS; r++)
    { free (A[d][r]);
    }
  }
  
  for (d=0; d<DEPTH; d++)
  { free (A[d]);
  }
  
  free(A);
  
  getchar();
}
