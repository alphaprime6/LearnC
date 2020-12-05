#include <stdio.h>

int	main(void)
{
    int area_code,
        middle_digit,
        last_four;

    printf("enter phone number: ");
    scanf("(%d) %d -%d", &area_code, &middle_digit, &last_four);
    printf("You entered %d.%d.%d", area_code,middle_digit,last_four);
    return 0;
}

