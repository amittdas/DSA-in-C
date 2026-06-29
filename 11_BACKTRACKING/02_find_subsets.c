#include <stdio.h>
#include <string.h>

void printSubset(char str[], int index, char subset[], int subIndex) {
    if (str[index] == '\0') {
        subset[subIndex] = '\0';
        printf("%s\n", subset);
        return;
    }

    // YES Choice
    subset[subIndex] = str[index];
    printSubset(str, index + 1, subset, subIndex + 1);

    // NO Choice
    printSubset(str, index + 1, subset, subIndex);
}

int main() {
    char str[] = "abc";
    char subset[100];

    printSubset(str, 0, subset, 0);

    return 0;
}