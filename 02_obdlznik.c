#include <stdio.h>

int main(void) {
    float a, b, o, S;

    printf("Zadaj dlzku strany a: ");
    scanf("%f", &a);
    printf("Zadaj dlzku strany b: ");
    scanf("%f", &b);

    o = 2 * (a + b);
    S = a*b;

    printf("o = %f\n", o);
    printf("S = %f\n", S);

    return 0;
}

