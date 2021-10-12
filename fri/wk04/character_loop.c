// week 4 tutorial code

#include <stdio.h>

int main(void) {

    char letter;
    // create a loop that will continually scan in a character, 
    // until ctrl+D is pressed
    while (scanf("%c", &letter) == 1) {
        if ((letter >= 'a' && letter <= 'z') || 
            (letter >= 'A' && letter <= 'Z')
        ) {
            printf("'%c' scanned in!\n", letter);
        }
    }
    
    return 0;
}

