#include <stdio.h>
#include <stdlib.h>

// globalna premenna
int y = 2;

int main(void) {
    // lokalna premenna
    int x = 1;
    int z = 3;
   
    printf("x je na adrese %p\n", &x);
    printf("y je na adrese %p\n", &y);
    printf("z je na adrese %p\n", &z);
    
    return 0;
}

