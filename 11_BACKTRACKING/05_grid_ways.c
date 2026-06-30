#include <stdio.h>

#define MAX 10

void printBoard(char board[MAX][MAX], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("_________________\n");
}

int isSafe(char board[MAX][MAX], int n, int row, int col) {
    int i, j;

    // Horizontal safety
    for (j = 0; j < n; j++) {
        if (board[row][j] == 'Q')
            return 0;
    }

    // Vertical safety
    for (i = 0; i < n; i++) {
        if (board[i][col] == 'Q')
            return 0;
    }

    // Left diagonal safety
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return 0;
    }

    // Right diagonal safety
    for (i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')
            return 0;
    }

    return 1;
}

void nQueens(char board[MAX][MAX], int n, int row) {
    int j;

    if (row == n) {
        printBoard(board, n);
        return;
    }

    for (j = 0; j < n; j++) {
        if (isSafe(board, n, row, j)) {
            board[row][j] = 'Q';
            nQueens(board, n, row + 1);
            board[row][j] = '.';   // Backtracking
        }
    }
}

int main() {
    char board[MAX][MAX];
    int n = 5;
    int i, j;

    // Initialize board with '.'
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            board[i][j] = '.';
        }
    }

    nQueens(board, n, 0);

    return 0;
}