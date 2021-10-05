// week 4 tutorial code
// implements a function is_even, and calls it in main
// written by tutorial T17A, 05/10/21


#include <stdio.h>

// function prototype
int is_even(int num);


int main(void) {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    // call is_even
    int result = is_even(n);
    printf("is_even(%d) returned %d\n", n, result);

    return 0;
}


// function implementation:

// checks if a number is even
// takes in an integer
// returns 1 if even, 0 if odd
int is_even(int num) {
    int result;
    if (num % 2  == 0) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

