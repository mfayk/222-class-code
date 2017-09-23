#include <stdio.h>

struct 
{ int a; 
  int b[2];
  struct 
  { int c; 
    int d[3];
    struct 
    { int e;
      int f[4];
    } T[4];
  } U[3]; 
} V[2];


int main(void)
{     
  printf("&V + 1 =           %d\n", (int)(&V + 1) - (int)(&V));

  printf("&V[0] + 1 =        %d\n", (int)(&V[0] + 1) - (int)(&V));

  printf("&V[0].a + 1 =      %d\n", (int)(&V[0].a + 1) - (int)(&V[0].a));

  printf("&V[0].b + 1 =      %d\n", (int)(&V[0].b + 1) - (int)(&V[0].b));

  printf("&V[0].b[1] + 1 =   %d\n", (int)(&V[0].b[1] + 1) - (int)(&V[0].b[1]));
 
  printf("&V[0].U + 1 =      %d\n", (int)(&V[0].U + 1) - (int)(&V[0].U));

  printf("&V[0].U[1] + 1 =   %d\n", (int)(&V[0].U[1] + 1) - (int)(&V[0].U[1]));

  printf("&V[0].U[1].d + 1 = %d\n", (int)(&V[0].U[1].d + 1) - (int)(&V[0].U[1].d));

  printf("&V[0].U[1].d[2] + 1 =  %d\n", (int)(&V[0].U[1].d[2] + 1) - (int)(&V[0].U[1].d[2]));

  printf("&V[0].U[1].T + 1 =  %d\n", (int)(&V[0].U[1].T + 1) - (int)(&V[0].U[1].T));

  printf("&V[0].U[1].T[3] + 1 =  %d\n", (int)(&V[0].U[1].T[3] + 1) - (int)(&V[0].U[1].T[3]));

  printf("&V[0].U[1].T[3].e + 1 =  %d\n", (int)(&V[0].U[1].T[3].e + 1) - (int)(&V[0].U[1].T[3].e));

  printf("&V[0].U[1].T[3].f + 1 =  %d\n", (int)(&V[0].U[1].T[3].f + 1) - (int)(&V[0].U[1].T[3].f));

  printf("&V[0].U[1].T[3].f[3] + 1 =  %d\n", (int)(&V[0].U[1].T[3].f[3] + 1) - (int)(&V[0].U[1].T[3].f[3]));
 
  getchar();
}
