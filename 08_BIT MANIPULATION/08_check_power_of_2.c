#include <stdio.h>
#include <stdbool.h>

bool isPowerof2(int num){
    if(num <= 0) return false;   // important edge case

    if(!(num & (num - 1))){
        return true;
    } else {
        return false;
    }
}

int main(){
    printf("%d\n", isPowerof2(4));
    printf("%d\n", isPowerof2(16));
    printf("%d\n", isPowerof2(13));
    printf("%d\n", isPowerof2(7));

    return 0;
}