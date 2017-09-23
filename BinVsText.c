#include <stdio.h>

int main(void)
{  FILE *fout;
   int i, n;

   fout = fopen("BinVsText1.bin", "wb");

   /* Write binary numbers to file */
   for (i=0; i<10; i++)
   { n = rand();
     fwrite(&n, 4, 1, fout);
     fwrite("\n", 1, 1, fout);
   }

   for (i=0; i<10; i++)
   { n = rand();
     fprintf(fout, "%d", n);
     fprintf(fout, "\n");
   } 

   fout = fopen("BinVsText.txt", "wt");

   /* Write binary numbers to file */
   for (i=0; i<10; i++)
   { n = rand();
     fwrite(&n, 4, 1, fout);
     fwrite("\n", 1, 1, fout);
   }

   for (i=0; i<10; i++)
   { n = rand();
     fprintf(fout, "%d", n);
     fprintf(fout, "\n");
   } 
     
   fclose(fout);
   
   return 0;
}


