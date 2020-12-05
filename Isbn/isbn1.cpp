#include <stdio.h>

int	main(void)
{
    int isbn,
        gsi_prefix,
        group_id,
        pub_code,
        item_num,
        check_dig;
    
    printf("enter ISBN: "); // provides the prompt to enter the isbn number.
    scanf("%d -%d -%d -%d -%d", &gsi_prefix, &group_id, &pub_code, &item_num, &check_dig); // scanf could be placed on the side of the code above but it will read the entries into the line printed above

    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gsi_prefix, group_id, pub_code, item_num, check_dig); //formating with printf here and assigning to the values of the isbn blocks above.

    return 0;
}
