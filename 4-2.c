#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;
    int count[26] = {0}, i;

    printf("Enter first word: ");
    do{
        scanf("%c", &ch);
        if(isalpha(ch)){
           ch = tolower(ch);
           count[ch - 'a']++;
        }//if the user type a letter, change it into lower case, and count the letter(add)
    }while(ch != '\n');

    printf("Enter second word: ");
    do{
        scanf("%c", &ch);
        if(isalpha(ch)){
           ch = tolower(ch);
           count[ch - 'a']--;
        }//if the user type a letter, change it into lower case, and count the letter(minus)
    }while(ch != '\n');

    for(i = 0; i < 26; i++){
        if(count[i] != 0){
            printf("The words are not anagrams.");
            return 0;//if two words are composed of the same letters, the array count's elements should be all-zero
        }
    }
    printf("The words are anagrams.");

}
