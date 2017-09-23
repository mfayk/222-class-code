#include <stdio.h>

void dsend(int count) 
{ int n;
    
  if (!count) return;
  n = (count + 7) / 8;
  
  switch (count % 8) 
  { case 0: do { puts("case 0");
    case 7:      puts("case 7");
    case 6:      puts("case 6");
    case 5:      puts("case 5");
    case 4:      puts("case 4");
    case 3:      puts("case 3");
    case 2:      puts("case 2");
    case 1:      puts("case 1");
               } while (--n > 0);
  }
  puts("\n");
}

int main(void)
{ int i;  
  for (i=0; i<10; i++)
  { dsend(i);
  }
   
  getchar();
}
