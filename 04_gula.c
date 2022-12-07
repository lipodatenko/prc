#include <stdio.h>

#define PI 3.1415

int main(void) {
    float r, S, V;

    printf("Pocitam objem a povrch gule!\n");
    printf("r = ");
    scanf("%f", &r);

    V = (4 * PI * r * r * r) / 3;
    S = 4 * PI * r*r;

    printf("Objem gule s polomerom %6.2f je %6.2f\n", r, V);
    printf("Povrch gule s polomerom %6.2f je %6.2f\n", r, S);

    return 0;
}

