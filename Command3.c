#include <stdio.h>

const char strUsage[] = "Usage: [add n m] where n and m are binary numbers.";

int n, m;

int main(int argc, char *argv[])
{  int i;

   switch (argc)
   { case 1:
       printf("Error 1 - No operands.  %s\n", strUsage);
       exit(0);

     case 2:
       if (strcmp(argv[1], "-help") == 0)
       { puts(strUsage);
       } else printf("Error 2 - No second operand. %s\n", strUsage);
       exit(0);

     case 3:
       i = 0;
       n = 0;
       while (argv[1][i] != '\0')
       { if (argv[1][i] == '1')
         { n <<= 1;
           n |= 1;
         }
         else if (argv[1][i] == '0')
         { n <<= 1;
         }
         else
         { printf("Error 3 - First operand not a binary number. %s\n", strUsage);
           exit(0);
         }
         i++;
       }
       printf("n = %d\n", n);
       i = 0;
       m = 0;
       while (argv[2][i] != '\0')
       { if (argv[2][i] == '1')
         { m <<= 1;
           m |= 1;
         }
         else if (argv[2][i] == '0')
         { m <<= 1;
         }
         else
         { printf("Error 3 - First operand not a binary number. %s\n", strUsage);
           exit(0);
         }
         i++;
       }
       printf("m = %d\n", m);
       printf("n + m = %d\n", n + m);
       break;
   }

  getchar();
}


