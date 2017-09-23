#include <stdio.h>

void func(void)
{ int i;
  int j = 7;
  int k;
  static int m;
  static int n = 7;
  static int p;   

  k = 7;
  p = 7;   
  
  printf("i = %d\tj = %d\tk = %d", ++i, ++j, ++k);
  printf("\tm = %d\tn = %d\tp = %d\n", ++m, ++n, ++p);
}

int main(void)
{ int i;

  for (i=0; i<10; i++)
  { func();
  }
  
  getchar();
}
