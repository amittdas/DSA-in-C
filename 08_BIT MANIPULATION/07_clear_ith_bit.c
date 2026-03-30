#include <stdio.h>

int clearithbit(int num, int i){
    int bitMask = ~(1 << i);
    return num & bitMask;
}

int main(){
    printf("%d\n", clearithbit(6, 1));
    return 0;
}