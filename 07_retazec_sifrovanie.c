#include <stdio.h>    // puts, gets
#include <ctype.h>    // isdigit, islower
#include <string.h>   // strlen

int main(void) {

    char str[30];
    int i;

    puts("Zadaj retazec: ");
    fgets(str, 30, stdin);

    for (i = 0; i < strlen(str); i++) {
        if (islower(str[i])) str[i] += 3;
        else if (isdigit(str[i]))
            if (str[i] != '9') str[i] += 1; // znaky '0', '1', ..., '9' sú v ASCII tabuľke za sebou
            else str[i] = '0';
    }

    puts("Po zasifrovani: ");
    puts(str);

    return 0;
}

