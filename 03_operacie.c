#include <stdio.h>

int main(void) {
    int i, j;

    printf("Zadaj dve cele cisla: ");
    scanf("%i %i", &i, &j);

    printf("%i + %i = %i\n", i, j, i + j);
    printf("%i - %i = %i\n", i, j, i - j);
    printf("%i * %i = %i\n", i, j, i * j);

    if (j != 0) {
        printf("%i div %i = %i\n", i, j, i / j);
        printf("%i mod %i = %i\n", i, j, i % j);
    }

    return 0;
}

