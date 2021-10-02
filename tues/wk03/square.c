// a piece of code that prints a triangle of a given size using while loops
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
        // print a line of asterisks
        while (j < size) {
            printf("*");
            j = j + 1;
        }
        // print a new line
        printf("\n");
        
        i = i + 1;
    }

    return 0;
}
