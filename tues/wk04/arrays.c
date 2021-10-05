// week 4 tutorial code
// some code to initialise, print, and change values in an array
// written by tutorial T17A, 05/10/21

#include <stdio.h>

#define SIZE 7

// length must be passed in because an array doesn't know its own length
void print_array(int length, int arr[]);
void make_squares(int length, int arr[]);


int main(void) {

    // initialising an array to all zeros 
    // (note, you can't do this with any other number)
    int nums[SIZE] = {0};
    
    int i = 0;
    // set all values to 1
    while (i < SIZE) {
        nums[i] = 1;
        i = i + 1;
    }
    
    print_array(SIZE, nums);
    
    // modify the array inside of the make_squares function
    make_squares(SIZE, nums);
    printf("After modification:\n");
    print_array(SIZE, nums);
    

    return 0;
}

// prints out all values of the array
void print_array(int length, int arr[]) {
    int i = 0;
    while (i < length) {
        printf("%d\n", arr[i]);
        i = i + 1;
    }
}

// sets all the values in the array to be the square of its index
void make_squares(int length, int arr[]) {
    int i = 0;
    while (i < length) {
        arr[i] = i * i;
        i = i + 1;
    }
}

