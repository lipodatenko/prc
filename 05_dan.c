#include <stdio.h>

int main(void) {
    double suma;

    printf("Zadaj povodnu sumu: ");
    scanf("%lf", &suma);

    printf("Suma po pripocitani dane 19%%: %5.2f EUR\n", suma * 1.19);

    return 0;
}
