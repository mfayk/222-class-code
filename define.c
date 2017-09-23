#include <stdio.h>

#define BIT_0   0x01
#define BIT_1   0x02
#define BIT_2   0x04
#define BIT_3   0x08
#define BIT_4   0x10
#define BIT_5   0x20
#define BIT_6   0x40
#define BIT_7   0x80

#define SetBit(x, y) x |= (0x01 << y)
#define ClrBit(x, y) x &= ~(0x01 << y)
#define TglBit(x, y) x ^= (0x01 << y)
#define TstBit(x, y) (x & (0x01 <<y))

int main(void)
{ unsigned char a = 0x5A;
  
  printf("a = 0x%02X\n", a);
  
  SetBit(a, 0);
  printf("a = 0x%02X\n", a);
 
  ClrBit(a, 1);
  printf("a = 0x%02X\n", a);

  TglBit(a, 2);
  printf("a = 0x%02X\n", a);

  if (TstBit(a, 4)) printf("Bit 4 of a is true.\n", a);
  else printf("Bit 4 of a is false.\n", a);
 
  getchar();
}
