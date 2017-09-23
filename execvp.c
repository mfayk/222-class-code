#include <stdio.h>
#include <unistd.h>

int main(void)
{ char program[256];
  char *arg[3];
  int  i;

  strcpy(program, "ls");
  arg[0] = "ls";	/* change to lsss -- what happens? */
  arg[1] = "-l";	/* change to -w  -- what happens? */
  arg[2] = 0;
  printf("About to call 'execvp' with args %s %s %s...\n\n", program, arg[0], arg[1]);
  i = execvp(program, arg);
  printf("Finished calling %s, returned %d\n", program, i);
}
