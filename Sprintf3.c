#include <stdio.h>
#include <string.h>

FILE *fout;

int main(void)
{ int month, day, year;
  char strFile[256];
  
  printf("Enter Month: "); scanf("%d",&month); fflush(stdin);
  printf("Enter Day: "); scanf("%d",&day); fflush(stdin);
  printf("Enter Year: "); scanf("%d",&year); fflush(stdin);
  
  sprintf(strFile, "TestData-%d-%d-%d.txt",month,day,year);
  if ((fout = fopen(strFile, "wt")) == NULL) 
  { printf("Cannot open output file."); exit(1);
  }

  fprintf(fout,"Test Data for %d//%d//%d\n", month,day,year);
  
  fclose(fout);
}
