#include <stdio.h>
#include <string.h>

int main(){

    // ignores characters after whitespace
    char word[30];
    scanf("%s", word);
    printf("your word is: %s\n", word);
    printf("Length of the word is: %lu\n", strlen(word));

    // clears leftover newline from input buffer
    getchar();

    // includes whitespaces
    char sentence[30];
    fgets(sentence, 30, stdin);

    // remove trailing newline added by fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("your sentence is: %s\n", sentence);
    printf("Length of the sentence is: %lu\n", strlen(sentence));

    return 0;
}