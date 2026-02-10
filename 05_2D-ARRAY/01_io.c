#include <stdio.h>

int main() {
    int arr[3][4];
    int n = 3, m = 4;

    printf("Enter the value of the array elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The value of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d,", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
