#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{ char str[120];
      
  sprintf(str, "The value of Pi is %f, and the inverse of Pi is %f.\n", M_PI, M_1_PI);
  
  puts(str);
  
  getchar();
}
