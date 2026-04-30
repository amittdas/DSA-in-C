#include <stdio.h>

void fastExpo(int x, int n){
    int ans = 1;

    while(n > 0){
        int lastBit = n & 1;

        if(lastBit){
            ans = ans * x;
        }

        x = x * x;
        n = n >> 1;
    }

    printf("%d\n", ans);
}

int main(){
    fastExpo(3, 5);
    return 0;
}