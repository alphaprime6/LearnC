 "workbench.colorCustomizations": {
        "activityBar.foreground": "#00FFFF",
        "activityBarBadge.background": "#00FF88" 
     },
     # snippet of the file will always be saved from now on.
     installing vsnotes is important.
     
     #C:\Users\The Professor\AppData\Roaming\Code\User\settings.json
     # i just figured out how to make my workspace what i want it to look like. Did not know the workspace used a different theme than the user interface
     intellisence works just fine
     https://code.visualstudio.com/docs/cpp/config-mingw: a link to have and i will save the page in pdf
     # path for my old tasks file. dont want to go searching for that again. C:\Users\The Professor\Nextcloud\Visual Studio Code\Insiders\Vscode\.vscode\tasks (2020_04_05 18_57_09 UTC).json 

     Two most important commands in Vscode>>>
     ctrl+sh+p
     ctrl+sh+b (will use soon)
     f5 for debugging is the other one in vscode. that is saying i am sticking to vscode from now on to solve my harder problems.

     KEY NOTES
     obtaining a good library (pre-existing)
     use lint to check my code
     adopt a coding convention (my rules of writing)

     compling and linking > preprocessing>complie>link    

     Code reads from left to right and from top to bottom. How it is arranged is a skill to be learned.
     Other compiler checks
     -Wall, - W, - pedantic 

     return(0) or exit(0)

     * (money/20)

    printf("$10 bills: %d\n", money/10);
    money -= 10 * (money/10);

    printf(" $5 bills: %d\n", money/5);
    money -= 5 * (money/5);

    printf(" $1 bills: %d\n", money);

    printf("GSI prefix: %d\nGroup identifier: %d\n", gsi, group_id);
    printf("Publisher code: %d\nItem number: %d\nCheck digit: %d\n", 
           pub_code, item_num, check_digit);


more elegant code for the loan balance problem:
 float loan= 0.0f,
       rate= 0.0f,
       payment= 0.0f;
       


       printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
       printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", itemnumber, unitprice, month, day, year);

       a major milestone in formating with c and also a major milestone in understanding scanf better.
         printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", dig1, dig2, dig3, dig4,dig5,dig6,dig7,dig8,dig9,dig10,dig11,dig12,dig13,dig14,dig15,dig16);