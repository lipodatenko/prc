#include <stdio.h>
#include <stdlib.h> // srand, rand, RAND_MAX
#include <time.h>   // time

int main(void) {

    // inicializacia generatora nahodnych cisel
    // srand nastavuje pociatocnu hodnotu pre generator, parameter funkcie je typu unsigned,
    // time vracia casovy udaj, preto je generovana postupnost po kazdom spusteni ina
    srand((unsigned) time(NULL));

    printf("nahodne cislo z intervalu 0.. RAND_MAX: %d\n", rand());
    printf("RAND_MAX = %d\n", RAND_MAX);

    printf("nahodne cislo z intervalu 0..9\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", rand() % 10);
    }

    return 0;
}

