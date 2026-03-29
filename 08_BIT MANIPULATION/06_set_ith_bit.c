#include <stdio.h>

int setithbit(int number, int i){
    int bitmask = 1 << i;
    return (number | bitmask);
}

int main(){
    printf("%d\n", setithbit(6, 3));
    return 0;
}