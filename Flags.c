#include <stdio.h>

int main(void)
{ const int i = 365, j = -365;
  
  printf("-  :%10d\n    %-10d\n\n", i, i);

  printf("+  :%10d\n    %+10d\n\n", i, i);

  printf("0  :%10d\n    %010d\n\n", i, i);

  printf("' ': %d\n    % d\n\n", i, j);

  printf("#  :%#o    %#x    %#X\n\n", i, i, i);
  
  getchar();
}
