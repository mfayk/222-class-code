/* Demonstrate writing to another terminal by opening device file */

#include <stdio.h>

int main(int argc, char *argv[])
{ FILE *fpt;
  int Terminal;
  char strDev[100];
  
  if (argc != 3)
  { printf("Usage: devterm n msg, where n is the terminal number and msg is message sent.\n");
    return -1;
  }
  else Terminal = atoi(argv[1]);
  
  sprintf(strDev, "/dev/pts/%d", Terminal);

  if ((fpt = fopen(strDev,"w")) == NULL)
  { printf("Unable to open %s\n", strDev);
    exit(0);
  }
  fprintf(fpt, "%s\n", argv[2]);
  
  fclose(fpt);
}
