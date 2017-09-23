#include <stdio.h>

struct T_Name
{ char *First;  char *Middle;  char *Last;  
};

struct T_FullName
{ char *Title;
  struct T_Name Name; 
  char *Suffix;
};

struct T_Person
{ struct T_FullName *FullName;
  int Age;
  char Sex;
  struct T_Person *BestFriend;
};

typedef struct T_Person *ptrPerson;
  
ptrPerson pPerson[10];

struct T_Person Person[10];
  
/*------------------------------------------------------------------------*/
void Person_Create(ptrPerson *P, const char *T, const char *F, const char *M, const char *L, const char *S )
{
  *P = (ptrPerson)malloc(sizeof(struct T_Person));
  
  printf("ptrPerson = %d\n", *P);

  (*P)->FullName = (struct T_FullName *)malloc(sizeof(struct T_FullName));
  
  (*P)->FullName->Title = (char *)malloc(strlen(T)+1);
  strcpy((*P)->FullName->Title, T);
  
  (*P)->FullName->Name.First = (char *)malloc(strlen(F)+1);
  strcpy((*P)->FullName->Name.First, F);
  
  (*P)->FullName->Name.Middle = (char *)malloc(strlen(M)+1);
  strcpy((*P)->FullName->Name.Middle, M);
  
  (*P)->FullName->Name.Last = (char *)malloc(strlen(L)+1);
  strcpy((*P)->FullName->Name.Last, L);
  
  (*P)->FullName->Suffix = (char *)malloc(strlen(S)+1);
  strcpy((*P)->FullName->Suffix, S);
}

/*---------------------------------------------------------------------------*/

int main(void)
{ int i, j; 
 
  Person_Create(&pPerson[2], "Dr.", "William", "James", "Reid", "III");

/***********************************************************/
    
  (*pPerson[2]).Age = 45;
  pPerson[2]->Age = 45;
  (*(*(pPerson+2))).Age = 45;
  
//  (*pPerson[2])->Age = 45;
//  pPerson[2].Age = 45;
//  *pPerson[2].Age = 45;
//  &pPerson+2.Age = 45;

  printf("%d\n", pPerson[2]->Age);

/***********************************************************/  

  strcpy(pPerson[2]->FullName->Name.Last, "Bill");    // T 1
  strcpy((*pPerson[2]).FullName->Name.Last, "Bill");  // T 2
  strcpy((*(*(pPerson+2))).FullName->Name.Last, "Bill");  // T 3
  
  pPerson[2]->FullName->Name.Last[0] = 'B';           // T 4
  (*pPerson[2]).FullName->Name.Last[0] = 'B';         // T 5

//  strcpy(pPerson[2]->FullName->Name.Last[0], "Bill");    // F 1
//  strcpy((*pPerson[2]).FullName->Name.Last[0], "Bill");   // F 2
//  strcpy(pPerson[2]->FullName.Name.Last, "Bill");  // F 3
//  strcpy(pPerson[2].FullName->Name.Last, "Bill"); // F4
//  strcpy(pPerson[2].FullName->Name->Last, "Bill"); // F 5
//  strcpy(pPerson[2]->FullName->Name->Last, "Bill"); // 6
//  strcpy(pPerson[2]->FullName->Name, "Bill"); // F 7
//  strcpy(pPerson[2].FullName.Name.Last, "Bill"); // F 8
//  strcpy(pPerson[2].FullName.Name->Last, "Bill"); // F 9

  printf("%s\n", pPerson[2]->FullName->Name.Last);

/***********************************************************/ 
  Person[2].FullName = (struct T_FullName *)malloc(sizeof(struct T_FullName));
  Person[2].FullName->Name.Last = malloc(100);

  strcpy(Person[2].FullName->Name.Last, "Bill");    // T 1
  strcpy((*(Person+2)).FullName->Name.Last, "Bill");    // T 2
  Person[2].FullName->Name.Last[0] = 'B';    // T 3
  (*(Person+2)).FullName->Name.Last[0] = 'B';    // T 4
  
//  strcpy(Person[2].FullName.Name.Last, "Bill");    // F 1
//  strcpy(Person[2].FullName.Name->Last, "Bill");    // F 2
//  strcpy(Person[2].FullName->Name->Last, "Bill");    // F 3
//  strcpy(Person[2]->FullName.Name.Last, "Bill");    // F 4
//  strcpy(Person[2]->FullName.Name->Last, "Bill");    // F 5
//  strcpy(Person[2]->FullName->Name.Last, "Bill");    // F 6
//  strcpy(Person[2]->FullName->Name->Last, "Bill");    // F 7

//  strcpy(*(Person+2).FullName->Name.Last, "Bill");    // F 8
//  strcpy((*(Person+2))->FullName->Name.Last, "Bill");    // F 9
  
//  strcpy((*(Person+2)).FullName.Name.Last, "Bill");    // F 10
//  strcpy((*(Person+2)).FullName.Name->Last, "Bill");    // F 11
//  strcpy((*(Person+2)).FullName->Name->Last, "Bill");    // F 12
//  strcpy((*(Person+2)).FullName.Name.Last, "Bill");    // F 13
//  strcpy((*(Person+2)).FullName.Name->Last, "Bill");    // F 14
//  strcpy((*(Person+2)).FullName->Name->Last, "Bill");    // F 15

  printf("%s\n", Person[2].FullName->Name.Last);
  
//  fclose(fout);
  
  getchar();
  return 0;
}
/*---------------------------------------------------------------------------*/
 
