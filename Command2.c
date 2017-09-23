#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  int i, j, n;

   const char *Cheer[][2] = 
   {{"Orange", "White" },
     {"Clemson", "Tigers"},
     { "Go", "Clemson"},
     { "USC", "Stinks"}
    };
    
   switch (argc)
   { case 1:
     case 2:
      printf("Invalid arguments entered.\n");
      printf("The command has the form:  command cheer n\n   where cheer is a string and n is the number of times to repeat.");      
      return (0);
      
     case 3:
      n = atoi(argv[2]);
      for (i=0; i<4; i++)
      { if (strcmp(argv[1], Cheer[i][0]) == 0) 
        { for (j=0; j<n; j++)
          { printf("%s\n", Cheer[i][1]);
          }
          return (0);
        } 
      }
      printf("Don't Know that Cheer...\n");
      break;
   }
}
