#include <stdio.h>
#include <stdlib.h>

int main(){
    // vec1 (empty vector)
    int *vec1 = NULL;
    int size1 = 0;

    // vec2 = {1,2,3,4}
    int size2 = 4;
    int *vec2 = (int *)malloc(size2 * sizeof(int));
    vec2[0] = 1;
    vec2[1] = 2;
    vec2[2] = 3;
    vec2[3] = 4;

    // vec3(5, -1)
    int size3 = 5;
    int *vec3 = (int *)malloc(size3 * sizeof(int));
    for(int i = 0; i < size3; i++){
        vec3[i] = -1;
    }

    // printing sizes
    printf("%d\n", size1);
    printf("%d\n", size2);
    printf("%d\n", size3);

    // printing vec3
    for(int i = 0; i < size3; i++){
        printf("%d ", vec3[i]);
    }
    printf("\n");

    // free memory
    free(vec2);
    free(vec3);

    return 0;
}