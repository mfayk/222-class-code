/* Demonstrate an ioctl() call, to get the terminal size */

#include <stdio.h>
#include <sys/ioctl.h>

int main(int argc, char *argv[])
{ struct winsize WinBuf;

  if (ioctl(0,TIOCGWINSZ,&WinBuf) != 1)
  { printf("Screen Size:\t%d rows x %d cols\n", WinBuf.ws_row, WinBuf.ws_col);
    printf("\t\t%d pixels wide x %d pixels tall\n", WinBuf.ws_xpixel, WinBuf.ws_ypixel);
  }
}
