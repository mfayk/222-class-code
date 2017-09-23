#include <stdio.h>

#define DEPTH 5
#define ROWS 4
#define COLS 3

char SAc[DEPTH][ROWS][COLS];
int SAi[DEPTH][ROWS][COLS];
int ***DAc, ***DAi;

int main(void)
{ int d, r, c;

  printf("sizeof(SAc) =          %3d, &SAc =          %u, &SAc + 1 =          %u\n", sizeof(SAc), &SAc, &SAc + 1);
  printf("sizeof(SAc[0]) =       %3d, &SAc[0] =       %u, &SAc[0] + 1 =       %u\n", sizeof(SAc[0]), &SAc[0], &SAc[0] + 1);
  printf("sizeof(SAc[0][0]) =    %3d, &SAc[0][0] =    %u, &SAc[0][0] + 1 =    %u\n", sizeof(SAc[0][0]), &SAc[0][0], &SAc[0][0] + 1);
  printf("sizeof(SAc[0][0][0]) = %3d, &SAc[0][0][0] = %u, &SAc[0][0][0] + 1 = %u\n", sizeof(SAc[0][0][0]), &SAc[0][0][0], &SAc[0][0][0] + 1);
  printf("\n");  
  printf("sizeof(SAi) =          %3d, &SAi =          %u, &SAi + 1 =          %u\n", sizeof(SAi), &SAi, &SAi + 1);
  printf("sizeof(SAi)[0] =       %3d, &SAi[0] =       %u, &SAi[0] + 1 =       %u\n", sizeof(SAi[0]), &SAi[0], &SAi[0] + 1);
  printf("sizeof(SAi)[0][0] =    %3d, &SAi[0][0] =    %u, &SAi[0][0] + 1 =    %u\n", sizeof(SAi[0][0]), &SAi[0][0], &SAi[0][0] + 1);
  printf("sizeof(SAi)[0][0][0] = %3d, &SAi[0][0][0] = %u, &SAi[0][0][0] + 1 = %u\n", sizeof(SAi[0][0][0]), &SAi[0][0][0], &SAi[0][0][0] + 1);

  /**********************************************/
  printf("\n");  
  DAc = (char ***)malloc(DEPTH*sizeof(char**));
  DAi = (int ***)malloc(DEPTH*sizeof(int**));
  
  for (d=0; d<DEPTH; d++) 
  { DAc[d] = (char **)malloc(ROWS*sizeof(char*));
    DAi[d] = (int **)malloc(ROWS*sizeof(int*));
    
    for (r=0; r<ROWS; r++) 
    { DAc[d][r] = (char *)malloc(COLS*sizeof(char));
      DAi[d][r] = (int *)malloc(COLS*sizeof(int));
    }
  }

  printf("sizeof(SAc) =          %3d, &DAc =          %3u, &DAc + 1 =          %u\n", sizeof(DAc), &DAc, &DAc + 1);
  printf("sizeof(SAc)[0] =       %3d, &DAc[0] =       %3u, &DAc[0] + 1 =       %u\n", sizeof(DAc[0]), &DAc[0], &DAc[0] + 1);
  printf("sizeof(SAc)[0][0] =    %3d, &DAc[0][0] =    %3u, &DAc[0][0] + 1 =    %u\n", sizeof(DAc[0][0]), &DAc[0][0], &DAc[0][0] + 1);
  printf("sizeof(SAc)[0][0][0] = %3d, &DAc[0][0][0] = %3u, &DAc[0][0][0] + 1 = %u\n", sizeof(DAc[0][0][0]), &DAc[0][0][0], &DAc[0][0][0] + 1);
  printf("\n");  
  printf("sizeof(SAi) =          %3d, &DAi =          %3u, &DAi + 1 =          %u\n", sizeof(DAi), &DAi, &DAi + 1);
  printf("sizeof(SAi)[0] =       %3d, &DAi[0] =       %3u, &DAi[0] + 1 =       %u\n", sizeof(DAi[0]), &DAi[0], &DAi[0] + 1);
  printf("sizeof(SAi)[0][0] =    %3d, &DAi[0][0] =    %3u, &DAi[0][0] + 1 =    %u\n", sizeof(DAi[0][0]), &DAi[0][0], &DAi[0][0] + 1);
  printf("sizeof(SAi)[0][0][0] = %3d, &DAi[0][0][0] = %3u, &DAi[0][0][0] + 1 = %u\n", sizeof(DAi[0][0][0]), &DAi[0][0][0], &DAi[0][0][0] + 1);

  getchar();
}
