#include <stdio.h>
#include <stdlib.h>

int Fibonacci_series(int n);

int main(void)
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        printf("%d ", Fibonacci_series(i));

    return 0;
}

int Fibonacci_series(int n){
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return Fibonacci_series(n-2) + Fibonacci_series(n-1);
}
