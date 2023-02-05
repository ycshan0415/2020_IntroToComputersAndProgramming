#include <stdio.h>
#include <stdlib.h>

const int arrSize = 100;
int size = 0;
void selectionSort(int *arrPointer);

int main(void)
{
    int a[arrSize], *p;
    p = a;
    printf("input:");
    do{
        scanf("%d", &a[size]);
        size++;
    }while(getchar() != '\n');
    //get the element of the array

    selectionSort(p);

    for(p = a; p < a + size; p++)
        printf("%d ", *p);

    return 0;
}

void selectionSort(int *arrPointer){
    int min_place;
    for(int i = 0; i < size - 1; i++){
        min_place = i;
        for(int j = i; j < size; j++){
            if(*(arrPointer + j) < *(arrPointer + min_place))
                min_place = j;//decide where the smaller element should go
        }
        int t;
        t = *(arrPointer + min_place);
        *(arrPointer + min_place) = *(arrPointer + i);
        *(arrPointer + i) = t;
        //exchange the element
    }
}
