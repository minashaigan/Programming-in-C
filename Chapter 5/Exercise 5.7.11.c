#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads real value x and integer value n, computes x^n value, n could be positive, negative or zero
 *
 *  returns: Enter a real number : 7
 *           Enter number of power : -3
 *           7^-3 = 0.002915
 */
int main()
{
    int n, num;
	float x, y = 1;
	printf("Enter a real number : ");
	scanf("%f", &x);
	printf("Enter number of power : ");
	scanf("%d", &n);
	num = n;
	while(n >= 1)
	{
		y *= x;
		n--;
	}
	while(n <= -1)
	{
		y *= 1 / x;
		n++;
	}
	printf("%g^%d = %f\n", x, num, y);
}
