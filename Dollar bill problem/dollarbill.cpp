#include <stdio.h>

int main(void) {

    int money = 0; //defined here

    printf("Enter a dollar amount: ");
    scanf("%d", &money);

    printf("$20 bills: %d\n", money/20); // money/20 is the number of 20 dollar bills integer value and so that value should be 4. / operator used here and integer value retained as it drops the fractional part.
    money -= 20 * (money/20); // subtracts 20*(money/20) from money and stores the value in money

    printf("$10 bills: %d\n", money/10);
    money -= 10 * (money/10); // compound assignment as done by me after the correction.

    printf("$5 bills: %d\n", money/5);
    money -= 5 * (money/5);

    printf("$1 bills: %d\n", money/1);
    money -= 1 * (money/1);



    return 0;
}
