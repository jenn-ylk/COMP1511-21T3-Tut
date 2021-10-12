// week 4 tutorial code
// Create a function called is_even which takes in an integer and 
// returns 1 if it is an even number, and 0 if it is not.


#include <stdio.h>

// function prototype
int is_even(int num);


int main(void) {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    // call is_even - the value of n gets copied across
    // is_even(n);
    printf("is_even(%d) returns %d\n", n, is_even(n));

    return 0;
}


// function implementation:
// takes in a number, and checks if it is even
// returns 1 if even, 0 if odd
int is_even(int num) {
    int result = 0;
    if (num % 2 == 0) {
        result = 1;
    }
    num = 10;
    
    return result;
}

