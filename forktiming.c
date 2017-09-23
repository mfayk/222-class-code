#include <stdio.h>
#include <unistd.h>

#define FALSE 0
#define TRUE !FALSE
#define TIRED 5

int IceCream = FALSE;

int main(void)
{ int i;

  switch (fork())
  { case 0: // Child
      for (i=0; i<TIRED; i++)
      { if (!IceCream)
        { printf("\tI won't eat my spinach!!!\n");
          sleep(1);
        }
        else
        { printf("Ice Cream!");
          break;
        }
      }
      break;

    default: // Parent
      sleep(1);
      IceCream = TRUE;
      printf("Here's your Ice Cream.\n");
      break;
  }
}

