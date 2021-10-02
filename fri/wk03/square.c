// a piece of code that prints a square of given size
// written by F11B, 01/10/21

#include <stdio.h>

int main(void) {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    // initialise counter
    int row = 0;
    // condition
    while (row < size) {
        // inner while loop for column numbers
        // make sure to reset this value to zero
        int column = 0;
        while (column < size) {
            printf("*");
            column = column + 1;
        }
        // move on to the next row
        printf("\n");
        
        // increment
        row = row + 1;
    }

}
