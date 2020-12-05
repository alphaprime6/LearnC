#include <stdio.h>

int main(void)
{
    int h, l, w, v, we;

    printf("enter height of box:"); // prompt for values and this code applies to all 3 below. using the function sanf("%d", &value)
    scanf("%d", &h);
    printf("enter length of box:");
    scanf("%d", &l);
    printf("enter width of box:");
    scanf("%d", &w);
    v = h * l *w; // compute the volume
    we = (v+165)/166; // compute the weight.

    printf("Volume (cubic inches): %d\n", v); // print the weights after computing
    printf("dimensional weight (pounds): %d\n", we);

    return 0;


}