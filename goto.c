#include <stdio.h>
#define ROWS 5
#define COLS 5

int main(void)
{ int i, j, a[ROWS][COLS];
  char c;
   
   for (i=0; i<ROWS; i++)
   {  for (j=0; j<COLS; j++)
      { printf("Enter a[%d][%d]: ", i, j);
        if ((c = getchar()) == 'q') goto exit;
        else { getchar(); a[i][j] = c; printf("\n"); }   
      }
   }
exit: printf("Done.\n");
    
  getchar();
}
