#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads a positive value in base 2, prints in base 10
 *
 *  returns: Enter a value in base 2: 1011
 *           The number in base 10 is 11
 */
int main()
{
    int x, y, count = 0, num = 0;
    printf("Enter a value in base 2: ");
    scanf("%d", &x);
	while(x > 0)
	{
        y = x % 10;
        num += y * pow(2.0, count);
        x = x / 10;
        count++;
	}
	printf("The number in base 10 is %d\n", num);
}
