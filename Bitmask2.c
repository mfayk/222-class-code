#include <stdio.h>

#define UCHAR unsigned char

void print_bits(char *text, void *mem, UCHAR len)
{ UCHAR *addr; UCHAR i; char j;

  // *** Print Binary Value of Memory *** //
  printf(text);
  for (addr=(UCHAR *)mem + len - 1; addr>=(UCHAR *)mem; addr--)
  {  for (j = 7; j>=0; j--) printf((*addr>>j) & 0x01 ? "1" : "0");
  }
  printf("\n");
}
//---------------------------------------------------------------------------
int main(void)
{  UCHAR i;

   printf("Enter a character...  "); 
   i = getchar();  fflush(stdin);
   
   printf("The binary value for %c is ");
   print_bits(" = ", &i, sizeof(i));
   
   getchar();
}
