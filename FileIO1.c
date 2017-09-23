#include <stdio.h>

char filename[] = "outfile.txt";
char data[] = 
{71, 97, 109, 101, 99, 111, 99, 107, 115, 32, 83, 116, 105, 110, 107, 33};

int main(void)
{  FILE *fout;
   char c;
   int i, n;

   fout = fopen(filename, "w");
   n = ftell(fout);        /* returns current position of stream */
   printf("Current File position = %d\n", n);

   /* Write some numbers to a file */
   fwrite("Go", 1, 2, fout);
   c = 0x20;
   fwrite(&c, 1, 1, fout);
   fwrite("Tigers!", 1, 7, fout);
   fwrite("\n", 1, 1, fout);
   fwrite(data, 1, 16, fout);
   fwrite("\n", 1, 1, fout);

   n = ftell(fout);        /* returns current position of stream */
   printf("Current File position = %d\n", n);

   rewind(fout);           /* set filepointer to beginning of file */
   n = ftell(fout);        /* returns current position of stream */
   printf("Current File position = %d\n", n);

   fseek(fout, 0, SEEK_END); /* moves to end of file "SEEK_END"    */
   n = ftell(fout);     /* gets current position, which is end */

   printf("Filesize of file:\"%s\" equals %d bytes\n", filename, n);
   fclose(fout);
   
   getchar();
   return 0;
}


