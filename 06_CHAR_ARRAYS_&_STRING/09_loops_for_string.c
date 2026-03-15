#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "amit das !";

    for(int i = 0; i < strlen(str); i++){
        printf("%c\n", str[i]);
    }

    for(int i = 0; i < strlen(str); i++){
        printf("%c,", str[i]);
    }

    printf("\n");

    return 0;
}