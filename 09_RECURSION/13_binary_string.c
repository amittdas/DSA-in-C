#include <stdio.h>
#include <string.h>

void binString(int n, int lastPlace, char ans[], int len) {
    if (n == 0) {
        ans[len] = '\0';
        printf("%s\n", ans);
        return;
    }

    ans[len] = '0';
    binString(n - 1, 0, ans, len + 1);

    if (lastPlace != 1) {
        ans[len] = '1';
        binString(n - 1, 1, ans, len + 1);
    }
}

int main() {
    char ans[100];
    binString(3, 0, ans, 0);
    return 0;
}