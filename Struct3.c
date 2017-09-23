#include <stdio.h>
#include <string.h>

/*--------------------------------------------------------------------------*/
struct tStructure
{ char a,b,c;
  int i;
  char d;
  int j;
} Test =
{ 'A','B','C', 
  0xFFFFFFFF,
  'D',
  0x99999999
};

int main(void)
{ int i;
  char *ptrc;
 
  printf("Sizeof(struct School) = %d\n\n", sizeof(struct tStructure));

  ptrc = (char *)&Test;
  for (i=0; i < sizeof(struct tStructure); i++)
  {  printf("Test[%d] = %c = 0x%02X\n", i, ptrc[i], (unsigned char)ptrc[i]);
  }
    
  getchar();
}
