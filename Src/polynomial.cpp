#include <stdio.h>
#include <iostream>

int main(void)
{
    float x,p;

    printf("Value of x: ");
    scanf("%f", &x);

    p = (3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6);

    printf("Value of the polynomial: %.1f\n", p);

    return 0;

}






