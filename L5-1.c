#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *reduce_numerator, int *reduce_denominator);

int main(void)
{
    int n, d, *pn, *pd;
    float value;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);
    pn = &n;
    pd = &d;
    value = (float)n / (float)d;
    //the value of the fraction

    reduce(n, d, pn, pd);

    printf("In lowest terms: %d/%d\n", *pn, *pd);
    printf("The value is: %f", value);

    return 0;
}



void reduce(int numerator, int denominator, int *reduce_numerator, int *reduce_denominator){
    int GCD = 1;

    for(int i = 2; i <= numerator; i++){
        if(numerator % i == 0 && denominator % i == 0)
            GCD = i;
    }//find the GCD

    *reduce_numerator = numerator / GCD;
    *reduce_denominator = denominator / GCD;
}

