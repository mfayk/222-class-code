#include <string.h>
#include <stdio.h>

int main(void)
{
   char Cheer[100];
   char *Go = "Go", *Space = " ", *Clemson = "Clemson", *Excl = "!", *NL = "\n";
   char *Beat = "Beat", *The = "The", *Gamecocks = "Gamecocks";

   strcpy(Cheer, Go);
   strcat(Cheer, Space);
   strcat(Cheer, Clemson);
   strcat(Cheer, Excl);
   strcat(Cheer, NL);
   strcat(Cheer, Beat);
   strcat(Cheer, Space);
   strcat(Cheer, The);
   strcat(Cheer, Space);
   strcat(Cheer, Gamecocks);
   strcat(Cheer, Excl);
   printf("%s\n", Cheer);
   
   getchar();
}
