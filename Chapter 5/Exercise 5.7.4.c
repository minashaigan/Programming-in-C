#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads a positive value in base 2, prints in base 8
 *
 *  returns: Enter an integer in base 2 :1101
 *           The number in base 8 is: 15
 */
int main()
{
    int x, y, num = 0, i = 0, j = 0, result = 0;
	printf("Enter an integer in base 2 :");
	scanf("%d", &x);
	while(x > 0)
	{
		while(i <= 2)
		{
			y = x % 10;
			num += y * pow(2.0, i);
			x = x / 10;
			i++;
		}
		result += num * pow(10.0, j);
		num = 0;
		i=0;
		j++;
	}
	printf("The number in base 8 is: %d\n", result);
}
