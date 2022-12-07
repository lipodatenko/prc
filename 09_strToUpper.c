#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // toupper


void strToUpper(char *s) {
    while (*s) {
      *s = toupper(*s);    
      s++;
    }
}

int main(void) {
    // vytvorme teraz retazec (pole znakov) dynamicky
    char *s = (char*) malloc(100);
    
    strcpy(s, "abcdefgh 123");
    puts(s);
    strToUpper(s);
    printf("\n\npo uprave:\n%s\n", s);

    // retazec (pole znakov) z pamate uvolnime
    free(s);
    return 0;
}

