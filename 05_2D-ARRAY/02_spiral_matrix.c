#include <stdio.h>

void spiralMatrix(int mat[][4], int n, int m){
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while(srow <= erow && scol <= ecol){

        // top row
        for(int j = scol; j <= ecol; j++){
            printf("%d, ", mat[srow][j]);
        }

        // right column
        for(int i = srow + 1; i <= erow; i++){
            printf("%d, ", mat[i][ecol]);
        }

        // bottom row
        for(int j = ecol - 1; j >= scol; j--){
            if(srow == erow){
                break;
            }
            printf("%d, ", mat[erow][j]);
        }

        // left column
        for(int i = erow - 1; i >= srow + 1; i--){
            if(scol == ecol){
                break;
            }
            printf("%d, ", mat[i][scol]);
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main(){
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralMatrix(mat, 4, 4);
    return 0;
}