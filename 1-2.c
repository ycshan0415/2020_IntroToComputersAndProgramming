#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, a, b, c, d, e;
    printf("Enter a number between O and 32767: ");
    scanf("%d", &number);
    a=number/4096;//��5���(�U)
    b=number%4096/512;//��4���(�d)
    c=number%512/64;//��3���(��)
    d=number%64/8;//��2���(�Q)
    e=number%8;//��1���(��)
    printf("In octal, your number is: %d%d%d%d%d", a, b, c, d, e);//����8�i��

    return 0;
}
