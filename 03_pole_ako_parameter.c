#include <stdio.h>

void show_msg(char msg[]) {
    printf("%s\n\n", msg);
    printf("sizeof(msg) == %d\n", sizeof(msg));
}


int main(void) {
    char quote[] = "Only two things are infinite, the universe and human stupidity, and I'm not sure about the former";
    
    show_msg(quote);
    
    printf("sizeof(quote) == %d\n\n", sizeof(quote));
       
    return 0;
}

