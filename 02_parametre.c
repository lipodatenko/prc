#include <stdio.h>

#include <stdio.h>

void vymena(int a, int b) 
{
    int pom = a;
    a = b;
    b = pom;
}

int main(void) 
{
  int x = 10;
  int y = 20;

  vymena(x, y);

  printf("Po vymene: x = %d,  y = %d\n", x, y);
  
  return 0;
}

// spravne riesenie
/* 
void vymena(int *a, int *b) 
{
    int pom = *a;
    *a = *b;
    b = *pom;
}

int main(void) 
{
  int x = 10;
  int y = 20;

  vymena(&x, &y);

  printf("Po vymene: x = %d,  y = %d\n", x, y);
  
  return 0;
}

*/
