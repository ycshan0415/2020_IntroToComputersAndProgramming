#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5][5], i, j, row_total = 0, column_total = 0;

    for(i = 0; i < 5; i++){
         printf("Enter row %d: ", i+1);
         for(j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
         }
    }//ask the user to type in the elements of array a

    printf("Row totals: ");
    for(i = 0; i < 5; i++){
         for(j = 0; j < 5; j++){
            row_total += a[i][j];
         }
         printf("%d ", row_total);
         row_total = 0;//clear row_total for the next loop
    }

    printf("\nColumn totals: ");
    for(j = 0; j < 5; j++){
         for(i = 0; i < 5; i++){
            column_total += a[i][j];
         }
         printf("%d ", column_total);
         column_total = 0;//clear column_total for the next loop
    }

    return 0;
}
