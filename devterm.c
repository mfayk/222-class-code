/* Demonstrate writing to another terminal by opening device file */

#include <stdio.h>

int main(int argc, char *argv[])
{ FILE *fpt;
  int Terminal;
  char strDev[100];
  
  if (argc != 2)
  { printf("a.out n, where n is the terminal number.\n");
    return -1;
  }
  else Terminal = atoi(argv[1]);
  
  sprintf(strDev, "/dev/pts/%d", Terminal);

  if ((fpt = fopen(strDev,"w")) == NULL)
  { printf("Unable to open %s\n", strDev);
    exit(0);
  }
  fprintf(fpt,"Hello!  Scientia Est Potentia!!!\n");
  
  fclose(fpt);
}
