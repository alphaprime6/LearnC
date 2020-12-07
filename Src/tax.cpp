#include <stdio.h>
#include <iostream>

#define TAX_VALUE (5.0f / 100.0f)

int main(void){
    float amount, cents, total;

    printf("Dollar amount: ");
    scanf("%f", &amount);
    printf("Cent amount: ");
    scanf("%f", &cents);

    total = (amount + cents) * (1 + TAX_VALUE);

    printf("Total with tax added: %.1f\n", total);

    return 0;

}






