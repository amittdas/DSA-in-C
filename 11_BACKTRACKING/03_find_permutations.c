#include <stdio.h>
#include <string.h>

void permutations(char str[], int n, char ans[], int index) {
    if (n == 0) {
        ans[index] = '\0';
        printf("%s\n", ans);
        return;
    }

    int i, j;
    char nextStr[100];

    for (i = 0; i < n; i++) {
        ans[index] = str[i];

        // Create nextStr by removing str[i]
        int k = 0;
        for (j = 0; j < n; j++) {
            if (j != i) {
                nextStr[k++] = str[j];
            }
        }
        nextStr[k] = '\0';

        permutations(nextStr, n - 1, ans, index + 1);
    }
}

int main() {
    char str[] = "abc";
    char ans[100];

    permutations(str, strlen(str), ans, 0);

    return 0;
}