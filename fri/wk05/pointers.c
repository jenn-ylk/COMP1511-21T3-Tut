// a program that contains, and runs, a few pointer functions
// class F11B, 15/10/21

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
    printf("%p is the address of a = %d\n", &a, a);
    
    printf("sum before = %d\n", sum);
    sum_nums(a, b, &sum);
    printf("sum after = %d\n", sum);
    
    int *highest = max(&a, &b);
    printf("The highest number is at %p, with value %d\n", highest, *highest);
    
    // call the pointer functions

    return 0;
}

// sum a pair of numbers, and put the result into the address sum points to
void sum_nums(int a, int b, int *sum) {
    *sum = a + b;
}

// compare the numbers at two addresses, return the larger number address
int *max(int *a, int *b) {
    // dereference to compare the values
    if (*a < *b) {
        return b;
    } else {
        return a;
    }
}

