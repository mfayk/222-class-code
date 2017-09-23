#include <string.h>
#include <stdio.h>

int main(void)
{  char str1[] = "USC is in Columbia. USC's coach is Spurrier. USC is in the SEC.";
   char str2[100];
   char str3[] = "USC";
   char str4[] = "[Chickens!]";
   int i, j;

   printf("The Original String is: \"%s\"\n", str1);
   
   i = j = 0;
   while (str1[i] != '\0') // Do 'til end of string   
   { 
     if (strncmp(&str1[i], str3, strlen(str3)) == 0)
     {  strcpy(&str2[j], str3);
        j += strlen(str3);
        i += strlen(str3);
        strcpy(&str2[j], str4);
        j += strlen(str4);
     } 
     else str2[j++] = str1[i++];
   }
   str2[j] = '\0';
   
   printf("The New String is: \"%s\"\n", str2);

   getchar();
}
