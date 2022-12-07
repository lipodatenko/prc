#include <stdio.h>

#define MAXPP 100

int main(void) {
    int a[MAXPP], n, i;

    printf("pocet prvkov pola n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%2d. prvok = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\npovodne pole:\n");

    for (i = 0; i < n; i++) printf("%d ", a[i]);

    for (i = 0; i < n / 2; i++) {
        int pom = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = pom;
    }

    printf("\nupravene pole:\n");

    for (i = 0; i < n; i++) printf("%d ", a[i]);
    
    printf("\n");
    
    return 0;
}

