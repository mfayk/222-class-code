#include <stdio.h>
#include <string.h>

/*--------------------------------------------------------------------------*/
struct School
{ char *Name;
  char *Mascot;
  char *Location;
  char *Color[2];
  unsigned int Enrollment;
  unsigned int AvgSAT;
};

const char *strCU = "Clemson University";
const char *strTiger = "Bengal Tiger";
const char *strClemson = "Clemson";
const char *strOrange = "Clemson Orange";
const char *strPurple = "Regalia";

struct School Clemson;

int main(void)
{ int i;
  char *ptrc;
 
  printf("Sizeof(struct School) = %d\n\n", sizeof(struct School));

  Clemson.Name = (char *)malloc(strlen(strCU)+1);
  strcpy(Clemson.Name, strCU);
  
  Clemson.Mascot = (char *)malloc(strlen(strTiger)+1);
  strcpy(Clemson.Mascot, strTiger);
  
  Clemson.Location = (char *)malloc(strlen(strClemson)+1);
  strcpy(Clemson.Location, strClemson);
  
  Clemson.Color[0] = (char *)malloc(strlen(strOrange)+1);
  strcpy(Clemson.Color[0], strOrange);
  
  Clemson.Color[1] = (char *)malloc(strlen(strPurple)+1);
  strcpy(Clemson.Color[1], strPurple);
  
  Clemson.Enrollment = 15962;
  Clemson.AvgSAT = 1205;
  
  printf("School: %s, Location: %s\n\n", Clemson.Name, Clemson.Location);
  printf("Mascot: %s, Colors: %s and %s\n\n", Clemson.Mascot, Clemson.Color[0], Clemson.Color[1]);
  printf("Enrollment: %d, Average SAT: %04d\n", Clemson.Enrollment, Clemson.AvgSAT);

  getchar();
  ptrc = (char *)&Clemson;
  for (i=0; i < sizeof(struct School); i++)
  {  printf("Clemson[%d] = %c\n", i, ptrc[i]);
  }
   
  free(Clemson.Name);
  free(Clemson.Mascot);
  free(Clemson.Location);
  free(Clemson.Color[0]);
  free(Clemson.Color[1]);
 
  getchar();
}
