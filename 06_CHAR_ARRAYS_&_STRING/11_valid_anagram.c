#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char str1[], char str2[]){
    if(strlen(str1) != strlen(str2)){
        printf("not a valid anagram\n");
        return false;
    }

    int count[26] = {0};

    for(int i = 0; i < strlen(str1); i++){
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    for(int i = 0; i < strlen(str2); i++){
        int idx = str2[i] - 'a';
        if(count[idx] == 0){
            printf("not a valid anagram\n");
            return false;
        }
        count[idx]--;
    }

    printf("valid anagram\n");
    return true;
}

// TIME COMPLEXITY = O(N)
int main(){
    char str1[] = "anagram";
    char str2[] = "nagaram";

    isAnagram(str1, str2);

    return 0;
}