#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, d, y, total;
    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m, &d, &y);
    total = y*10000 + m*100 + d;//change the date into a 6-digit number

    do{
        printf("Enter a date (mm/dd/yy) : ");
        scanf("%d/%d/%d", &m, &d, &y);
        if(m != 0 && total > y*10000 + m*100 + d)
                total = y*10000 + m*100 + d;//if the next date is earlier than the previous date, upload the new date to total
    }while(m != 0);

    printf("%d/%d/%.2d is the earliest date", total%10000/100, total%100, total/10000);

    return 0;
}
