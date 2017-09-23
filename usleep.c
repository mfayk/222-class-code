#include <stdio.h>
#include <curses.h>

const char strC[] = "CLEMSON";
const char strT[] = "TIGERS ";

int main(void)
{ int i;

  initscr();      /* turn on curses */

  nodelay(stdscr, 1);    /* uncomment to turn on blocking */
                 /* by default keyboard input is blocked */
  for (i=0; i<15; i++) 
  { move(LINES/2, COLS/2 - strlen(strC));       /* move center of screen */
    addstr(strC); refresh();
    usleep(200000); /* Delay 200000 useconds = 0.2 sec. */
    move(LINES/2, COLS/2 - strlen(strT));
    addstr(strT); refresh();
    usleep(200000);
  }

  endwin();      /* turn off curses */
}

