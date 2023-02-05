#include <stdio.h>
#include <stdlib.h>

int leap_year_judge(int n);

int main(void)
{
    int y;
    printf("Input a year :");
    scanf("%d", &y);
    if(leap_year_judge(y))
        printf("%d is a leap year.", y);
    else
        printf("%d is not a leap year.", y);

    return 0;
}

 int leap_year_judge(int n){//see if the year that user type is a leap year
    if(n % 400 == 0)
        return 1;//true
    else if(n % 100 == 0)
        return 0;//false
    else if(n % 4 == 0)
        return 1;//true
    else
        return 0;//false
}
