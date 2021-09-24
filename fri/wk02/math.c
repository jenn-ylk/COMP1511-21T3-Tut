// does some maths and prints results

#include <stdio.h> 

/*
 + : addition
 - : subtraction
 * : multiplication
 / : division
 % : modulo (remainder)
 
*/

int main(void) {
    
    printf("1.0 / 2 * 500 = %lf\n", 1.0 / 2 * 500);
    printf("1 / 2.0 * 500 = %lf\n", 1 / 2.0 * 500);
    
    printf("(17 / 5) * 5 + (17 %% 5) = %d\n", (17 / 5) * 5 + (17 % 5));
    printf("(12 - 17) %% 6 - 4 = %d\n", (12 - 17) % 6 - 4);
    
    printf("'A' + 5 = %c\n", 'A' + 5);
    printf("'A' + 32 = %c\n", 'A' + 32);
    
    return 0;
}
