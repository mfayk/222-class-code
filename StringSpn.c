#include <string.h>
#include <stdio.h>

#define SCHOOLS 4
char *s = "UNCOUTH";
char *str[SCHOOLS] = {"CLEMSON", "UNC", "UNIVERSITY OF MIAMI", "UNIVERSITY OF SOUTH CAROLINA"};

int main(void)
{  int i, n;
   
   for (i=0; i<SCHOOLS; i++)
   {   n = strspn(s, str[i]);
       printf("The first %d characters of \"%s\" are in \"%s\".\n\n", n, s, str[i]);
   }
   getchar();
}
