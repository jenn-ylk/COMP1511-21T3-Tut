// rectangle.c
// takes in a width and length of a rectangle from the user
// then prints out the overall area of the rectangle

//

#include <stdio.h>

int main(void) {

    int width;
    int length;
    printf("Enter rectangle width: ");
    scanf("%d", &width);
    printf("Enter rectangle length: ");
    scanf("%d", &length);
    
    if (length > 0 && width > 0) {
        int area = width * length;
        printf("The area is %d\n", area);
        
        int perimeter = 2 * width + 2 * length;
        printf("The perimeter is %d\n", perimeter);
        
        if (area == perimeter) {
            printf("Area and perimeter are equal\n");
        }
    } else {
        printf("make sure width and length are positive\n");
    }

    return 0;
}
