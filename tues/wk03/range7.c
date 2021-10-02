// counts up from a starting point to a finishing point, input by the user
// using a while loop and if statements, 
// to only print the numbers divisible by 7
// written by T17A, 28/09/21

#include <stdio.h>

#define DIVISOR 7

int main(void) {

    int start;
    int finish;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    // initialise a counter
    int i = start;
    
    // loop (with condition)
    while (i <= finish) {
        // if statements can go inside while loops
        if (i % DIVISOR == 0) {
            printf("%d\n", i);
        }            
        // increment count (make sure it's outside of the if statment)
        i = i + 1;
    }
    

    return 0;
}
