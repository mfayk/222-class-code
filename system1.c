#include <stdio.h>
#include <stdlib.h>

int main(void)
{  char text[160];

  printf("About to make a 'system' call...\n\n");
  strcpy(text,"ls -l");
  system(text);
  printf("\nDid it work?\n");
  sleep(4);
  printf("Indeed it did.\n");
}
