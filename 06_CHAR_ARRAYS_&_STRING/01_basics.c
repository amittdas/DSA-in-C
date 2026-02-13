#include <stdio.h>

int main(){
    char ch1 = 'a';
    char ch2 = 'A';
    char ch3 = '&';
    char ch4 = '9';
    char ch5 = '\t';

    printf("%d\n", (int)ch1);
    printf("%d\n", (int)ch2);
    printf("%d\n", (int)ch3);
    printf("%d\n", (int)ch4);
    printf("%d\n", (int)ch5);

    char ch6 = 'f';
    int position = ch6 - 'a';
    printf("%d\n", position);

    char ch7 = 'F';
    int position2 = ch7 - 'A';
    printf("%d\n", position2);

    return 0;
}