/* Demonstrate reading bytes from mouse, opening device file */

#include <stdio.h>

int main(void)
{
  FILE *fpt;
  int c;
  int buf[30];

  if ((fpt = fopen("/dev/psaux","r")) == NULL)
  { printf("Can't open\n");
    exit(0);
  }
  while (1)
  { c = fread(buf,4,1,fpt);
    printf("Read %d bytes:  %d\n",c,buf[0]);
  }
  
  fclose(fpt);
  
  exit(0);
}


