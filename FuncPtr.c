#include <stdlib.h>
#include <stdio.h>

typedef void (*fptr)(void);

void PrintGoTigers(void){ printf("\nGo Tigers!\n"); }
void PrintOrangeAndWhite(void){ printf("\nOrange and White is Right!\n"); }
void PrintReignSupremeAlway(void){ printf("\nReign Supreme Alway!\n"); }
void PrintGarnetAndBlack(void){ printf("\nGarnet and Black-Get Back!\n"); }
void PrintGoCocks(void){ printf("\nGoCocksGo..GoGocksGo...\nAroundTheBowlAndDownTheHoleGoCocksGo...\n"); }

fptr Func[5] =
{ PrintGoTigers,
  PrintOrangeAndWhite,
  PrintReignSupremeAlway,
  PrintGarnetAndBlack,
  PrintGoCocks
};

int main(void)
{  char c;

   printf("Input 0 - 4\n");

   while (1)
   {  fflush(stdin);
      c = getchar();

      if ((c < '0') || (c > '4')) return 0;

      Func[c - '0']();  /* Must put () here or nothing happens */
   }
}
