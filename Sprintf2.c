#include <stdio.h>
#include <string.h>

int main(void)
{ char strInput[256], strFormat[256];
  
  puts("Enter the type you wish to print out: i d u X f lf - \n");
  gets(strInput);
      
  sprintf(strFormat, "The value = %%%s", strInput);
  
  printf("The Format is \"%s\"\n", strFormat);
  printf(strFormat, -15);
  
  getchar();
}
