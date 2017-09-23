#include <stdio.h>
#include <string.h>

/*--------------------------------------------------------------------------*/
struct School
{ char Name[32];
  char Mascot[32];
  char Location[32];
  char Color[2][32];
  unsigned int Enrollment;
  unsigned int PublicRank;
};

struct School Clemson;

int main(void)
{ int i; 
  char *ptrc;
  
  printf("Sizeof(struct School) = %d\n\n", sizeof(struct School));
  printf("Sizeof(struct School) = %d\n\n", sizeof(Clemson));
    
  strcpy(Clemson.Name, "Clemson University");
  strcpy(Clemson.Mascot, "Bengal Tiger");
  strcpy(Clemson.Location, "Clemson");
  strcpy(Clemson.Color[0], "Clemson Orange");
  strcpy(Clemson.Color[1], "Regalia");
  Clemson.Enrollment = 16931;
  Clemson.PublicRank = 23;
  
  printf("School: %s, Location: %s\n\n", Clemson.Name, Clemson.Location);
  printf("Mascot: %s, Colors: %s and %s\n\n", Clemson.Mascot, Clemson.Color[0], Clemson.Color[1]);
  printf("Enrollment: %d, Public Rank: %d\n", Clemson.Enrollment, Clemson.PublicRank);
  getchar();
  
  ptrc = (char *)&Clemson;
  for (i=0; i < sizeof(struct School); i++)
  {  printf("Clemson[%d] = %c\n", i, ptrc[i]);
  }
 
  getchar();
}
