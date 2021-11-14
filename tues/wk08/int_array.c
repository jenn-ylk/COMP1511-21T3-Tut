// introduction to malloc, specifically here to make an int pointer
// and use as a dynamically sized array

// written on 2/11/21 for t17a

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    
    // making a dynamically sized array
    int length;
    printf("Enter array length: ");
    scanf("%d", &length);
    
    // get pointer with space for length integers (the size of an integer, multiplied by 
    int *int_ptr = malloc(sizeof(int) * length);
    
    printf("%p is the int address to the array\n", int_ptr);
    
    printf("Enter values for the array: \n");
    int i = 0;
    while (i < length) {
        scanf("%d", &(int_ptr[i]));
        
        i++;
    }
    
    printf("Printing the array:\n");
    int j = 0;
    while (j < length) {
        printf("%d\n", (int_ptr[j]));
        
        j++;
    }
    
    return 0;
}

