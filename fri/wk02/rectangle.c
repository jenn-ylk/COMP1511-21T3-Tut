// rectangle.c
// takes in a width and length of a rectangle from the user
// then prints out the overall area of the rectangle

/*
Write a program rectangle.c that scans in 2 integers which are the 
side-length of a rectangle, and then prints the area of the rectangle.
*/

#include <stdio.h>

int main(void) {

    int height;
    int width;
    printf("Enter rectangle height: ");
    scanf("%d", &height);
    printf("Enter rectangle width: ");
    scanf("%d", &width);
    
    int area = height * width;
    printf("The area is %d * %d = %d\n", height, width, area);

    return 0;
}
