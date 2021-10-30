// simple program for using command line arguments

// tutorial F11B - 29/10/2021

#include <stdio.h>

// argc is the number of command arguments
// - including the program name, and space-separated
// argv is an array of strings
int main(int argc, char *argv[]) {
    printf("argc was: %d\n", argc);
    
    // argv is an array of strings
    // {".\program", "arg", ...}
    int i = 0;
    while (i < argc) {
        printf("%s ", argv[i]);
        i++;
    }
    printf("\n");

    return 0;
}
