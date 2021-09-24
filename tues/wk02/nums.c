// test of tutorial code with if statements

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) {

    /*
    if ( condition ) {
        // do stuff
    }
    */

    int num = 0;
    if (num >= 1) {
        printf("num is 1 or greater\n");
    }
    if (num > 1) { 
        printf("num is greater than 1\n");
    }
    

    if (num >= 1) {
        printf("num is 1 or greater\n");
    }
    else if (num > 1) { 
        printf("num is greater than 1\n");
    }


    if (num >= 1) {
        printf("num is 1 or greater\n");
    }
    else { 
        printf("num is less than 1\n");
    }
    
    return 0;
}
