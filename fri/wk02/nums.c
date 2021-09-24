// test of tutorial code with if statements

#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    printf("num > 1 = %d\n", num > 1);
    
    /*
    if (condition) {
        // do stuff
    } else if (condition) {
        // do other stuff
    } else {
        // do things because everything else wasn't true
    }
    */
    
    // these both will run, nomatter what - could end up printing both
    if (num >= 1) {
        printf("num is 1 or greater\n");
    }
    if (num > 1) { 
        printf("num is greater than 1\n");
    }
    
    // will only print one of these
    if (num >= 1) {
        printf("num is 1 or greater\n");
    }
    else if (num > 1) { 
        // note - this will never run
        // (since for this condition to be true, num >= 1 was true)
        printf("num is greater than 1\n");
    }


    // unlike the others, will always print something
    if (num > 1) {
        printf("num is greater than 1\n");
    } else if (num == 1) {
        printf("num is equal to 1\n");
    }
    else { 
        printf("num is less than 1\n");
    }
    
    
    return 0;
}
