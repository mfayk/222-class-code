#include <stdio.h>
#include <unistd.h>

#define HELL_AINT_FROZE 1

void DoWhatChildrenDo(void)
{ int i;
  int EatSpinach;

  while (HELL_AINT_FROZE)
  { printf("\tI'll never eat my spinach!\n");
    sleep(1);
  }
  exit (1);
}

void DoWhatParentsDo(int pid)
{ int wait_ret;
  int child_status;
  unsigned char exit_byte, signal_byte, core_bit;

  sleep(rand() % 20);
  printf("Well, I'm not waiting any longer...\n");
  kill(pid, 1);
  wait_ret = wait(&child_status);
  printf("Waited for %d.  Return value = %d\n", pid, wait_ret);
  exit_byte = child_status >> 8;        /* 1111 1111 0000 0000 */
  signal_byte = child_status & 0x7F;    /* 0000 0000 0111 1111 */
  core_bit = child_status & 0x80;              /* 0000 0000 1000 0000 */
  printf("Child's status:  exit=%d  signal=%d  core=%d\n\n", exit_byte, signal_byte, core_bit);

  if (exit_byte) printf("Here's your Ice Cream.\n");
  else printf("Go to bed, you little brat!\n");
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
