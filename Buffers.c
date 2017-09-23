#include <stdio.h>
#include <unistd.h>

int main(void)
{ int i;

  for (i=0; i<5; i++)
  { printf("i = %d ", i);
    sleep(1);
  }

  printf("\nPress Enter to Continue...");
  getchar();
  printf("\n");

  for (i=0; i<5; i++)
  { printf("i = %d \n", i);
    sleep(1);
  }
  
  printf("\nPress Enter to Continue...");
  getchar();
  printf("\n");

  for (i=0; i<5; i++)
  { printf("i = %d ", i); fflush(stdout);
    sleep(1);
  }

}

