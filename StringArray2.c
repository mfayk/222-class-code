#include <stdio.h>

//---------------------------------------------------------------------------
enum ACC_Teams
{ ACC_BC, ACC_CLEMSON, ACC_DUKE, ACC_FSU, ACC_GT,
  ACC_MARYLAND, ACC_MIAMI, ACC_UNC, ACC_NC_STATE, ACC_VIRGINIA,
  ACC_VT, ACC_WAKE_FOREST,
  ACC_TEAMS
};

char strACCTeam[12][21] = 
{ "Boston College", "Clemson", "Duke", "Florida State", "Georgia Tech",
 "Maryland", "Miami", "North Carolina", "North Carolina State", "Virginia",
 "Virginia Tech", "Wake Forest"
};

char *strACCTeamCompact[] = 
{ "Boston College", "Clemson", "Duke", "Florida State", "Georgia Tech",
 "Maryland", "Miami", "North Carolina", "North Carolina State", "Virginia",
 "Virginia Tech", "Wake Forest"
};

int main(void)
{  int i;
  
   for (i=0; i<ACC_TEAMS; i++) printf("%s\n", strACCTeam[i]);
   printf("\n");
   for (i=0; i<ACC_TEAMS; i++) printf("%s\n", strACCTeamCompact[i]);
   printf("\n");
   
   printf("The greatest team is %s!\n", strACCTeamCompact[ACC_CLEMSON]);
   
   getchar();
   
   for (i=0; i<12*21; i++) printf("%c   %c\n", *(&strACCTeam[0][0]+i),  *(&strACCTeamCompact[0][0]+i));
   
   getchar();
}
