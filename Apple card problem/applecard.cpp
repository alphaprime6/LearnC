#include <stdio.h>

int	main(void)
{
    float iphone_price64 = 0.0f,
        iphone_tradein = 0.0f,
        state_taxrate = 0.0f,
        military_price = 0.0f,
        purchase_posttax64mil = 0.0f,
        time_period = 0.0f,
        interest_rate = 0.0f,
        card_bill = 0.0f,
        card_bill0 = 0.0f,
        monthly_payment = 0.0f,
        total_mil = 0.0f,
        purchase_posttax64 = 0.0f;
       

    //Code on the iphone from the normal apple store

    printf("What is the original price of the iphone 12 mini 64GB: $");
    scanf("%f", &iphone_price64);

    printf("Enter the state tax rate: ");
    scanf("%f", &state_taxrate); //shwanee min combined sales tax is 9.61% broken down into kansas 6.5, johnson 1.48 and shawnee 1.63

    printf("Trade in discount (Based on the device, check the apple website https://www.apple.com/shop/buy-iphone/iphone-12): $" );
    scanf("%f", &iphone_tradein);

    purchase_posttax64 = iphone_price64 * (1 + state_taxrate / 100) - iphone_tradein;
    

    printf("The total price of the iphone 64GB after taxes and trade in value: $%.2f\n", purchase_posttax64);
    
    printf("The amount applied to the apple card: $%.2f\n", purchase_posttax64);
    



    // Code on the iphone from the military store

    military_price = iphone_price64 * (1 - 0.1); // calculate the mil price
    purchase_posttax64mil = military_price * (1 + state_taxrate / 100) - iphone_tradein;

    printf("What is the military discounted price of the iphone mini 64GB: $%.2f\n", military_price);

    printf("The military discounted price of the iphone mini 64GB after taxes and tradein value: $%.2f\n", purchase_posttax64mil);

    printf("The amount applied to the apple card after military discounts and tradein value:$%.2f\n", purchase_posttax64mil);
    
 


    //Code for computations with regards to apple card and interest

    printf("Enter the interest rate (APR) of the apple card or the financing offer: ");
    scanf("%f", &interest_rate);

    printf("Enter the time period you are willing to pay your balance: " );
    scanf("%f", &time_period);

    printf("Enter how much you are willing to pay per month: $" );
    scanf("%f", &monthly_payment);

    card_bill = military_price *  interest_rate / 100 / 12; // it will be nice to have a way to reduce the purchase amount by the interest already paid
    card_bill0 = iphone_price64 / time_period;
    total_mil = card_bill * time_period + purchase_posttax64mil;

    
    if (interest_rate == 0)
    {
        printf("Your monthly apple card bill will be (0 financing): $%.2f\n", card_bill0);
    }
    else
    {
        printf("Your monthly apple card bill will be (interest financing): $%.2f\n", card_bill);
    }
    
    printf("Your total payment based on the time period you selected will be (with interest financing for military): $%.2f\n", total_mil);
    printf("Your total payment based on the time period you selected will be (with 0 financing for civilianes): $%.2f\n", purchase_posttax64);
    

   return 0;
}
    
  
    
    
   
    
