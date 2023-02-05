#include <stdio.h>
#include <stdlib.h>

float f(float a[50]);

int main(void)
{
    float a[50];
    printf("Enter a row:");
    printf("%.2f", f(a));

    return 0;
}

float f(float a[50]){

    int n = 0;
    float sum;
    while(scanf("%f", &a[n]) != EOF){//press enter first then press ctrl+c to end the scanf function
        n++;
    }
    for(int i = 0; i < n; i++){
        sum += a[i] * a[i];
    }

    return sum;
}
