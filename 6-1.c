#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[6], *p;

    printf("Input : array =");
    for(p = a; p < a + 6; p++){
        scanf("%d", p);//use pointer to scan the elements in the array in order
    }

    printf("Output : reverse_array =");
    for(p = a + 5; p >= a; p--){
        printf("%d ", *p);//print the elements by using pointer
    }

    return 0;
}

