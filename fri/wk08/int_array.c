// introduction to malloc, specifically here to make an int pointer
// and use as a dynamically sized array
// written on 5/11/21 for f11b

#include <stdio.h>
// which .h file is required for malloc?
#include <stdlib.h>

int main (void) {
    
    int length;
    printf("Enter length: ");
    scanf("%d", &length);
    int *int_arr = malloc(sizeof(int) * length);
    
    printf("Enter numbers: \n");
    
    // now can use the int_arr pointer just like an array
    int i = 0;
    while (i < length) {
        scanf("%d", &int_arr[i]);
        i++;
    }
    
    int j = 0;
    while (j < length) {
        printf("%d\n", int_arr[j]); 
        j++;
    }
    
    // make a pointer to an integer, allocated with malloc
    //int *p = malloc(sizeof(int));
    //*p = 5;
    
    //printf("%p is the address containing %d\n", p, *p);
    
    return 0;
}

