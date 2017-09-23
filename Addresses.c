#include <stdio.h>

int main(void)
{ char c = 'A';
  char *ptrc = &c;
  
  printf("&c = %d %u 0x%X &ptrc = %d %u 0x%X\n",
                           &c, &c, &c, &ptrc, &ptrc, &ptrc);
  printf("ptrc = %d %u %X *ptrc = %c = %d = 0x%X\n", 
                           ptrc, ptrc, ptrc, *ptrc, *ptrc, *ptrc);

  getchar();
}
