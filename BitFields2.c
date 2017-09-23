#include <stdio.h>

#define ON  1
#define OFF 0
#define ENABLE  1
#define DISABLE 0
  
/* Analog Devices ADSP 21061 SHARC Processor Serial Control Register 
       31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 
        |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |--- LRFS
RXS ----|--|  |  |  |  |  |  |  |  |  |  |  |  |  |------ LAFS
ROVF----------|  |  |  |  |  |  |  |  |  |  |  |--------- SDEN
NCH -------------|--|--|--|--|  |  |  |  |  |------------ SCHEN
MCE ----------------------------|  |  |  |--------------- IMAT
SPL -------------------------------|  |------------------ D2DMA

       15 14 13 12 11 10 09 08 07 06 05 04 03 20 10 00
        |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | 
IMODE --|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |---  SPEN                                 
IRFS  -----|  |  |  |  |  |  |  |  |  |  |  |  |--|------  DTYPE
RFSR  --------|  |  |  |  |  |  |  |  |  |  |------------  SENDN
CKRE  -----------|  |  |  |  |--|--|--|--|---------------  SLEN
UNUSED -------------|  |  |------------------------------  PACK
                       |---------------------------------  ICLK
*/
struct SRCTL
{ unsigned RXS:   2;  /*Read only */
#define RXS_FULL    0x3
#define RXS_EMPTY   0x0
#define RXS_PARTIAL 0x2
  unsigned ROVF:  1; /* Read only */
  unsigned NCH:   5; /* Number of Channels */
  unsigned MCE:   1;
  unsigned SPL:   1;
  unsigned D2DMA: 1;
  unsigned IMAT:  1;
#define IMAT_ACCEPT_ON_TRUE  ON
#define IMAT_ACCEPT_ON_FALSE OFF
  unsigned SCHEN: 1;
  unsigned SDEN:  1;
  unsigned LAFS:  1;
#define LAFS_ACTIVE_LATE  ON
#define LAFS_ACTIVE_EARLY OFF
  unsigned LRFS:  1;
#define LRFS_ACTIVE_LOW  ON
#define LRFS_ACTIVE_HIGH OFF

  unsigned IMODE: 1;                                 
  unsigned IRFS:  1;
#define IRFS_INTERNAL ON
#define IRFS_EXTERNAL OFF
  unsigned RFSR:  1;
#define RFSR_REQUIRED     ON
#define RFSR_NOT_REQUIRED OFF
  unsigned CKRE:  1;
#define CKRE_RISING_EDGE  ON
#define CKRE_FALLING_EDGE OFF
  unsigned UNUSED:1;
  unsigned ICLK:  1;
#define ICLK_INTERNAL ON
#define ICLK_EXTERNAL OFF
  unsigned PACK:  1;
  unsigned SLEN:  5;  /* Word length -1 */
  unsigned SENDN: 1;
#define SENDN_LSB_FIRST ON
#define SENDN_MSB_FIRST OFF
  unsigned DTYPE: 2;
  unsigned SPEN:  1;
};
  
void print_bits(void *mem, unsigned char len)
{ unsigned char *addr;
  unsigned char i;

  for (addr=(unsigned char *)mem + len - 1; addr>=(unsigned char *)mem; addr--)
  {  for (i=0; i<8; i++)
     { putchar((*addr & (0x80 >> i)) ? '1' : '0');
     }
  }
}

/*---------------------------------------------------------------------------*/

int main(void)
{ struct SRCTL SRCTL0, SRCTL1;
  
  printf("Sizeof(SRCTL0) = %d\n", sizeof(SRCTL0));
  printf("SRCTL0 = 0x%X\n",  *((int*)&SRCTL0));

  *((int*)&SRCTL0) = 0x0;
  printf("SRCTL0 = 0x%X\n",  *((int*)&SRCTL0));

  SRCTL0.NCH = 15; /* Number of Channels */
  printf("SRCTL0 = 0x%X\n",  *((int*)&SRCTL0));
  print_bits(&SRCTL0, sizeof(SRCTL0)); puts("\n");

  SRCTL0.MCE = ENABLE;
  SRCTL0.SPL = ENABLE;
  printf("SRCTL0 = 0x%X\n",  *((int*)&SRCTL0));
  print_bits(&SRCTL0, sizeof(SRCTL0)); puts("\n");

  SRCTL0.D2DMA = ENABLE;
  SRCTL0.IMAT = IMAT_ACCEPT_ON_TRUE;
  SRCTL0.SCHEN = ENABLE;
  SRCTL0.SDEN = DISABLE;
  SRCTL0.LAFS = LAFS_ACTIVE_LATE;
  SRCTL0.LRFS = LRFS_ACTIVE_LOW;

  SRCTL0.IMODE = ENABLE;                                 
  SRCTL0.IRFS = IRFS_INTERNAL;
  SRCTL0.RFSR = RFSR_NOT_REQUIRED;
  SRCTL0.CKRE = CKRE_FALLING_EDGE;
  SRCTL0.UNUSED = ENABLE;
  SRCTL0.ICLK = ICLK_INTERNAL;
  SRCTL0.PACK = ENABLE;
  SRCTL0.SLEN = 7;  
  SRCTL0.SENDN = SENDN_LSB_FIRST;
  SRCTL0.DTYPE = 0;
  SRCTL0.SPEN = ENABLE;

  printf("SRCTL0 = 0x%X\n",  *((int*)&SRCTL0));
  print_bits(&SRCTL0, sizeof(SRCTL0)); puts("\n");
  
  switch (SRCTL0.RXS)
  { case RXS_FULL: puts("Serial Word Received\n"); break;
    case RXS_PARTIAL: puts("Word Being Received\n"); break;
    case RXS_EMPTY: puts("No Bits Received\n"); break;
  }

  getchar();
  return 0;
}
/*---------------------------------------------------------------------------*/
 
