#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char word[], int n){
    int st = 0, end = n - 1;

    while(st < end){
        if(word[st++] != word[end--]){
            printf("not a valid palindrome\n");
            return false;
        }
    }

    printf("valid palindrome\n");
    return true;
}

int main(){
    char word[] = "racecar";
    isPalindrome(word, strlen(word));

    return 0;
}