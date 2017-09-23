#include <stdio.h>

char c[10];
char *ptrc;

void InitMem(void)
{ int i;
  for (i=0; i<10; i++) c[i] = 'A' + i;
}

void PrintMem(void)
{ int i, n;

  n = (int)(ptrc-&c[0]);
  printf("ptrc = &c[%d], *ptrc = %c\n", n, *ptrc);
  for (i=0; i<10; i++) printf("%c ", c[i]);
  printf("\n");
  for (i=0; i<2*n; i++) printf(" ");
  
  printf("^\n\n");

}

//---------------------------------------------------------------------------

int main(void)
{     
  InitMem();
  ptrc = (char *)c;
  
  ptrc += 5;
  printf("ptrc += 5;\n");
  PrintMem();

  ptrc -= 2;
  printf("ptrc -= 2;\n");
  PrintMem();

  InitMem();
  *ptrc++;
  printf("*ptrc++;\n");
  PrintMem();

  InitMem();
  (*ptrc)++;
  printf("(*ptrc)++;\n");
  PrintMem();
  
  InitMem();
  ++*ptrc;
  printf("++*ptrc;\n");
  PrintMem();

  InitMem();
  ++(*ptrc);
  printf("++(*ptrc);\n");
  PrintMem();

  InitMem();
  ++(*ptrc--);
  printf("++(*ptrc--);\n");
  PrintMem();

  InitMem();
  --(*ptrc++);
  printf("--(*ptrc++);\n");
  PrintMem();

  InitMem();
  (*ptrc--)++;
  printf("(*ptrc--)++;\n");
  PrintMem();

  InitMem();
  (*ptrc++)--;
  printf("(*ptrc++)--;\n");
  PrintMem();

  InitMem();
  ++*--ptrc;
  printf("++*--ptrc;\n");
  PrintMem();

  InitMem();
  --*++ptrc;
  printf("++*--ptrc;\n");
  PrintMem();

  InitMem();
//  ptrc *= 5;
  printf("ptrc *= 5;\n");
  PrintMem();

  InitMem();
//  ptrc /= 5;
  printf("ptrc /= 5;\n");
  PrintMem();
  
  getchar();
}
