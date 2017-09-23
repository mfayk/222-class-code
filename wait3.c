#include <stdio.h>
#include <unistd.h>

int i;

void DoBadChild(void)
{ for (i=0; i<5; i++)
  { printf("\tNo Daddy...\n");
    sleep(2);
  }
}

void DoGoodChild(void)
{ for (i=0; i<5; i++)
  { printf("\t\tYes Daddy...\n");
    sleep(3);
  }
}

void DoDumbChild(void)
{ for (i=0; i<5; i++)
  { printf("\t\t\tHuh Daddy?...\n");
    sleep(1);
  }
}

int main(void)
{ int wait_ret;

  if (fork() != 0) 
  { if (fork() != 0) 
    { if (fork() != 0)
      { wait_ret = wait(NULL);
        printf("Waited for %d to finish.\n", wait_ret);

        wait_ret = wait(NULL);
        printf("Waited for %d to finish.\n", wait_ret);

        wait_ret = wait(NULL);
        printf("Waited for %d to finish.\n", wait_ret);
      }
      else DoDumbChild();
    }
    else DoGoodChild();
    
    

  }
  else DoBadChild();
}
