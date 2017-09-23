/* Demonstrate stat() function call, and decoding permission
   bits on file permissions. 
*/

#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  struct stat f_stat;	/* returned info about file */
  int i,n;

  if (argc != 2)
  { printf("Usage:  filestat filename\nPress any key to continue");
    getchar();
    exit(1);
  }

  if (stat(argv[1], &f_stat) == -1)
  { printf("Unable to stat %s\nPress any key to continue...", argv[1]);
    getchar();
    exit(1);
  }

  printf("mode:    %o\n", f_stat.st_mode);
  printf("links:   %d\n", f_stat.st_nlink);
  printf("user:    %d\n", f_stat.st_uid);
  printf("group:   %d\n", f_stat.st_gid);
  printf("size:    %d\n", f_stat.st_size);
  printf("modtime: %d\n", f_stat.st_mtime);

  printf("mode (base 10): %d\n", f_stat.st_mode);
  printf("mode (binary):  ");
  for (i=8; i>=0; i--)
  { n = 1 << i;
    printf("%d", (f_stat.st_mode & n) >> i);
    switch (i)
    { case 6:  case 3:
        printf(" ");
    }
  }
  printf("\n");
  
  getchar();
}

