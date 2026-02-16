#include <stdio.h>
#include <string.h>

void toUpperCase(char word[], int n){
    for(int i = 0; i < n; i++){
        char ch = word[i];

        // already uppercase
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }
        // lowercase
        else{
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main(){
    char word[] = "ApPle";
    toUpperCase(word, strlen(word));

    printf("%s\n", word);
    return 0;
}