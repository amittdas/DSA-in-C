#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "hello";
    printf("%s\n", str);

    strcpy(str, "yellow");   // reassign string
    printf("%s\n", str);

    // INPUT
    char str2[100];
    fgets(str2, sizeof(str2), stdin);   // read full line including spaces
    printf("%s", str2);

    printf("%c\n", str2[0]);   // print first character

    return 0;
}