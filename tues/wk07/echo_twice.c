// a program that uses fgets to scan in strings, until end of input
// and prints out that string twice

// tutorial T17A - 26/10/2021

#include <stdio.h>

#define SIZE 4096

int main() {
    // initialise string
    char word[SIZE] = {0};
    
    // note: newlines are scanned in to the string
    while (fgets(word, SIZE, stdin) != NULL) {
        printf("%s", word);
        printf("%s", word);
    }
    

    return 0;
}
