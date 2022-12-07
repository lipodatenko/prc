#include <stdio.h>

int main(void) {
  int x = 45;
  //vyskusaj zmenit na int x = -45;

  double y = 123.56789;
  //vyskusaj zmenit na double y = -123.56789;

  // ukážka formátovania pre celé čísla
  printf("%12d\n", x);
  printf("%012d\n", x);
  printf("% 012d\n", x);
  printf("%+12d\n", x);
  printf("%+012d\n", x);
  printf("%-12d\n", x);
  printf("%- 12d\n", x);
  printf("%-+12d\n", x);
  printf("%12.4d\n", x);
  printf("%-12.4d\n\n\n", x);

  // ukážka formátovania pre reálne čísla
  printf("%f\n", y);
  printf("%e\n", y);
  printf("%.3e\n", y);
  printf("%15.3f\n", y);
  printf("%+15.3f\n", y);
  printf("%015.3f\n", y);
  printf("%+015.3f\n", y);
  printf("% 015.3f\n\n\n", y);

  // ukážka formátovania pre reťazec
  printf("%s\n", "ahoj cau");
  printf("%.4s\n", "ahoj cau");
  printf("%10s\n", "ahoj cau");
  printf("%10.4s\n", "ahoj cau");
 
  return 0;
}

