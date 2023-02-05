#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, a, b, c, d, e;
    printf("Enter a number between O and 32767: ");
    scanf("%d", &number);
    a=number/4096;//材5计(窾)
    b=number%4096/512;//材4计()
    c=number%512/64;//材3计(κ)
    d=number%64/8;//材2计()
    e=number%8;//材1计()
    printf("In octal, your number is: %d%d%d%d%d", a, b, c, d, e);//传Θ8秈

    return 0;
}
