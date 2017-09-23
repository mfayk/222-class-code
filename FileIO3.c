#include <stdio.h>
#include <math.h>

/*  This program uses fprintf and fscanf 
    for reading and writing to a text file
*/

char filename[] = "fileIO3.txt";
char str[256];

int main(void)
{  int i;
   float x;
   FILE *f;

   if ((f = fopen(filename, "wt")) == NULL)
   {  printf("Error opening \"%s\"\n", filename);
      return (1);
   }
   
   for (i=0; i<=90; i+=10)
   {  fprintf(f, "i = %i sin(%d) = %f\n", i, i, sin(i*3.1415926/180));
   } 
   fclose(f);

   
   if ((f = fopen(filename, "rt")) == NULL)
   {  printf("Error opening \"%s\"\n", filename);
      return (1);
   }
   while (!feof(f))
   { fscanf(f, "%s", &str);
     if (feof(f)) break;
     printf("%s\n", str);
   }
   rewind(f);
   while (!feof(f))
   { 
     for (i=0; i<5; i++) 
     {  fscanf(f, "%s ", str);
        if (feof(f)) break;
        printf("%s ", str);
     }
     fscanf(f, "%f", &x);
     if (feof(f)) break;
     printf("%f\n", x);
   }

   fclose(f);
   
   getchar();
   return 0;
}


