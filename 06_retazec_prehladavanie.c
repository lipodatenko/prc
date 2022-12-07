#include <stdio.h>   // printf, scanf
#include <string.h>  // strlen

#define DLZKA 25    // retazec bude mat najviac 25 znakov

int main(void) {

    char ret[DLZKA + 1];
    int i, je;

    printf("Zadaj retazec: ");
    scanf("%s", ret);

    je = 1;

    for (i = 0; i < strlen(ret) / 2; i++)
        if (ret[i] != ret[strlen(ret) - i - 1]) {
            je = 0;
            break;
        }

    if (je) printf("%s je palindrom\n", ret);
    else printf("%s nie je palindrom\n", ret);

    return 0;
}
