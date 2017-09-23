#include <stdio.h>
#include <gpm.h>	/* must link with -lgpm */

/* only works in console window - not in any terminal (xterm) */
/* also can run application "mev" in console window */
/* (In other words, CTRL-ALT-F1 to get to console window,
	** CTRL-ALT-F7 to get back to x11 login.) */

int my_gpm_handler(Gpm_Event *event, void *data)
{ 
  printf("Event Type : %d at x=%d y=%d\n", event->type, event->x, event->y);
  return (0);
}

/*****************************************************************/

int main(void)
{
  Gpm_Connect Conn;
  int c;
  int init;

  Conn.eventMask = ~0; 	/* want to know about all the events */
  Conn.defaultMask = 0; /* don't handle anything by default */
  Conn.minMod = 0; 	    /* want everything */
  Conn.maxMod = ~0; 	/* all modifiers included */

  init = Gpm_Open(&Conn, 0);
  printf("init = %d\n", init);
  if (init == -1) 
  { printf("Cannot connect to mouse server\n");
    return -1;
  }
  gpm_handler = my_gpm_handler;
  
  while (1)
  { c = Gpm_Getc(stdin);
    if (c == EOF) break;
    printf("%c", c);
  }

  Gpm_Close();
  return 0;
}


