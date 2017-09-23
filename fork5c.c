#include <stdio.h>
#include <unistd.h>

int main(void)
{ int pid_ret = 0;

  printf("\nBegin:  I'm the Parent, %d\n", getpid());
  switch (pid_ret=fork())
  { case 0: // Child 1
      printf("\n\tChild 1 id = %d, pid_ret = %d\n", getpid(), pid_ret);
      switch(pid_ret = fork())
      { case 0: // Grandchild 1 
          printf("\n\t\tGrandchild 1 id = %d, pid_ret = %d\n", getpid(), pid_ret);
          switch(pid_ret = fork())
          { case 0: // Gr-grandchild 1 
              printf("\n\t\t\tGr-grandchild 1 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
            default: // Grandchild 1
              printf("\n\t\tGrandchild 1 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
          }
          break;
          
        default: // Child 1
          printf("\n\tChild 1 id = %d, pid_ret = %d\n", getpid(), pid_ret);
          switch(pid_ret = fork())
          { case 0: // Grandchild 2 
              printf("\n\t\tGrandchild 2 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
            default: // Child 1
              printf("\n\tChild 1 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
          }
          break;
      }
      break;
    
    default: // Parent
      printf("\nParent id = %d, pid_ret = %d\n", getpid(), pid_ret);
      switch (pid_ret = fork())
      { case 0: // Child 2
          printf("\n\tChild 2 id = %d, pid_ret = %d\n", getpid(), pid_ret);
          switch(pid_ret = fork())
          { case 0: // Grandchild 3 
              printf("\n\t\tGrandchild 3 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
            default: // Child 2
              printf("\n\tChild 2 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
          }
          break;
          
        default: // Parent
          printf("\nParent id = %d, pid_ret = %d\n", getpid(), pid_ret);
          switch(pid_ret = fork())
          { case 0: // Child 3 
              printf("\n\tChild 3 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
            default: // Parent
              printf("\nParent 1 id = %d, pid_ret = %d\n", getpid(), pid_ret);
              break;
          }
          break;
      }
      break;
  }
}

