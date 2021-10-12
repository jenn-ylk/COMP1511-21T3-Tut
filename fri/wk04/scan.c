#include <stdio.h>

int main (void) {
    
    int num1 = -1;
    int num2 = -1;
    
    int value = scanf("%d %d", &num1, &num2);
    printf("scanf returned %d\n", value);
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
