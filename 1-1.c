#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);//輸入數字
    printf("The reversal is: %2d", number%10*10+number/10);//置換順序

    return 0;
}
