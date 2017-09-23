#include <stdio.h>

int main(void)
{   
  printf("\\a - \a");
  getchar();
 
  printf("\\b - Go Tigers!\b\b\b\bgers");
  getchar();

  printf("\\n - \n\n");
  getchar();

  printf("\\f - Go\fTigers!");
  getchar();

  printf("\\r - \nGo\rTigers!\n");
  getchar();

  printf("\\t - Where\tthe\tBlue\tRidge\tYawns\tIts\tGreatness\n");
  getchar();
  
  printf("\\v - Where\vthe\vBlue\vRidge\vYawns\vIts\vGreatness\n");
  getchar();

  printf("\\\' - Print the character \'a\'\n");
  getchar();
  
  printf("\\\" - Print the string \"String\"\n");
  getchar();
  
  printf("\\\\ - Print the directory C:\Windows\System\bill.txt\n");
  printf("\\\\ - Print the directory C:\\Windows\\System\\bill.txt\n");
  getchar();

  printf("\\ooo - Print ASCII 6 \6\n");
  printf("\\ooo - Print ASCII 65 \65\n");
  printf("\\ooo - Print ASCII 065 \065\n");
  printf("\\ooo - Print ASCII 0650 \0650\n");
  printf("\\ooo - Print ASCII 9 \9\n");
  printf("\\ooo - Print ASCII 59 \59\n");

  printf("\\xhh - Print ASCII [0x9]: [\x9]\n");
  printf("\\xhh - Print ASCII [0x43]: [\x43]\n");
  printf("\\xhh - Print ASCII [0x043]: [\x043]\n");
  printf("\\xhh - Print ASCII [0x0432]: [\x432]\n");
  printf("\\xhh - Print ASCII [0x4G]: [\x4G]\n");
  printf("\\xhh - Print ASCII [0x041]: [\x041]\n");
  printf("\\xhh - Print ASCII [0x141]: [\x141]\n");
  printf("\\xhh - Print ASCII [0x241]: [\x241]\n");
  printf("\\xhh - Print ASCII [0x2345]: [\x2345]\n");
  getchar();
  
  printf("\W\j\R\&\n");
  getchar();
}

