#include <stdio.h>

int GetithBit(int number, int i){
    int bitmask = 1 << i;

    if((number & bitmask) == 0){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    printf("%d\n", GetithBit(6, 2));
    return 0;
}