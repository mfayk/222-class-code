#include <stdio.h>

#define UCHAR unsigned char
char *HexToBin[16] =
{ "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
  "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"
};

void print_bits(char *text, void *mem, UCHAR len)
{ UCHAR *addr;
  UCHAR i;

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
{  UCHAR a, b, c;

   a = 0xFA;
   b = 0x5F;
   
   printf("a = %3d = 0x%02X", a, a); print_bits(" = ",&a, sizeof(a));
   printf("b = %3d = 0x%02X", b, b); print_bits(" = ",&b, sizeof(b));  

   printf("\nc = a & b\n"); 
   c = a & b;
   printf("c = %3d = 0x%02X", c, c); print_bits(" = ",&c, sizeof(c));

   printf("\nc = a | b\n"); 
   c = a | b;
   printf("c = %3d = 0x%02X", c, c); print_bits(" = ",&c, sizeof(c));

   printf("\nc = a ^ b\n"); 
   c = a ^ b;
   printf("c = %3d = 0x%02X", c, c); print_bits(" = ",&c, sizeof(c));

   printf("\nc = ~a\n"); 
   c = ~a;
   printf("c = %3d = 0x%02X", c, c); print_bits(" = ",&c, sizeof(c));

   printf("\nc = a << 2\n"); 
   c = a << 2;
   printf("c = %3d = 0x%02X", c, c); print_bits(" = ",&c, sizeof(c));

   printf("\nc = b >> 5\n"); 
   c = b >> 5;
   printf("c = %3d = 0x%02X", c, c); print_bits(" = ",&c, sizeof(c));
    
   getchar();
}
