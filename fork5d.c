#include <stdio.h>
#include <unistd.h>

int main(void)
{ int pid_ret, j = 10;

  printf("\n%d: Parent, j = %d\n", getpid(), j);
  switch (pid_ret=fork())
  { case 0: // Child 1
      j++;
      printf("\n\t%d: Child 1, j = %d\n", getpid(), j);
      switch(pid_ret = fork())
      { case 0: // Grandchild 1 
          j+=2;
          printf("\n\t\t%d: Grandchild 1, j = %d\n", getpid(), j);
          switch(pid_ret = fork())
          { case 0: // Gr-grandchild 1 
              j--;
              printf("\n\t\t\t%d: Gr-grandchild 1, j = %d\n", getpid(), j);
              break;
            default: // Grandchild 1
              j+=3;
              printf("\n\t\t%d: Grandchild 1 j = %d\n", getpid(), j);
              break;
          }
          break;
          
        default: // Child 1
          j-=2;
          printf("\n\t%d: Child 1, j = %d\n", getpid(), j);
          switch(pid_ret = fork())
          { case 0: // Grandchild 2 
              j++;
              printf("\n\t\t%d: Grandchild 2, j = %d\n", getpid(), j);
              break;
            default: // Child 1
              j-=3;
              printf("\n\t%d: Child 1, j = %d\n", getpid(), j);
              break;
          }
          break;
      }
      break;
    
    default: // Parent
      j--;
      printf("\n%d: Parent, j = %d\n", getpid(), j);
      switch (pid_ret = fork())
      { case 0: // Child 2
          j+=5;
          printf("\n\t%d: Child 2, j = %d\n", getpid(), j);
          switch(pid_ret = fork())
          { case 0: // Grandchild 3 
              j-=3;
              printf("\n\t\t%d: Grandchild 3, j = %d\n", getpid(), j);
              break;
            default: // Child 2
              j+=4;
              printf("\n\t%d: Child 2, j = %d\n", getpid(), j);
              break;
          }
          break;
          
        default: // Parent
          j-=7;
          printf("\n%d: Parent, j = %d\n", getpid(), j);
          switch(pid_ret = fork())
          { case 0: // Child 3 
              j+=4;
              printf("\n\t%d: Child 3, j = %d\n", getpid(), j);
              break;
            default: // Parent
              j-=2;
              printf("\n%d: Parent, j = %d\n", getpid(), j);
              break;
          }
          break;
      }
      break;
  }
  printf("j = %d\n", j);
}

