#include <stdio.h>

/* This program writes the upper nibble and then the lower nibble of   */
/* a variable called a to bit 2, 3, 4, and 5 of variable PortOut       */
/* using bitwise operations without changing the other bits of PortOut */

#define BIT_0 0x01
#define BIT_1 0x02
#define BIT_2 0x04
#define BIT_3 0x08
#define BIT_4 0x10
#define BIT_5 0x20
#define BIT_6 0x40
#define BIT_7 0x80

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

int main(void)
{ int i;
  unsigned char a;
  unsigned char PortOut = 0xC1; /* Let the upper 2 bits of a be 11 
                                  and the lower two bits be 01
                                  These should not change */                             
  for (i=0; i<5; i++)
  { printf("Input a char to write to the display.\n");
    a = getchar();
    printf("a = 0x%X\n", a);
    print_bits("a = ", &a, 1);
    printf("PortOut0 = 0x%X\n", PortOut);
    print_bits("PortOut0 = ", &PortOut, 1);
    
    /* Write the upper nibble of a to pins (bits) 2-5 of PortOut
       Clear bit positions to be written */
    PortOut = PortOut & ~(BIT_5 | BIT_4 | BIT_3 | BIT_2); 
    /* Then Or in the upper nibble of a to those positions.  */
    PortOut = PortOut |  ((a & 0xF0) >> 2) ;
    
    printf("PortOut1 = 0x%X\n", PortOut);
    print_bits("PortOut1 = ", &PortOut, 1);
    
    /* Write the lower nibble of a to pins (bits) 2-5 of PortOut */
    /* Clear bit positions to be written */
    PortOut = PortOut & ~(BIT_5 | BIT_4 | BIT_3 | BIT_2); 
    /* Then Or in the lower nibble of a to those positions. */
    PortOut = PortOut | ((a & 0x0F) << 2) ;
    
    printf("PortOut2 = 0x%X\n", PortOut);
    print_bits("PortOut2 = ", &PortOut, 1);
    
    puts("\n");
    
    getchar();
  }

}
