#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dollar;
    printf("Enter a dollar amount:");
    scanf("%d", &dollar);
    printf(" $20 bills: %d $10 bills: %d\n $5 bills: %d\n $1 bills: %d", dollar/20, dollar%20/10, dollar%10/5, dollar%5);//20¶ôªº¼Æ¶q

    return 0;
}
