// a peice of code that initialises a 7 by 7 2D array, and then prints it
// as opposed to just using a 2D loop to print the numbers
// class F11B, 15/10/21

#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;

    int array[SIZE][SIZE] = {0};

    // initialise the array
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            array[row][column] = row + column;
            column = column + 1;
        }
        row = row + 1;
    }
    
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%02d ", array[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
