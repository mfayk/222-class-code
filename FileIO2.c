#include <stdio.h>

char filename[] = "infile.txt";

int main(void)
{  FILE *fin, *fout;
   char c;
   int i, n, length; 

   if ((fout = fopen(filename, "w")) == NULL)
   {  printf("Error opening \"%s\"\n", filename);
      return (1);
   }
   for (i=0; i<40; i++)
   { n = ('0' + i);
     fwrite(&n, 1, 1, fout);
   }
   for (i=0; i<10; i++)
   { n = i;
     fwrite(&n, 4, 1, fout);
   }
   for (i=0; i<10; i++)
   { n = rand();
     fwrite(&n, 4, 1, fout);
   }
   fclose(fout);

   
   if ((fin = fopen(filename, "r")) == NULL)
   {  printf("Error opening \"%s\"\n", filename);
      return (1);
   }

   /* Get length of file */
   fseek(fin, 0, SEEK_END); /* moves to end of file "SEEK_END"    */
   length = ftell(fin);     /* gets current position, which is end */
   rewind(fin);             /* set filepointer to beginning of file */

   /* Read the data as bytes from the file */
   for (i=0; i<length; i++)
   { fread(&c, 1, 1, fin);
     printf("char[%d] = %d =  %c\n", i, c, c);
   }
   puts("\n");
   getchar();
   
   /* Now read the data as short integers */
   rewind(fin);
   for (i=0; i<length/2; i++)
   { fread(&n, 2, 1, fin);
     printf("sint[%d] = %d\n", i, n);
   } 
   puts("\n");
   getchar();
   
   /* Now read the data as integers */
   rewind(fin);
   for (i=0; i<length/4; i++)
   { fread(&n, 4, 1, fin);
     printf("int[%d] = %d\n", i, n);
   } 

   fclose(fin);
   
   getchar();
   return 0;
}


