#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0, i;

    for (i = 1; i < argc; i++){
        sum += atoi(argv[i]);//atoi change a string to integer
    }

    printf("%d", sum);

    return 0;
}
