#include <stdio.h>

int main(void)
{
    int itemnumber, month, day, year;
    float unitprice;

    printf("enter item number: ");
    scanf("%d", &itemnumber);

    printf("enter unit price: ");
    scanf("%f", &unitprice);

    printf("enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);

  printf("item\t\tunit\t\tpurchase\n\t\tprice\t\tdate\n"); // \t stands for tab and \n for new line
  printf("%d\t\t$%6.2f\t\t%.2d/%.2d/%.4d\n", itemnumber, unitprice, month, day, year); // draw what you want the formatting to look like before writing the code

    return 0;
}