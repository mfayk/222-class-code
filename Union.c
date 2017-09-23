#include <stdio.h>
  
union Union
{ unsigned int Full;
  unsigned short int Half[2];
  unsigned char Byte[4];
};

/*--------------------------------------------------------------------------*/
int main(void)
{ union Union A;

  A.Full = 0x1234ABCD;

  printf("A = %08X\n", A.Full);

  printf("A = %02X %02X %02X %02X\n", A.Byte[0], A.Byte[1], A.Byte[2], A.Byte[3]);

  printf("A = %04X %04X\n", A.Half[0], A.Half[1]);

  getchar();
  return 0;
}
/*--------------------------------------------------------------------------*/
