#include <stdio.h>

char *HexToBin[16] =
{ "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
  "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"
};
//---------------------------------------------------------------------------
#define UCHAR unsigned char

void print_bits(char *text, void *mem, unsigned char len)
{ unsigned char *addr;
  unsigned char i;

  // *** Print Binary Value of Memory *** //
  printf(text);
  for (addr=(UCHAR *)mem + len - 1; addr>=(UCHAR *)mem; addr--)
  {  printf("%4s", &HexToBin[*addr>>4][0]);
     printf("%4s ", &HexToBin[*addr % 16][0]);
  }
  printf("\n");
}

//---------------------------------------------------------------------------

int main(void)
{  char a, b, c, i, j, k;
   
   a = 23;    print_bits("a = ",&a, sizeof(a));
   b = 17;    print_bits("b = ",&b, sizeof(b));
   c = a + b;  print_bits("c = ",&c, sizeof(c));
   
   printf("\n");

   i = -23;    print_bits("i = ",&i, sizeof(i));
   j = -17;    print_bits("j = ",&j, sizeof(j));
   k = i + j;  print_bits("k = ",&k, sizeof(k));

   getchar();
}
