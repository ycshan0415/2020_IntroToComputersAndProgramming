#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m1, d1, y1, m2, d2, y2, total1, total2;
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    total1 = y1*10000 + m1*100 + d1;//change the first date into a 6-digit number
    total2 = y2*10000 + m2*100 + d2;//change the second date into a 6-digit number

    if(total1 > total2)//compare two 6-digit number
        printf("%d/%d/%.2d comes after than %d/%d/%.2d", m1, d1, y1, m2, d2, y2);
    else
        printf("%d/%d/%.2d comes after than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);

    return 0;
}
