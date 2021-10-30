// simple program for using command line arguments

tutorial T17A - 26/10/2021

#include <stdio.h>

// argc = number of arguments (including the program name!!)
// argv = an array of strings (space separated), 
// of everything entered on the command line
int main(int argc, char *argv[]) {
    printf("There were %d command line arguments\n", argc);
    
    int i = 0;
    while ( i < argc) {
        printf("%s ", argv[i]);
        
        i++;
    }
    printf("\n");

    return 0;
}
