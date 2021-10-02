// counts up from 1 to a finishing point, input by the user, using a while loop
// written by T17A, 28/09/21

#include <stdio.h>

int main(void) {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // initialise a counter
    int i = 1;
    // loop (if the condition is true, the code inside runs)
    while (i <= n) {
        printf("%d\n", i);
        
        // increment count
        // can also use i++ or i += 1
        i = i + 1;
    }
    

    return 0;
}
