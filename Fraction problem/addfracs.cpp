#include <stdio.h>

int main(void)
{

int num1, denom1, num2, denom2, result_num, result_denom;

printf("enter two fractions seperated by a plus sign: ");
scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2); // modified program to have the 2 fractions show with a plus sign in between

// printf("enter second fraction: ");
// scanf("%d/%d", &num2, &denom2);

result_num = num1 * denom2 + num2 * denom1; // computations will not show in the CL program.
result_denom = denom1 * denom2;
printf("The sum is %d/%d\n", result_num, result_denom); // the printf function will show the calculations

    return 0;
}
