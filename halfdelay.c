#include <stdio.h>
#include <curses.h>

int main(void)
{ int i;
  char c;

  initscr();      /* turn on curses */

  halfdelay(5);      /* block for half a second */
                 /* by default keyboard input is blocked */
  for (i=0; i<5; i++)
  { printf("input > "); refresh();
    c = getch(); /* wait for user input */
    if (c)
    { printf("\r\n"); refresh();
    }
  }

  endwin();      /* turn off curses */
}
