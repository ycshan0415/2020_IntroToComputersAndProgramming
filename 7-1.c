#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *largest_word = malloc(20 * sizeof(char)), *p = malloc(20 * sizeof(char));

    printf("Enter word: ");
    scanf("%s", largest_word);

    while (1){
        printf("Enter word: ");
        scanf("%s", p);

        if (strcmp(largest_word, p) < 0)
            strcpy(largest_word, p);//compare which one is larger

        if (strlen(p) == 3)
            break;//break if the string length is 3

    }

    printf("The largest word is %s.", largest_word);

    free(largest_word);
    free(p);

    return 0;
}
