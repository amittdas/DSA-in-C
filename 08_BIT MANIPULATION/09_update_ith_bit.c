#include <stdio.h>

int updateithbit(int num, int i, int value){
    num = num & ~(1 << i);      // clear ith bit
    num = num | (value << i);   // set ith bit to value (0 or 1)
    return num;
}

int main(){
    printf("%d", updateithbit(7, 2, 0));
    return 0;
}