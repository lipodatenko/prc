#include <stdio.h>

int main(void) {
    int i;
    long j;
    short k;
    float x;
    double y;
    long double z;

    printf("Zadaj tri cele a tri desatinne cisla:\n");

    scanf("%d", &i);
    scanf("%ld", &j);
    scanf("%hd", &k);
    scanf("%f", &x);
    scanf("%lf", &y);
    scanf("%Lf", &z);

    // da sa aj naraz:
    // scanf("%d %ld %hd %f %lf %Lf", &i, &j, &k, &x, &y, &z);

    printf("%d %ld %hd %f %f %f\n\n\n", i, j, k, x, y, z);



    // vo formate vstupu sa da specifikovat viac poziadaviek, napr:
    int a, b;

    printf("Zadaj desatinne cislo: ");
    scanf("%d.%d", &a, &b);
    printf("cela cast == %d\n", a);
    printf("desatinna cast == %d\n\n\n", b);



    printf("Zadaj este jedno cele cislo, napr. 12345: ");
    scanf("%3d%d", &a, &b);
    printf("a == %d, b == %d\n", a, b);

    return 0;
}
