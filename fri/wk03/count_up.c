// counts up from 1 to a finishing point, input by the user, using a while loop
// written by F11B, 01/10/21

#include <stdio.h>

int main(void) {

    int finish;
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    // initialise counter
    int i = 1;
    // condition (the loop will run while this is true)
    while (i <= finish) {
        printf("%d\n", i);
        
        // increment
        i = i + 1;
    }

    return 0;
}
