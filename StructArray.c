#include <stdio.h>
#include <string.h>

//---------------------------------------------------------------------------
enum ACC_Teams
{ ACC_BC, ACC_CLEMSON, ACC_DUKE, ACC_FSU, ACC_GT,
  ACC_MARYLAND, ACC_MIAMI, ACC_UNC, ACC_NC_STATE, ACC_VIRGINIA,
  ACC_VT, ACC_WAKE_FOREST,
  ACC_TEAMS
};

struct School
{ char Name[32];
  char Mascot[32];
  char Location[32];
  char Color[2][32];
  unsigned int Enrollment;
  unsigned int AvgSAT;
};

struct School ACC[ACC_TEAMS] = 
{ {"Boston College", "Eagle", "Bean Town", {"Moroon", "Vatican Gold"}, 107083, 145},
  {"Clemson University", "Tiger", "God's Country", {"Burnt Orange", "Northwest Purple"}, 15962, 1205},
  {"Duke University", "Dookies", "Durrr-ham", {"Mold Blue", "Surrender White"}, 29, 43}
  // etc...
};


int main(void)
{     
  printf("School: %s, Location: %s\n\n", ACC[ACC_CLEMSON].Name, ACC[ACC_CLEMSON].Location);
  printf("Mascot: %s, Colors: %s and %s\n\n", ACC[ACC_CLEMSON].Mascot, ACC[ACC_CLEMSON].Color[0], ACC[ACC_CLEMSON].Color[1]);
  printf("Enrollment: %d, Average SAT: %04d\n", ACC[ACC_CLEMSON].Enrollment, ACC[ACC_CLEMSON].AvgSAT);
 
  getchar();
}
