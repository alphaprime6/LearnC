#include <stdio.h>

int	main(void)
{
    int i = 2,
        j = 1 + ++i, // i is called first and then incremented by 1 and so 2 * 3 is the expected value of j. This does not hold when 
        k = 2 + j++;

    printf("i is %d\n", i); // expected value is 3; defined behavior
    printf("j is %d\n", j); // expected value is 5 defined behavior
    printf("k is %d\n", k); // expected value is 6 defined behavior
    // the code ran as expected.

   return 0;
}
    
  
    
    
   
    
