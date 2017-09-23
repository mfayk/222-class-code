#include <stdio.h>
#include <curses.h>

int main(void)
{ int i;
  char c;

  initscr();   /* turn on curses */

  noecho();    /* uncomment to turn on echoing */
               /* by default keyboard input is echoed */
  for (i=0; i<5; i++)
  { c = getch();	   /* wait for user input */
  }
  printf("Input = %c\n", c);

  for (i=0; i<5; i++)
  { c = getch();	   /* wait for user input */
  }
  printf("Input = %c\n", c);
  
  endwin();	   /* turn off curses */
}
