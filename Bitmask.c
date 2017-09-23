#include <stdio.h>

#define UCHAR unsigned char

#define BIT_0 0x01
#define BIT_1 0x02
#define BIT_2 0x04
#define BIT_3 0x08
#define BIT_4 0x10
#define BIT_5 0x20
#define BIT_6 0x40
#define BIT_7 0x80

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
{  UCHAR a;

   a = 0x00;
   printf("\na = %3d = 0x%02X", a, a); print_bits(" = ",&a, sizeof(a));
   printf("a = a | (BIT_6 | BIT_4 | BIT_2 | BIT_0);\n");
   a = a | (BIT_6 | BIT_4 | BIT_2 | BIT_0);
   printf("a = %3d = 0x%02X", a, a); print_bits(" = ",&a, sizeof(a));

   a = 0xFF;
   printf("\na = %3d = 0x%02X", a, a); print_bits(" = ",&a, sizeof(a));
   printf("a = a & ~(BIT_7 | BIT_5 | BIT_3 | BIT_1);\n");
   a = a & ~(BIT_7 | BIT_5 | BIT_3 | BIT_1);
   printf("a = %3d = 0x%02X", a, a); print_bits(" = ",&a, sizeof(a));

   printf("\n");
   for (a=0; a<0xFF; a++)
   {  if ((a & 0xAA) == 0xAA) 
      {  printf("Match:  ");
         printf("a = %3d = 0x%02X", a, a); print_bits(" = ",&a, sizeof(a));
      }
   }
   getchar();
}
