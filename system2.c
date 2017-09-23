#include <stdio.h>
#include <stdlib.h>

int main(void)
{ char text[256];
  int i, j, k;
  
  printf("\nSystem2 Running...\n");
  
  j = rand() % 5;
  
  for (i=0; i<j; i++)
  { k = rand() % 10 + 2000;
    sprintf(text, "sysdemo %d", k);
    printf("About to call '%s'...\n\n", text);
    system(text);
    printf("\nSysdemo called and finished.\n");
  }
  printf("\nSystem2 Finished.\n");
  
  getchar();
}
