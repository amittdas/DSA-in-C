#include <stdio.h>

void printSudoku(int sudoku[9][9]) {
    int i, j;

    for (i = 0; i < 9; i++) {
        if (i % 3 == 0 && i != 0) {
            printf("-----+-----+-----+\n");
        }

        for (j = 0; j < 9; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
}

int isSafe(int sudoku[9][9], int row, int col, int digit) {
    int i, j;

    // Vertical
    for (i = 0; i < 9; i++) {
        if (sudoku[i][col] == digit)
            return 0;
    }

    // Horizontal
    for (j = 0; j < 9; j++) {
        if (sudoku[row][j] == digit)
            return 0;
    }

    // 3 x 3 Grid
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (i = startRow; i < startRow + 3; i++) {
        for (j = startCol; j < startCol + 3; j++) {
            if (sudoku[i][j] == digit)
                return 0;
        }
    }

    return 1;
}

int sudokuSolver(int sudoku[9][9], int row, int col) {
    int nextRow, nextCol, digit;

    // Base Case
    if (row == 9) {
        printSudoku(sudoku);
        return 1;
    }

    nextRow = row;
    nextCol = col + 1;

    if (nextCol == 9) {
        nextRow = row + 1;
        nextCol = 0;
    }

    // Skip filled cells
    if (sudoku[row][col] != 0) {
        return sudokuSolver(sudoku, nextRow, nextCol);
    }

    for (digit = 1; digit <= 9; digit++) {
        if (isSafe(sudoku, row, col, digit)) {
            sudoku[row][col] = digit;

            if (sudokuSolver(sudoku, nextRow, nextCol))
                return 1;

            // Backtracking
            sudoku[row][col] = 0;
        }
    }

    return 0;
}

int main() {
    int sudoku[9][9] = {
        {0, 0, 8, 0, 0, 0, 0, 0, 0},
        {4, 9, 0, 1, 5, 7, 0, 0, 2},
        {0, 0, 3, 0, 0, 4, 1, 9, 0},
        {1, 8, 5, 0, 6, 0, 0, 2, 0},
        {0, 0, 0, 0, 2, 0, 0, 6, 0},
        {9, 6, 0, 4, 0, 5, 3, 0, 0},
        {0, 3, 0, 0, 7, 2, 0, 0, 4},
        {0, 4, 9, 0, 3, 0, 0, 5, 7},
        {8, 2, 7, 0, 0, 9, 0, 1, 3}
    };

    if (!sudokuSolver(sudoku, 0, 0)) {
        printf("No solution exists.\n");
    }

    return 0;
}