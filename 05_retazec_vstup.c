/*
 *
 * Porovnanie roznych sposobov nacitavania retazca zo vstupu.
 */

#include <stdio.h> 
#include <string.h>     //strlen (funkcia, ktora vracia dlzku retazca)


// Overte postupne vsetky tri uvedene moznosti.
// Skusajte zadavat retazec s medzerami a tiez retazec dlhsi ako velkost pola.
// Sledujte tiez, ako sa na vstupe spracuje znak konca riadku.
int main(void) {


        //char str[30];
/*
        printf("Zadaj retazec: ");
        scanf("%s", str);
        printf("Zadal si: %s\n", str);
*/


        char str[30];

        //puts("Zadaj retazec: ");
        gets(str);
        puts(str);


/*
    char str[30];

    puts("Zadaj retazec: ");
    // stdin je standardny vstupny prud (klavesnica)
    fgets(str, 30, stdin);
    puts(str);
*/
    
    
    printf("velkost pola, do ktoreho ukladame znaky retazca: %d\n", sizeof(str));
    printf("skutocny pocet znakov nacitaneho retazca: %d\n", strlen(str));
    
    return 0;
}

