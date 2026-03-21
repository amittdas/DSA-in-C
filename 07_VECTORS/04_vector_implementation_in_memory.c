#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 4;
    int capacity = 4;

    // initial allocation
    int *vec1 = (int *)malloc(capacity * sizeof(int));
    vec1[0] = 1;
    vec1[1] = 2;
    vec1[2] = 3;
    vec1[3] = 4;

    printf("size: %d\n", size);
    printf("capacity: %d\n", capacity);

    // push_back(5)
    if(size == capacity){
        capacity = capacity * 2;  // typical doubling strategy
        vec1 = (int *)realloc(vec1, capacity * sizeof(int));
    }
    vec1[size] = 5;
    size++;

    printf("size: %d\n", size);
    printf("capacity: %d\n", capacity);

    // free memory
    free(vec1);

    return 0;
}