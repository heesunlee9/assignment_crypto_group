#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    const int ROW_SIZE = 10;
    const int COLUMN_SIZE = 10;

    int matrix1[ROW_SIZE][COLUMN_SIZE];
    int matrix2[ROW_SIZE][COLUMN_SIZE];

    srand((unsigned)time(NULL));

    for(int row = 0; row < ROW_SIZE; row++) {
        for(int column = 0; column < COLUMN_SIZE; column++) {
            matrix1[row][column] = rand() % 2;
            matrix2[row][column] = rand() % 2;
        }
    }

    printf("---matrix1---\n");    
    for(int row = 0; row < ROW_SIZE; row++) {
        for(int column = 0; column < COLUMN_SIZE; column++) {
            printf("%d  ", matrix1[row][column]);
        }
        printf("\n");        
    }

    printf("---matrix2---\n");    
    for(int row = 0; row < ROW_SIZE; row++) {
        for(int column = 0; column < COLUMN_SIZE; column++) {
            printf("%d  ", matrix2[row][column]);
        }
        printf("\n");
    }

    printf("---1. coordinate-wise addition---\n");
    for(int row = 0; row < ROW_SIZE; row++) {
        for(int column = 0; column < COLUMN_SIZE; column++) {
            if(matrix1[row][column] + matrix2[row][column] < 2) { 
                printf("%d  ", matrix1[row][column] + matrix2[row][column]);
                continue;
            }
            printf("%d  ", 0);
        }
        printf("\n");
    }

    printf("---2. XNOR---\n");
    for(int row = 0; row < ROW_SIZE; row++) {
        for(int column = 0; column < COLUMN_SIZE; column++) {
            if(matrix1[row][column] != matrix2[row][column]) {
                printf("%d  ", 0);
                continue;
            } 
            printf("%d  ", 1);
        }
        printf("\n");
    }

    printf("---3. subtraction---\n");
    for(int row = 0; row < ROW_SIZE; row++) {
        for(int column = 0; column < COLUMN_SIZE; column++) {
            printf("%d  ", matrix1[row][column] - matrix2[row][column]);
        }
        printf("\n");
    }

    printf("---4. multiplication---\n");
    for(int row = 0; row < ROW_SIZE; row++) {
        for(int column = 0; column < COLUMN_SIZE; column++) {
            printf("%d  ", matrix1[row][column] * matrix2[row][column]);
        }
        printf("\n");
    }
}