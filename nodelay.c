#include <stdio.h>
#include <curses.h>

int main(void)
{ int i;
  char c;

  initscr();      /* turn on curses */

  nodelay(stdscr, 1);    /* uncomment to turn on blocking */
                 /* by default keyboard input is blocked */
  for (i=0; i<5; i++)
  { printf("input > "); refresh();
    c = getch(); /* wait for user input */
    if (c)
   { printf("\n"); refresh();
   }
    sleep(1);
  }

  endwin();      /* turn off curses */
}
