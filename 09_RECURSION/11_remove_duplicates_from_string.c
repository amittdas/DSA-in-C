#include <stdio.h>
#include <string.h>

void removeDup(char str[], char ans[], int i, int j, int map[]) {
    if (i == strlen(str)) {
        ans[j] = '\0';
        printf("ans: %s\n", ans);
        return;
    }

    int mapIdx = str[i] - 'a';

    if (map[mapIdx]) {   // duplicate
        removeDup(str, ans, i + 1, j, map);
    } else {             // not duplicate
        map[mapIdx] = 1;
        ans[j] = str[i];
        removeDup(str, ans, i + 1, j + 1, map);
    }
}

int main() {
    char str[] = "appnnacollege";
    char ans[100];
    int map[26] = {0};

    removeDup(str, ans, 0, 0, map);

    return 0;
}