// counts up from a starting point to a finishing point, input by the user
// using a while loop and if statements, 
// to only print the numbers divisible by 7
// written by F11B, 01/10/21

#include <stdio.h>

int main(void) {
    int start;
    int finish;
    
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    // initialise a counter
    int i = start;
    while (i <= finish) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }

        // put the increment outside of the if statement (always count up)
        i = i + 1;
    }

    return 0;
}
