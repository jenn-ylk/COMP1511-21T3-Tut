// a program that contains, and runs, a few pointer functions
// class T17A, 12/10/21

#include <stdio.h>

void sum_nums(int a, int b, int *sum);
int *max(int *a, int *b);

int main(void) {


    int a;
    int b;
    int sum = -1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);        

    // what are the addresses for a, b, and sum?
    printf("%p is the address of a, which has a value %d\n", &a, a);
    
    sum_nums(a, b, &sum);
    printf("The sum is: %d\n", sum);
    
    int *highest = max(&a, &b);
    printf("The highest number is %d, at address %p\n", *highest, highest);

    return 0;
}

// sum a pair of numbers, and put the result into the address sum points to
void sum_nums(int a, int b, int *sum) {
    // * dereferences the pointer (goes back to the address)
    *sum = a + b;
    
}

// compare the numbers at two addresses, return the larger number address
int *max(int *a, int *b) {
    // initialise the pointer
    int *max;
    
    if (*a > *b) {
        // assign the correct pointer to max
        max = a;
    } else {
        max = b;
    }
    return max;
}

