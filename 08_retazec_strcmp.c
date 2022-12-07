/*
 * Ukazka porovnavania dvoch retazcov.
 */

#include <stdio.h>   // printf, fgets, puts
#include <string.h>  // strcmp

int main(void) {

    char str1[50]; // prvy retazec (pole znakov)
    char str2[50]; // druhy retazec
 
    int h;

    puts("Zadaj prvy retazec:");
    fgets(str1, 50, stdin);
    puts("Zadaj druhy retazec:");
    fgets(str2, 50, stdin);

/*
    // zbavime sa znaku konca riadka
    str1[strlen(str1)-1]='\0';
    str2[strlen(str2)-1]='\0';  
*/
    
    printf("\nfunkcia strcmp() vratila hodnotu %d\n", h = strcmp(str1, str2));

    printf("%s %c %s\n", str1, h <= 0 ? ((h == 0) ? '=' : '<') : '>', str2);

    return 0;
}

