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
char c;
unsigned char uc; 
//---------------------------------------------------------------------------   
void print_c(void)
{  printf("c = %c = %d = 0x%X", c, c, c);
   print_bits(" = ",&c, sizeof(c));
   printf("\n");  
}
//---------------------------------------------------------------------------
int main(void)
{    
   c = 65;  print_c();   
   
   for (c=7; c<=13; c++) print_c(); 
   
   c = '6';  print_c();

   c = '\'';  print_c();

   c = '\\';  print_c();
   
   uc = 200;  print_c();
   
   c = 200; print_c();
   
   getchar();
}
