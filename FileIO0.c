#include <stdio.h>

char filename[] = "file.txt";

int main(void)
{  FILE *f;
   int i, j, n;

   f = fopen(filename, "w");

   /* Write some numbers to a file */
   for (i=0; i<10; i++)
   { n = fwrite(&i, 4, 1, f);
     if (n==0) 
     { printf("Error writing to file.\n");
       break;
     }       
     printf("%d\n", i);
   }
   rewind(f);
   /* Read some numbers from a file */
   for (i=0; i<10; i++)
   { n = fread(&j, 4, 1, f);  
     if (n==0) 
     { printf("Error reading from file.\n");
       break;
     }       
     printf("%d\n", j);
   }
   fclose(f);
   
   f = fopen(filename, "r");
   /* Read some numbers from a file */
   for (i=0; i<10; i++)
   { n = fread(&j, 4, 1, f);  
     if (n==0) 
     { printf("Error reading from file.\n");
       break;
     }       
     printf("%d\n", j);
   }
   fclose(f);
  
   getchar();
   return 0;
}


