#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "amit das";

    printf("%lu\n", strlen(str));   // length of string
    printf("%c\n", str[3]);         // same as str.at(3)

    char sub[10];
    strncpy(sub, str + 1, 3);       // copy substring starting from index 1, length 3
    sub[3] = '\0';                  // add null terminator
    printf("%s\n", sub);

    char str2[] = "i like mathematics and coding";
    char *pos = strstr(str2, "coding");   // find substring

    if(pos != NULL){
        printf("%ld\n", pos - str2);      // index where "coding" starts
    }

    return 0;
}