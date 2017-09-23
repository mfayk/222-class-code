#include <stdio.h>
#include <curses.h>

int main(void)
{ char c;

  initscr();   /* turn on curses */

  nocbreak();  /* uncomment to turn on line buffering */
               /* by default keyboard input is unbuffered */
  c = getch();	   /* wait for user input */
  
  printf("Input = %c\n", c);
  
  endwin();	   /* turn off curses */
}
