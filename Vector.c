#include <stdio.h>
#include <stdlib.h>

int *intVector_Create(int low_index, int high_index)
{  int *ptri;

   if (high_index > low_index) 
   {  ptri = (int *)malloc((high_index - low_index + 1) * sizeof(int));
      if (ptri == NULL)
      { return NULL;
      }
      else return ptri - low_index;
   } 
   else return NULL;
}

int intVector_Delete(int *ptri, int low_index, int high_index)
{  
   if (ptri) 
   {  free (ptri + low_index);
      return 1;
   } 
   else return 0;
}


int main(void)
{ int i, j;
  int *Vector1, *Vector2;
  
  Vector1 = intVector_Create(1, 5);
  Vector2 = intVector_Create(-3, 3);
  for (i=1; i<=5; i++) 
  { Vector1[i] = i;
  }
  for (i=-3; i<=3; i++) 
  { Vector2[i] = i;
  }

  for (i=1; i<=5; i++) 
  { printf("Vector1[%d] = %d\n", i, Vector1[i]);
  }
  printf("\n");
  for (i=-3; i<=3; i++) 
  { printf("Vector2[%2d] = %2d\n", i, Vector2[i]);
  }
  
  intVector_Delete(Vector1, 1, 5);
  intVector_Delete(Vector2, -3, 3);
  
  getchar();
}
