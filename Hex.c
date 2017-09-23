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
{  char c; 
   short int si;
   int i;
   
   c = 0x1234ABCD;   print_bits("c  = ",&c, sizeof(c));
   si = 0x1234ABCD;  print_bits("si = ",&si, sizeof(si));
   i = 0x1234ABCD;   print_bits("i  = ",&i, sizeof(i));
   printf("\n");

   c = 12;        printf("c  = %d = 0x%X", c, c);
   print_bits(" = ",&c, sizeof(c));
   si = 1234;     printf("si = %d = 0x%X", si, si);
   print_bits(" = ",&si, sizeof(si));
   i = 123456789; printf("i  = %d = 0x%X", i, i);
   print_bits(" = ",&i, sizeof(i));
   
   getchar();
}
