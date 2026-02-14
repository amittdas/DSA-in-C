#include <stdio.h>
#include <string.h>

int main(){
    char arr[5] = {'a','b','c','d','e'};   // character array (NOT a string)

    printf("%c\n", arr[0]);
    printf("%c\n", arr[1]);
    printf("%c\n", arr[2]);
    printf("%c\n", arr[3]);
    printf("%c\n", arr[4]);

    // Undefined behavior (no '\0')
    printf("%s\n", arr);

    char str[5] = {'c','o','d','e','\0'}; // C-style string

    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
    printf("%c\n", str[3]);
    printf("%c\n", str[4]);

    printf("%s\n", str);

    char work[] = "code";   // string literal
    printf("%s\n", work);
    printf("%lu\n", strlen(work));

    return 0;
}