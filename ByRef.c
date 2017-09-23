#include <stdio.h>

//---------------------------------------------------------------------------

void ChangeA(int *a)
{
  (*a)++;
  printf("a = %d, *a = %d\n\n", a, *a); 
}

void ChangeB(int b)
{
  b++;
  printf("b = %d\n\n", b);
}

//---------------------------------------------------------------------------

int main(void)
{ int a = 10, b = 20;

  printf("a = %d\n\n", a); 
  printf("b = %d\n\n", b);

  ChangeA(&a);
  ChangeB(b);
  
  printf("a = %d\n\n", a); 
  printf("b = %d\n\n", b);

  getchar();
}
