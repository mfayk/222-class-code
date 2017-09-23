#include <stdio.h>

int main(void)
{ int i, j, k;
   
  for (i=0, printf("Initialize\n"); printf("Test\n"), i<10; i++, j++, printf("Increment\n"))
  {  
    printf("i = %d, j = %d\n", i, j);
  }

  printf("\nEnter to continue\n");
  getchar(); /**********************************************/
  
  printf("Input Numbers ('0' = quit)...\n");
  for (i=0; j = getchar()-0x30; i++, getchar())
  { 
    printf("j = %d\n", j);   
  }
  
  printf("\nEnter to continue\n");
  getchar(); /**********************************************/
  
  for (i=0, j=0; i<10; i++)
  {
    i = (++j, i--, j+7);
    printf("i = %d, j = %d\n", i, j);
  }
  
  printf("\nEnter to continue\n");

  getchar(); /**********************************************/

  for (i=0, printf("Initialize\n"); i<10, k = printf(""); i++, j++, printf("Increment\n"))
  {  
    printf("i = %d, j = %d, k = %d\n", i, j, k); getchar();
  }

  printf("\nEnter to continue\n");
  getchar(); /**********************************************/

  for (i=0, printf("Initialize\n"); i<10, k = printf("Test\n"); i++, j++, printf("Increment\n"))
  {  
    printf("i = %d, j = %d, k = %d\n", i, j, k); getchar();
  }

}
