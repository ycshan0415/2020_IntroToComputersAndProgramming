#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool check_id (char *ID);

int main(void)
{
    char *id = malloc(10 * sizeof(char));

    printf("Enter an ID number: ");
    scanf("%s", id);

    if (check_id(id))
        printf("It is a correct ID number.");
    else
        printf("It isn't a correct ID number.") ;

    return 0;
}

bool check_id (char *ID)
{
    int i;
    if (strlen(ID) != 10)
        return false;

    if (isupper(ID[0]))//check the first character
        if (ID[1] == '1' || ID[1] == '2'){//check if the second character is 1 or 2
            for(i = 2; i <= 9; i++)
                if (ID[i] >= '0' && ID[i] <= '9')
                    return true;
                else
                    return false;
        }
        else
            return false;
    else
        return false;
}
