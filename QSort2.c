#include <stdio.h>

int Det(int m[2][2])
{ return (m[0][0] * m[1][1] - m[1][0] * m[0][1]);
}

int MatrixSort(const void *a, const void *b)
{  int det_a, det_b;

   det_a = Det((int **)a);
   det_b = Det((int **)b);
   
   if (det_a < det_b) return -1;
   else if (det_a > det_b) return 1;
   else return 0;
}

#define MATRICES 5

int Matrix[MATRICES][2][2] = 
{ 
  {{3, 1}, {2, 2}},
  {{3, 2}, {2, 1}}, 
  {{0, 2}, {4, 3}},
  {{5, 2}, {2, 1}},
  {{1, 2}, {2, 0}}
};

void PrintMatrix(int m[2][2])
{ 
  printf("[ %d %d ]\n", m[0][0], m[0][1]);
  printf("[ %d %d ] det = %d\n\n", m[1][0], m[1][1], Det(m));
}
 
int main(void)
{ int i;

  printf("\nMatrices before the sort...\n\n");
  for (i = 0; i<MATRICES; i++) PrintMatrix(Matrix[i]);
  getchar();
  
  qsort((void *)Matrix, MATRICES, sizeof(Matrix[0]), MatrixSort);
  
  printf("\n\nMatrices after the sort...\n\n");
  for (i = 0; i<MATRICES; i++) PrintMatrix(Matrix[i]);
      
  getchar();
  
  return 0;
}

