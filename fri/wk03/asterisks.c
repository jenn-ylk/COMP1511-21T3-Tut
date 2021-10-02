// a piece of code that prints a column of asterisks
// written by F11B, 01/10/21

#include <stdio.h>

int main(void) {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    // initialise counter
    int i = 1;
    // condition (runs the code inside if this is true)
    // this is the same as other counting loops, but prints a "*" instead
    while (i <= size) {
        printf("*\n");
        
        // increment
        i = i + 1;
    }

}
