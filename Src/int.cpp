#include <stdio.h>

int	main(void)
{
    int h, l, w, v, we;

    h = 8;
    l = 12;
    w = 10;
    v = l * w * h;
    we = (v + 165)/166;

    printf("Dimersions: %dx%dx%d\n", l, w, h);
    printf("Volume (cubic inches): %d\n", v);
    printf("dimensional weight (pounds): %d\n", we);

    return 0;
}
