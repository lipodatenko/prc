#include <stdio.h>

int main(void) {
    char z1, z2, z3;

    scanf("%c%c%c", &z1, &z2, &z3);
    printf("znak %c ma ASCII kod %d\n", z1, z1);
    printf("znak %c ma ASCII kod %d\n", z2, z2);
    printf("znak %c ma ASCII kod %d\n", z3, z3);
    printf("\n%c%c%c\n", z3 - 32, z2 - 32, z1 - 32);

    return 0;
}

