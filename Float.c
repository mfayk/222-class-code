#include <stdio.h>

char *HexToBin[16] =
{ "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
  "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"
};
#define UCHAR unsigned char

void print_bits(char *text, void *mem, unsigned char len)
{ unsigned char *addr;
  unsigned char i;
  unsigned int l;

  /*** Print Binary Value of Memory ***/
  printf(text);
  l = 0;
  /*** since machine in little endian... ***/
  for (addr=(UCHAR *)mem + len - 1; addr>=(UCHAR *)mem; addr--)
  {  printf("%4s", &HexToBin[*addr>>4][0]);
     printf("%4s ", &HexToBin[*addr % 16][0]);
     l <<= 8;
     l |= *addr;
  }
  printf("\n\t\t%u,", (l & 0x80000000) >> 31);
  printf(" %u,", (l & 0x7F800000) >> 23);
  printf(" 0x%06X", (l & 0x007FFFFF) >> 0);

  printf("\n");
}

/*------------------------------------------------------------------------*/

int main(void)
{  float f;
   int *ptri;
   
   ptri = (int *)&f;
   
   *ptri = 0xABC00123;
   
   print_bits("f = ",&f, sizeof(f));
   printf("f = %d\n", *(int *)&f);
   printf("f = 0x%X\n", *(int *)&f);
   printf("f = %f\n", f);
   printf("f = %e\n\n", f);
   
   f = 12.3456E-3;
   print_bits("f = ",&f, sizeof(f));
   printf("f = %d\n", *(int *)&f);
   printf("f = 0x%X\n", *(int *)&f);
   printf("f = %f\n", f);
   printf("f = %e\n", f);
   
   getchar();
}
