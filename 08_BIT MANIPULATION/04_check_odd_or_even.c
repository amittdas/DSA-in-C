#include <stdio.h>

void oddEven(int number){
    if((number & 1) == 0){
        printf("Even number\n");
    } else {
        printf("Odd number");
    }
}

int main(){
    int num = 9;
    oddEven(num);

    return 0;
}