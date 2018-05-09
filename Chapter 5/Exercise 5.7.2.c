#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  computes number of digits of a number
 *
 *  returns: Enter an integer value: 739650
 *           The length of integer is : 6
 */
int main()
{
    long int x;
    int count = 1;
	printf("Enter an integer value: ");
	scanf("%d", &x);
	while(x >= 10)
	{
		x = x / 10;
		count++;
	}
	printf("The length of integer is : %d\n", count);
}