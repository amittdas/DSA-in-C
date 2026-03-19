#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows, cols;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter cols: ");
    scanf("%d", &cols);

    // creating 2D array dynamically
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++){
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // taking input
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // output
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // freeing memory (important in C)
    for(int i = 0; i < rows; i++){
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}