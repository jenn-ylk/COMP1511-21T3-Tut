// a program that uses fgets to take string entered on the terminal, until end of input
// and prints them out twice afterward

// tutorial F11B - 29/10/2021

#include <stdio.h>

#define SIZE 4096

int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}

int main(void) {
    // initialise string
    char word[SIZE];
    // {'h', 'e', 'l', 'l', 'o', '\0'}
    
    // char *word_p = "hi, this was initialised with a pointer";
    
    // printf("secret_function(%s) returned %d\n", word, secret_function(word));
    
    // scan in a string from user
    // note: newlines are scanned in to the string
    while (fgets(word, SIZE, stdin) != NULL) {
        printf("%s", word);
        printf("%s", word);
    }

    return 0;
}
