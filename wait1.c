#include <stdio.h>
#include <unistd.h>

#define TIRED 5

void DoWhatChildrenDo(void)
{ int i;

  for (i=0; i<TIRED; i++)
  { printf("\tI won't eat my spinach!!!\n");
    sleep(1);
  }
  printf("\tO.k.  I'll eat my spinach...\n");
  exit(2);
}

void DoWhatParentsDo(int pid)
{ int wait_ret;

  sleep(1);
  wait_ret = wait(NULL);
  printf("Waited for %d.  Return value = %d\n", pid, wait_ret);
  printf("Here's your Ice Cream.\n");
}

int main(void)
{ int pid;

  switch (pid = fork()) 
  { case 0: // Child
      DoWhatChildrenDo();
      break;

    default:
      DoWhatParentsDo(pid);
      break;
  }
}
