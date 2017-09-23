#include <curses.h>

int main(void)
{ int i;

  initscr();  // Initialize Curses System

  clear();    // Clear the Screen
  
  for (i=0; i<LINES-2; i+=2)
  { move(i,i);// Move Cursor to Location
    addstr("Clemson"); // Display some Text
    move(i+1, i+1);
    addstr("Tigers");
  }
  
  move(LINES-1, 0);  // Move Cursor to Lower Left            

  refresh();   // Update Display
  getch();     // Get input
  endwin();    // Quit System
}

