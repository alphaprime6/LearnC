#include <stdio.h>

int main(void)
{
    int ac, md, lf;
    printf("Enter phone number: ");
    scanf(" (%d ) %d- %d", &ac, &md, &lf);
    printf("You entered %.3d.%3d.%.4d\n", ac, md, lf);
    return 0;
}
