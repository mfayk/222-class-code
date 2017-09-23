#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char strFirst[] = "WILLIAM";
const char strLast[] = "REID";

/*--------------------------------------------------------------------------*/

int main(void)
{ int i;
  char *ptrc;

  /*** Grab some memory ***/
  ptrc = (char *)malloc(strlen(strFirst)+1);

  printf("ptrc = %d,*ptrc = %s\n", ptrc, ptrc);
  
  /*** Initialize it ***/
  strcpy(ptrc, strFirst); 

  printf("*ptrc = %s\n", ptrc);
    
  /*** Decide to enlarge it ***/
  ptrc = (char *)realloc(ptrc, strlen(ptrc)+strlen(strLast)+2);

  /*** Show the values haven't changed ***/
  printf("ptrc = %d, *ptrc = %s\n", ptrc, ptrc);

  strcat(ptrc, strLast); 

  printf("*ptrc = %s\n", ptrc);
 
  free(ptrc);
  
  getchar();
  
  /*** Now see the difference ***/ 
  ptrc = (char *)malloc(2);
  printf("ptrc = %d\n", ptrc);
  ptrc = (char *)realloc(ptrc, 4);
  printf("ptrc = %d\n\n", ptrc);
  free(ptrc);

  ptrc = (char *)malloc(5);
  printf("ptrc = %d\n", ptrc);
  ptrc = (char *)realloc(ptrc, 2000);
  printf("ptrc = %d\n", ptrc);
  free(ptrc);

  
  getchar();
}
