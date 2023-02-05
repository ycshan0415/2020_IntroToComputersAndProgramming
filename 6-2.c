#include <stdio.h>
#include <stdlib.h>

void ptr_bubble_sort(int *target, int n);


int main(void)
{
    int size, *p;;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    ptr_bubble_sort(p, size);

    return 0;
}

void ptr_bubble_sort(int *target, int n){
    int a[n];
    printf("Enter the numbers of src:");
    for(target = a; target < a + n; target++){
        scanf("%d", target);//scan the elements
    }

    for(int i = 1; i < 8; i++){
        for(target = a; target < a + n - i; target++){
              if(*target > *(target + 1)){
                int t;
                t = *(target + 1);
                *(target + 1) = *target;
                *target = t;
              }//if the next element is smaller, exchange the two elements' order
        }
    }

    printf("target: ");

    for(target = a; target < a + n; target++){
        printf("%d ", *target);
    }

}
