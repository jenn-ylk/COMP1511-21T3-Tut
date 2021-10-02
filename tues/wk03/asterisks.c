// a piece of code that prints a column of asterisks, using a while loop
// written by T17A, 28/09/21

#include <stdio.h>

int main(void) {

    // take in the number of asterisks
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int i = 0;
    
    // this is the same as the counting loops from earlier,
    // but printing a "*" instead
    while (i < size) {
        printf("*\n");
        
        i = i + 1;
    }

    return 0;
}
