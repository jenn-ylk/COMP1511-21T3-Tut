// a piece of code that prints a square
// written by T17A, 28/09/21

#include <stdio.h>

int main(void) {

    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int i = 0;
    
    while (i < size) {
        // reset inner counter
        int j = 0;
        // print a line of asterisks/dashes
        while (j < size) {
            // print a triangle
            // when i <= j, the coordinate is to the left of the diagonal
            // from top-left to bottom-right
            if (i >= j) {
                printf("*");
            } else {
                printf("-");
            }
            // increment the inner counter (column numbers)
            j = j + 1;
        }
        // print a new line
        printf("\n");
        
        i = i + 1;
    }

    return 0;
}
