#include <stdio.h>
#define MAXLINE 256

char line[MAXLINE];
char s1[MAXLINE];
int n;
char s2[MAXLINE];
int items;

int main(void)
{ char *p;

  do 
  { printf("Input a string, an int and a string...\n\n"); 
    p = fgets(line, MAXLINE, stdin); printf("\n");
    if ( p != NULL)
    { items = sscanf(line, "%s %d %s", s1, &n, s2);
    
      switch (items)
      { case 0: 
          printf("No items found.\n\n"); break;   
            
        case 1:  
          if (strcmp(s1, "QUIT") == 0) return 0; 
          else printf("One item found: \"%s\"\n\n", s1); break;
                 
	    case 2: 
          printf("Two items found: \"%s\" and %d\n\n", s1, n); break;
        
	    case 3:
          printf("Three items found: \"%s\", %d, and \"%s\"\n\n", s1, n, s2); break;
        
        default:  
          printf("# %s\n\n", line);
      }
    }
  } while (p);
}
