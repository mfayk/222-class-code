#include <stdio.h>

/* This program shows that the result of right shifting bits */
/* depends on whether the integer is signed or not           */

#define UCHAR unsigned char
char *HexToBin[16] =
{ "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
  "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"
};

void print_bits(char *text, void *mem, UCHAR len)
{ UCHAR *addr;
  UCHAR i;

  /*** Print Binary Value of Memory ***/
  printf(text);
  for (addr=(UCHAR *)mem + len - 1; addr>=(UCHAR *)mem; addr--)
  {  printf("%4s", &HexToBin[*addr>>4][0]);
     printf("%4s ", &HexToBin[*addr % 16][0]);
  }
  printf("\n");
}

signed int a = 12, b = -12;
unsigned int c = 12, d = -12;

void print_data(void)
{ printf("a = %d, b = %d, c = %u, d = %u\n", a, b, c, d);
  printf("a = 0x%X, b = 0x%X, c = 0x%X, d = 0x%X\n", a, b, c, d);
  print_bits("a = ", &a, 4);   print_bits("b = ", &b, 4);
  print_bits("c = ", &c, 4);   print_bits("d = ", &d, 4);
}

int main(void)
{ 
  print_data();

  printf(">>=3\n");
  a >>= 3;
  b >>= 3;
  c >>= 3;
  d >>= 3;

  print_data();
  
  printf("<<=3\n");
  a <<= 3;
  b <<= 3;
  c <<= 3;
  d <<= 3;

  print_data();

  getchar();
}
