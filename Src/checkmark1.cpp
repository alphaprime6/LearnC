#include <stdio.h>

int	main() {
int a =7;
int i;
int j;
{
    for (i = 0; i < 6; i++)
    {   
    for (j = 0; j < 8; j++)
    {
        if (i+j == (a-1))
            printf("*");
        else
            printf(" ");
    }
    
    printf("\n");

    } 
    return 0;
}
}

