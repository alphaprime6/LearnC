#include <stdio.h>

int	main(void)
{
    int dig1,
        dig2,
        dig3,
        dig4,
        dig5,
        dig6,
        dig7,
        dig8,
        dig9,
        dig10,
        dig11,
        dig12,
        dig13,
        dig14,
        dig15,
        dig16;
    printf("Enter the numbers from 1 to 16 in any order (ensure to seperate them with the space key): ");
    scanf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d", &dig1, &dig2, &dig3, &dig4,&dig5,&dig6,&dig7,&dig8,&dig9,&dig10,&dig11,&dig12,&dig13,&dig14,&dig15,&dig16);

    printf("Row sums: %d\t%d\t%d\t%d\n", dig1+dig2+dig3+dig4,dig5+dig6+dig7+dig8,dig9+dig10+dig11+dig12,dig13+dig14+dig15+dig16);

    printf("Column sums: \t%d\t%d\t%d\t%d\n", dig1+dig5+dig9+dig13,dig2+dig6+dig10+dig14,dig3+dig7+dig11+dig15,dig4+dig8+dig12+dig16);

    printf("Diagonal sums: \t%d\t%d\n", dig1+dig6+dig11+dig16,dig4+dig7+dig10+dig13);

    return 0;
}
