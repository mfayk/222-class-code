#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//---------------------------------------------------------------------------

struct ComplexNumber
{ double Re;
  double Im;
};

void ComplexAdd(struct ComplexNumber *z1, struct ComplexNumber *z2)
{ z1->Re = z1->Re + z2->Re;
  z1->Im = z1->Im + z2->Im;
}

double ComplexMag(struct ComplexNumber *z)
{ return pow(z->Re * z->Re + z->Im * z->Im, 0.5);
}

double ComplexAngle(struct ComplexNumber *z)
{ if (z->Re == 0) 
  { if (z->Im < 0) return -90;
    else return 90;
  }
  return atan(z->Im / z->Re) * 180 / M_PI;
}

int main(void)
{     
  struct ComplexNumber *z1, *z2;
  
  z1 = (struct ComplexNumber *)malloc(sizeof(struct ComplexNumber));
  z2 = (struct ComplexNumber *)malloc(sizeof(struct ComplexNumber));
  
  z1->Re = 1;    // one way to reference pointers to structs
  z1->Im = 1;
  printf("Phasor z1 = %lf < %lf degrees\n", ComplexMag(z1), ComplexAngle(z1));
//  *z2.Re = 1;
  (*z2).Re = 1;  // the other way to reference pointers to structs
  (*z2).Im = -2;
  printf("Phasor z2 = %lf < %lf degrees\n", ComplexMag(z2), ComplexAngle(z2));
   
  ComplexAdd(z1, z2);
  printf("Phasor z1 + z2 = %lf < %lf degrees\n", ComplexMag(z1), ComplexAngle(z1));

  free(z1);
  free(z2);
   
  getchar();
}
