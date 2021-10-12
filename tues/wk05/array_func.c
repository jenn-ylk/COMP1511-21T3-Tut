// array functions

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
    printf("test_all_positive returned : %d\n", 
           test_all_positive(LENGTH, arr));
	return 0;
}

// returns the number of elements in the array nums
int array_length(int nums[]) {
	return 0;
}

// returns 1 if all elements of array nums are positive, otherwise returns 0
int test_all_positive(int length, int nums[]) {
	int i = 0;
	int test_pos = 1;
	while (i < length && test_pos == 1) {
	    if (nums[i] < 1) {
	        test_pos = 0;
	    }
	    i++;
	}
	
	return test_pos;
}

// returns 1 if all elements of array nums are initialized, otherwise returns 0
int test_all_initialized(int length, int nums[]) {
	return 0;
}
