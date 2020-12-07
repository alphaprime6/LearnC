#include <stdio.h>
#include <math.h>

int main()
{
	/*local variable for height prompt*/
	int a;
	do
	{
		/*print Height:*/
		printf("Height:");
		/*scanf function is used to store a variable for a*/
		scanf("%d", &a);
	}
	/*while loop execution on a*/
	while (a < 1 || a > 9);
	/*iterating the for loop for height*/
	for (int h = 0; h < a; h++)
	{
		/*iterating the for loop for #*/
		for (int y = 0; y < a; y++)
		{
			if (h + y < (a - 1))
				printf(" ");
			else
				printf("#");
		}
		printf("\n");
	}
}
