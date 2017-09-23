#include <stdio.h>

char str[10][10] =
{ "APPLE", "BALL", "CAT", "DOG", "EARTH",
  "FLOWER", "GIRL", "HAT", "ICE", "JET"
};

int main(void)
{  int i;
  
   for (i=0; i<10*10; i++) printf("%d - %c\n", (&str[0][0]+i), *(&str[0][0]+i));
   
   getchar();
   
   printf("%s\n", str);

   printf("%s\n", str[0]);

   printf("%s\n", &str[0][0]);
   
   printf("%s\n", str[3]);
   
   printf("%s\n", &str[4][0]);
   
   printf("%s\n", &str[4][2]);
   
   getchar();
}
