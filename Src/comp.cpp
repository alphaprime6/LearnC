#include <stdio.h>
#include <math.h>

int	main(void)
{
    int a;
    do
    {
        scanf("%d", &a);
    } while (a < 1 || a >9);

    for (i = 0; i < a; i++)
    {
        for  (j = 0; j < count; j++)
        {
            if (i+j < (a-1))
                printf(" ");
            else
                printf("*")
                        
        }
        
        printf("\n");
    }
    
    return 0;
}
