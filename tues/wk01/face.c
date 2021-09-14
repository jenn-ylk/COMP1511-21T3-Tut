// Prints out a face onto the terminal (as below)
// written 14/09/2021
// by t17a tutorial

// compile this code with: dcc -o face0 face.c
// run with: ./face0
// face0:
/*
  ~ ~
  0 0
   o
   -
*/

// compile this code with: dcc -o face1 face.c
// run with: ./face1
// face1:
/*
  ~ ~
  0 0
   o
  \_/
*/

#include <stdio.h>

int main (void) {

    // print the face (face1):
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf("\\_/\n");
    // note: the "\\" will print a "\" on the terminal
    // (this is an escape sequence)

    return 0;
}


