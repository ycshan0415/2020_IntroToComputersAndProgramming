#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[8], n;
    for(n = 0; n < 8 ; n++)
        scanf("%d", &a[n]);//input array a's elements
    for(int i = 1; i < 8; i++){
        for(int j = 0; j < 8; j++){
              if(a[j] > a[j + 1]){
                int t;
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
              }//if the next element is smaller, exchange the two elements' order
        }
    }

    for(n = 0; n < 8 ; n++)
        printf("%d ", a[n]);


    return 0;
}

