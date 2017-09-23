#include <stdio.h>

int Array[100];
int *ptrA = Array;

int main(void)
{ int i;
//  int Array[100];
//  int *ptrA = Array;

  for (i=0; i<100; i++) Array [i] = i;
    
  printf("Array[7] = %d\n\n", Array[7]); 
  printf("*(&Array[7]) = %d\n\n", *(&Array[7])); 
  printf("*(Array + 7) = %d\n\n", *(Array + 7)); 
  printf("*(ptrA + 7) = %d\n\n", *(ptrA + 7)); 
  printf("ptrA[7] = %d\n\n", ptrA[7]); 
  
  ptrA = &Array[10];
  printf("ptrA[] = %d\n\n", ptrA[7]); 

  ptrA = &Array[110];
  printf("ptrA[] = %d\n\n", ptrA[7]); 
  
  ptrA = &Array[-10];
  printf("ptrA[] = %d\n\n", ptrA[7]); 
  

  ptrA = &Array[10000];
  printf("ptrA[] = %d\n\n", ptrA[7]); 

  getchar();
}
