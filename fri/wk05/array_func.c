// array functions - which can we actually write
// class F11B 15/10/21

#include <stdio.h>

#define LENGTH 10

int array_length(int nums[]);
int test_all_positive(int length, int nums[]);
int test_all_initialized(int length, int nums[]);

int main(void) {
  	int arr[10];
  
  	// fill the array
  	int i = 0;
  	while (i < LENGTH) {
    	arr[i] = i + 1;
    	i++;
    }
  
    // TODO: call the functions (that we CAN make)
    printf("test_all_positive(LENGTH, arr) returns %d\n", test_all_positive(LENGTH, arr));
	return 0;
}

// returns the number of elements in the array nums
// this function isn't writable, unless we had a placeholder 
// for written elements, and knowledge of maximum elements
int array_length(int nums[]) {
	return 0;
}

// returns 1 if all elements of array nums are positive, otherwise returns 0
int test_all_positive(int length, int nums[]) {
    int i = 0;
    while (i < length) {
        // breaking condition: there is a negative value
        if (nums[i] <= 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

// returns 1 if all elements of array nums are initialized, otherwise returns 0
// unless there's a placeholder value for uninitialised, then this isn't writable
int test_all_initialized(int length, int nums[]) {
	return 0;
}
