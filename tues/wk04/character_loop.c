// week 4 tutorial code
// continually scans in characters, input by the user, 
// and prints it if it's a letter in the alphabet
// written by tutorial T17A, 05/10/21


#include <stdio.h>

int is_letter(char c);

int main(void) {

    char c;
    // scan until the user enters the end of file (ctrl + D)
    // while condition takes in the return value of scanf, and checks it
    while (scanf("%c", &c) == 1) {
        if (is_letter(c)) {
            printf("'%c' scanned in!\n", c);
        }
    }

    return 0;
}

// checks if a character is in the alphabet
// the result returns 1 for true, 0 for false
int is_letter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
