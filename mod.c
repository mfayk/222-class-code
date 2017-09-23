#include <stdio.h>

int rows, cols;

int main(void)
{ int index, r, c;

  printf("Enter number of rows: ");
  scanf("%d", &rows); fflush(stdin);
  
  printf("\Enter number of columns: ");
  scanf("%d", &cols); fflush(stdin);
  
  index = 0;
  for (r=0; r<rows; r++)
  {
    for (c=0; c<cols; c++)
    { printf("%02d ", index++);
    }
    printf("\n");
  }

  printf("\n\nEnter row (0 to %d) - ", rows-1); 
  scanf("%d", &r); fflush(stdin);
  printf("\nEnter col (0 to %d) - ", cols-1);
  scanf("%d", &c); fflush(stdin);
  
  index = cols * r + c;
  printf("\nIndex = cols * r + c = %d\n", index);

  printf("\nEnter index - ");
  scanf("%d", &index); fflush(stdin);
  
  r = index / cols;
  printf("\nr = index / cols = %d\n", r);
  c = index % cols;
  printf("c = index %% cols = %d\n", c);
 
  getchar();
}
