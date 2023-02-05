#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define NUM_LETTERS 26

void read_word(int counts[NUM_LETTERS]);
bool equal_array(int counts1[NUM_LETTERS], int counts2[NUM_LETTERS]);

int main(void){
    int counts1[NUM_LETTERS] = {0}, counts2[NUM_LETTERS] = {0};
    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    if(equal_array(counts1, counts2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[NUM_LETTERS]){
    char ch;
    do{
        scanf("%c", &ch);
        if(isalpha(ch)){
           ch = tolower(ch);
           counts[ch - 'a']++;
        }
    }while(ch != '\n');
}

bool equal_array(int counts1[NUM_LETTERS], int counts2[NUM_LETTERS]){
    for(int i = 0; i< 26; i++){
        if(counts1[i] != counts2[i]){
            return false;
        }
    }
    return true;
}
