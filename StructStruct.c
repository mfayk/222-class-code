#include <stdio.h>
#include <string.h>

//---------------------------------------------------------------------------

struct Point
{ float x, y, z;
};

struct Triangle
{ struct Point P1, P2, P3;
};

struct Triangle T1, T2;

int main(void)
{ //struct Triangle T1,T2;
  char *ptr1, *ptr2; int i;
  
  T1.P1.x = 1.4;
  T1.P1.y = 3.1;
  T1.P1.z = -4;

  printf("P1 = %d\n", T1.P1);
  printf("P2 = %d\n", T1.P2);
  T1.P2 = T1.P1;
  printf("P2 = %d\n", T1.P2);
  
  getchar();

  printf("sizeof(stuct Point) = %d\n", sizeof(struct Point));
  memcpy(&T1.P2, &T1.P1, sizeof(struct Point));
  T1.P2.x = 2.4;

  memcpy(&T1.P3, &T1.P2, sizeof(struct Point));
  T1.P3.z = 5;

  printf("T1.P1 = %f, %f, %f\n", T1.P1.x, T1.P1.y, T1.P1.z);
  printf("T1.P2 = %f, %f, %f\n", T1.P2.x, T1.P2.y, T1.P2.z);
  printf("T1.P3 = %f, %f, %f\n", T1.P3.x, T1.P3.y, T1.P3.z);
  
  getchar();
  
  printf("sizeof(struct Triangle) = %d\n", sizeof(struct Triangle));

//  memcpy(&T2, &T1, sizeof(Triangle));
//  memcpy(&T2, &T1, sizeof(struct Triangle));
//  memcpy(T2, T1, sizeof(struct Triangle));
//  memcpy(&T2, &T1, sizeof(struct Point));
  memcpy(&T2, &T1, 4);

/*  T2 = T1;  printf("T1 = %d, T2 = %d\n", T1, T2);
  printf("&T1 = %d, &T2 = %d\n", &T1, &T2);
*/  
  ptr1 = (char *)&T1; ptr2 = (char *)&T2;
  for (i=0; i<sizeof(struct Triangle); i++)
  {  printf("T1[%d] = 0x%X  T2[%d] = 0x%X\n", i, *ptr1++, i, *ptr2++);
  }
  printf("\n");
  printf("T2.P1 = %f, %f, %f\n", T2.P1.x, T2.P1.y, T2.P1.z);
  printf("T2.P2 = %f, %f, %f\n", T2.P2.x, T2.P2.y, T2.P2.z);
  printf("T2.P3 = %f, %f, %f\n", T2.P3.x, T2.P3.y, T2.P3.z);
  
  getchar();
}
