// a piece of code that prints a triangle of given size
// written by F11B, 01/10/21
// example of behaviour below:
/*
Enter number: 5
*----
**---
***--
****-
*****
*/

#include <stdio.h>

int main(void) {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    // initialise counter
    int row = 0;
    // condition
    while (row < size) {
        // inner while loop for columns
        int column = 0;
        while (column < size) {
            // >= if printing on the other side
            if (row >= column) {
                printf("*");
            } else {
                printf("-");
            }
            column = column + 1;
        }
        // move on to the next row
        printf("\n");
        
        // increment
        row = row + 1;
    }

}
