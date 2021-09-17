// face.c - prints out a face to the terminal
// written by tute f11b on 17/09/2021

// face0
/*
  ~ ~
  0 0
   o
   -
*/

// face1 (what this code does)
// to compile and run:
// dcc -o face1 face.c
// ./face1
/*
  ~ ~
  0 0
   o
  \_/
*/


#include <stdio.h>

int main(void) {
    printf("~ ~\n"
           "0 0\n"
           " o\n"
           "\\_/\n");
    
    return 0;
}
