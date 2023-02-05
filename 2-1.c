#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2 ,n3;
    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d)%d-%d", &n1, &n2, &n3);//把號碼分組
    printf("You entered %d.%d.%d", n1, n2, n3);

    return 0;
}
