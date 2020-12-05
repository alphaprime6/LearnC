#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8,
          &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
    
    printf("\n%2d%2d%2d%2d\n%2d%2d%2d%2d\n", 
          n1, n2, n3, n4, n5, n6, n7, n8);

    return 0;
}
