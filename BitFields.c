#include <stdio.h>

#define ON  1
#define OFF 0
  
struct Motors
{ unsigned Motor0 : 1;
  unsigned Motor1 : 1;
  unsigned Motor2 : 1;
  unsigned Motor3 : 1;
  unsigned Motor4 : 1;
  unsigned Motor5 : 1;
  unsigned Motor6 : 1;
  unsigned Motor7 : 1;
};

struct Nibbles
{ unsigned Nibble0 : 4;
  unsigned Nibble1 : 4;
};

struct Dummy
{ unsigned Bits0 : 31;
  unsigned Bits1 : 3;
};
  
/*---------------------------------------------------------------------------*/

int main(void)
{ struct Motors MotorMask;
  struct Nibbles NibbleMask;
  struct Dummy DummyMask;
  
  printf("Sizeof(MotorMask) = %d\n", sizeof(MotorMask));
  printf("Sizeof(MotorMask) = %d\n", sizeof(NibbleMask));
  printf("Sizeof(MotorMask) = %d\n\n", sizeof(DummyMask));

  printf("Motor Mask = %02X\n", MotorMask);

  memset(&MotorMask, 0, 1);
  printf("Motor Mask = %02X\n", MotorMask);

  MotorMask.Motor0 = ON;
  MotorMask.Motor1 = ON;
  MotorMask.Motor7 = ON;
  printf("Motor Mask = %02X\n", MotorMask);
  
  *((char*)&MotorMask) = 0x5A;
  printf("Motor Mask = %02X\n", MotorMask);
  
  MotorMask.Motor0 = 0xFF;  /* Write too many bits */
  printf("Motor Mask = %02X\n", MotorMask);

// MotorMask = 0xFF;

  printf("\n");
  NibbleMask.Nibble0 = 0x1;
  NibbleMask.Nibble1 = 0x2;
  printf("Nibble Mask = %02X = %X %X\n", NibbleMask, NibbleMask.Nibble0, NibbleMask.Nibble1);

  *((char*)&NibbleMask) = 0x98;
  printf("Nibble Mask = %02X = %X %X\n", NibbleMask, NibbleMask.Nibble0, NibbleMask.Nibble1);

  NibbleMask.Nibble0 = 0xFFFF; /* Write too many bits */
  printf("Nibble Mask = %02X = %X %X\n", NibbleMask, NibbleMask.Nibble0, NibbleMask.Nibble1);

  getchar();
  return 0;
}
/*---------------------------------------------------------------------------*/
 
