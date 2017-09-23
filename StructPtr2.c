#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--------------------------------------------------------------------------*/

struct T_Name
{ char *First;  char *Middle;  char *Last;  
};

struct T_FullName
{ char *Title;
  struct T_Name Name; 
  char *Suffix;
};

struct T_Person
{ struct T_FullName FullName;
  int Age;
  char Sex;
  struct T_Person *BestFriend;
};

typedef struct T_Person *ptrPerson;

/*------------------------------------------------------------------------*/
void Person_Create(ptrPerson *P, const char *T, const char *F, const char *M, const char *L, const char *S )
{
  *P = (ptrPerson)malloc(sizeof(struct T_Person));
  
  printf("ptrPerson = %d\n", *P);
  
  (*P)->FullName.Title = (char *)malloc(strlen(T)+1);
  strcpy((*P)->FullName.Title, T);
  
  (*P)->FullName.Name.First = (char *)malloc(strlen(F)+1);
  strcpy((*P)->FullName.Name.First, F);
  
  (*P)->FullName.Name.Middle = (char *)malloc(strlen(M)+1);
  strcpy((*P)->FullName.Name.Middle, M);
  
  (*P)->FullName.Name.Last = (char *)malloc(strlen(L)+1);
  strcpy((*P)->FullName.Name.Last, L);
  
  (*P)->FullName.Suffix = (char *)malloc(strlen(S)+1);
  strcpy((*P)->FullName.Suffix, S);
}
/*------------------------------------------------------------------------*/
void Person_DontCreate(ptrPerson P, const char *T, const char *F, const char *M, const char *L, const char *S )
{
  P = (ptrPerson)malloc(sizeof(struct T_Person));
  printf("ptrPerson = %d\n", P);
    
  P->FullName.Title = (char *)malloc(strlen(T)+1);
  strcpy(P->FullName.Title, T);
  
  P->FullName.Name.First = (char *)malloc(strlen(F)+1);
  strcpy(P->FullName.Name.First, F);
  
  P->FullName.Name.Middle = (char *)malloc(strlen(M)+1);
  strcpy(P->FullName.Name.Middle, M);
  
  P->FullName.Name.Last = (char *)malloc(strlen(L)+1);
  strcpy(P->FullName.Name.Last, L);
  
  P->FullName.Suffix = (char *)malloc(strlen(S)+1);
  strcpy(P->FullName.Suffix, S);
}

/*------------------------------------------------------------------------*/
void Person_Delete(ptrPerson P)
{ free(P->FullName.Title);
  free(P->FullName.Name.First);  
  free(P->FullName.Name.Middle);
  free(P->FullName.Name.Last);
  free(P->FullName.Suffix);

  free(P);
}
/*-----------------------------------------------------------------------*/
int main(void)
{ ptrPerson Friend[10];
    
//  printf("Sizeof(T_Person) = %d\n", sizeof(T_Person));
  printf("Sizeof(struct T_Person) = %d\n", sizeof(struct T_Person));
  printf("Sizeof(ptrPerson) = %d\n", sizeof(ptrPerson));
  
  Person_Create(&Friend[0], "Dr.", "William", "James", "Reid", "III");
//  Person_DontCreate(Friend[0], "Dr.", "William", "James", "Reid", "III");
  printf("Friend[0] = %d\n", Friend[0]);
  
  (*Friend[0]).Age = 40;
  Friend[0]->Sex = 'M';
  
  printf("Friend[0] = %s\n", Friend[0]->FullName.Name.First);
  
  Person_Create(&Friend[1], "Mrs.", "Ellison", "Rushton", "Reid", "");
  Friend[1]->Age = 37;
  Friend[1]->Sex = 'F';
  
  Friend[0]->BestFriend = Friend[1];

  printf("%s's Best Friend = %s\n", Friend[0]->FullName.Name.First, 
                                 Friend[0]->BestFriend->FullName.Name.First);
  
  Person_Delete(Friend[0]);
  Person_Delete(Friend[1]);
     
  getchar();
}
