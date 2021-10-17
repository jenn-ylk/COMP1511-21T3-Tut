// implements a scalar multiplication function
// class F11B, 15/10/21

#include <stdio.h>

#define ROWS 3
#define COLS 2


void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);
void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main(void) {

    // create the matrix
    int matrix[ROWS][COLS] = {{4, -2},
                              {5, 1},
                              {3, 7}};
    
    // call scalar multiplication function
    printf("Before scalar mult:\n");
    print_matrix(ROWS, COLS, matrix);
    
    scalar_multiply(ROWS, COLS, matrix, 2);
    
    printf("After scalar mult:\n");
    print_matrix(ROWS, COLS, matrix);
    
    

    return 0;
}

// scalar multiplication of matrix, will multiply a whole matrix by some number
void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {
    int row = 0;
    while (row < rows) {
        // count across the row (with column counter)
        int column = 0;
        while (column < columns) {
            // multiply the element of the matrix
            matrix[row][column] = scalar * matrix[row][column];
            column++;
        }
        row++;
    }
}

void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    int row = 0;
    while (row < rows) {
        int column = 0;
        while (column < columns) {
            printf("%02d ", matrix[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

}


