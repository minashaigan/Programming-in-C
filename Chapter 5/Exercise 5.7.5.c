#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads a positive value in base 8, prints in base 2, prints in base 8, 10, 16 with float format
 *
 *  returns: Enter an integer in base 8: 602
 *           The real number base 8 : 602.000000
 *           The number in base 2 : 110000008
 *           The number is  ac 10 : 392.000000
 *           The number is  ac 16 : 188.000000
 */
int main()
{
    int x, y, z, num = 0, i = 0, j = 0;
	printf("Enter an integer in base 8: ");
	scanf("%d", &x);
	printf("The real number base 8 : %f\n", (float)x);
	while(x > 0)
	{
		y = x % 10;
		while(i <= 2)
		{
			z = y % 2;
			num += z * pow(10.0, j);
			i++;
			j++;
			y = y / 2;
		}
		i = 0;
		x = x / 10;
	}
	printf("The number in base 2 : %d\n", num);
	int y1, count1 = 0, num1 = 0;
	while(num > 0)
	{
        y1 = num % 10;
        num1 += y1 * pow(2.0, count1);
        num = num / 10;
        count1++;
	}
	printf("The number is  ac 10 : %f\n", (float)num1);
	int k = 0, num2, result = 0;
	while(num1 > 0)
	{
		num2 = num1 % 16;
		result += num2 * pow(10.0, k);
		num1 = num1 / 16;
		k++;
	}
	printf("The number is  ac 16 : %f\n", (float)result);
}
