#include <stdio.h>
#include <string.h>

int main(){
    // strcpy
    // str1 = "hello world" --> this cannot be done directly
    char str1[100];
    char str2[100] = "hellllllo world";

    strcpy(str1, "hello world");
    printf("%s\n", str1);

    printf("--------\n");

    strcpy(str1, str2);   // copy from str2 to str1
    printf("%s\n", str1);

    // strcat
    char str3[100] = "hello";
    char str4[100] = "world";

    strcat(str3, str4);   // concatenate str3 and str4
    printf("%s\n", str3);
    printf("%s\n", str2); // remains same

    // strcmp
    // compares two strings based on ASCII values
    // small = -ve
    // same = 0
    // greater = +ve
    char str5[100] = "abc";
    char str6[100] = "abc";

    printf("%d\n", strcmp(str5, str6));

    return 0;
}