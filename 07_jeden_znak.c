#include <stdio.h>

int main(void) {
    // funkcia precita zo vstupu 1 znak a vráti jeho kód ako číslo typu int  
    int c = getchar();

    // funkcia vypise 1 znak na obrazovku (predchadzajuci a nasledujuci)
    putchar(c - 1);
    putchar('\n');
    putchar(c + 1);
    putchar('\n');

    return 0;
}

