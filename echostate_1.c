/* Demonstrate getting/setting terminal I/O settings */
/* In this case, we change the echo state.           */

#include <stdio.h>
#include <termios.h>

int main(int argc, char *argv[])
{ struct termios Info;

  if (argc != 2)
  {  printf("Usage:  echostate [y/n]\n");
     exit(1);
  }
  if (tcgetattr(0, &Info) == -1)
  { printf("Unable to get settings for terminal\n");
    exit(1);
  }
  switch (argv[1][0])
  { case 'y':
    case 'Y':
      Info.c_lflag |= ECHO;
      break;
    case 'n':
    case 'N':
      Info.c_lflag &= ~ECHO;
      break;
    default:
      printf("Unrecognized Parameter: %s\n", argv[1]);
  }
  
  if (tcsetattr(0, TCSANOW, &Info) == -1)
  { printf("Unable to set settings for terminal\n");
    exit(1);
  }
  exit (0);
}
