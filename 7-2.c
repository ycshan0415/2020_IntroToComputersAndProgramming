#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 1:AEILNORSTU, 2:DG, 3:BCMP, 4:FHVWY, 5:K, 8:JX, 10:QZ.

int compute_scrabble_value(const char *word);

int main(void)
{
    char *p = malloc(20 * sizeof(char));

    printf("Enter a word: ");
    scanf("%s", p);

    printf("%d", compute_scrabble_value(p));

    free(p);
    return 0;
}

int compute_scrabble_value(const char *word)
{
    char ch;
    int value = 0;

    while (*word){
        if (isalpha(*word)){
            ch = toupper(*word);//change to upper case
            if (ch == 'A' || ch == 'E' || ch ==  'I' || ch ==  'L' || ch ==  'N' || ch ==  'O' || ch ==  'R' || ch ==  'S' || ch ==  'T' || ch ==  'U')
                value += 1;
            else if (ch == 'D' || ch ==  'G')
                value += 2;
            else if (ch == 'B' || ch ==  'C' || ch ==  'M' || ch ==  'P')
                value += 3;
            else if (ch == 'F' || ch ==  'H' || ch ==  'V' || ch ==  'W' || ch ==  'Y')
                value += 4;
            else if (ch == 'K')
                value += 5;
            else if (ch == 'J' || ch ==  'X')
                value += 8;
            else if (ch == 'Q' || ch ==  'Z')
                value += 10;
        }

        word++;
    }

    return value;
}
