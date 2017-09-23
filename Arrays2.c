#include <stdio.h>

/*****************/

//int i[][] = {{1,2,3},{4,5,6},{7,8,9},{0xA,0xB,0xC}};

//int j[3][] = {{1,2,3},{4,5,6},{7,8,9},{0xA,0xB,0xC}};

int k[][3] = {{1,2,3},{4,5,6},{7,8,9},{0xA,0xB,0xC}};

/*****************/

void f1(int a[][])
{ int i, j;
  
  for (i=0; i<4; i++)  
  { for (j=0; j<3; j++)
    { 
//      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }
}

/*****************/

void f2(int a[][])
{ int i, j;
  
  for (i=0; i<4; i++)  
  { for (j=0; j<3; j++)
    { 
//        printf("a[%d][%d] = %d\n", i, j, *(*(a + i)+j));
    }
  }
}

/*****************/

void f3(int a[][])
{ int i, j;
  
  for (i=0; i<4; i++)  
  { for (j=0; j<3; j++)
    { 
        printf("a[%d][%d] = %d\n", i, j, *((int *)a + i*3 + j));
    }
  }
}

/*****************/

int main(void)
{ int i, j; 
  
  for (i=0; i<3; i++)  
  { for (j=0; j<3; j++)
    { printf("k[%d][%d] = %d\n", i, j, k[i][j]);
    }
  }
  
  f3(k);
  
  getchar();
   
}
