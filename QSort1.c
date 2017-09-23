#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORDS 6

int StringSort( const void *a, const void *b)
{
   return( strcmp((char *)a,(char *)b) );
}

char word[WORDS][20] = { "Yaller Jackets", "Dookies", "Bengal Tigers", "War Chickens", "Buhdawgs", "Semi-noles" };

int main(void)
{ int x;

  printf("\nList before the sort...\n\n");
  for (x = 0; x < WORDS; x++) printf("%s\n", word[x]);

  qsort((void *)word, WORDS, sizeof(word[0]), StringSort);
  
  printf("\n\nList after the sort...\n\n");
  for (x = 0; x < WORDS; x++) printf("%s\n", word[x]);
    
  getchar();
    
  return 0;
}

