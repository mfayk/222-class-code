#include <string.h>
#include <stdio.h>

int main(void)
{  
  printf("strspn(\"1234567890\",\"123ABC\") = %d\n\n", strspn("1234567890", "123ABC"));
  printf("strspn(\"123ABC\",\"1234567890\") = %d\n\n", strspn("123ABC","1234567890"));
  printf("strspn(\"1234567890\",\"ABC123\") = %d\n\n", strspn("1234567890", "ABC123"));
  printf("strspn(\"ABC123\",\"1234567890\") = %d\n\n", strspn("ABC123","1234567890"));
  getchar();

  printf("strspn(\"CLEMSON\",\"ABCDEFGHIJKL\") = %d\n\n", strspn("CLEMSON","ABCDEFGHIJKL"));
  printf("strspn(\"CLEMSON\",\"JKLMNOP\") = %d\n\n", strspn("CLEMSON","JKLMNOP"));
  getchar();

  printf("strspn(\"HHHHTHHHTHTTHTTHTHHTTT\",\"H\") = %d\n\n", strspn("HHHHTHHHTHTTHTTHTHHTTT","H"));
  printf("strspn(\"11243211213674822319\",\"1234\") = %d\n\n", strspn("11243211213674822319","1234"));
  getchar();
}
