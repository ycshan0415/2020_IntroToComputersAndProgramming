#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    int count[26] = {0};
    printf("Enter a word:");

    while(ch != '\n'){
        scanf("%c", &ch);
        count[ch - 'a']++;
    }//count how many times the letter shows up


    printf("The distinct alphabets\n");

    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            printf("%c:%d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
