#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads real value x and integer value n, computes x^n value, n could be positive, negative or zero
 *
 *  returns: How many time : 2
 *           x 1 = 81
 *           root  2 : 9.000000
 *           root  3 : 4.326749
 *           root  4 : 3.000000
 *           root  5 : 2.408225
 *           root  6 : 2.080084
 *           root  7 : 1.873444
 *           root  8 : 1.732051
 *           root  9 : 1.629498
 *           root 10 : 1.551846
 *           x 2 = 125
 *           root  2 : 11.180340
 *           root  3 : 5.000000
 *           root  4 : 3.343702
 *           root  5 : 2.626528
 *           root  6 : 2.236068
 *           root  7 : 1.993235
 *           root  8 : 1.828579
 *           root  9 : 1.709976
 *           root 10 : 1.620657
 */
int main()
{
    int i, j, n;
	float x, k;
	printf("How many time : ");
	scanf("%d", &n);
	for(i = 1; i <= n; ++i)
	{
		printf("x %d = ", i);
		scanf("%f", &x);
		for(j = 2; j <= 10; ++j)
		{
			k = 1.0 / j;
			printf("root %2d : %f\n", j, pow(x, k));
		}
	}
}