#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads integer value n, computes factorial value 1 to n
 *
 *  returns: how many time calculate factorial : 20
 *            k                  k!
 *           ---                 ---
 *            1                   1
 *            2                   2
 *            3                   6
 *            4                  24
 *            5                 120
 *            6                 720
 *            7                5040
 *            8               40320
 *            9              362880
 *           10             3628800
 *           11            39916800
 *           12           479001600
 *           13          6227020800
 *           14         87178291200
 *           15       1307674368000
 *           16      20922789888000
 *           17     355687428096000
 *           18    6402373705728000
 *           19  121645100408832000
 *           20 2432902008176640000
 */
int main()
{
    int n, i, j;
	long long int k = 1;
	printf("how many time calculate factorial : ");
	scanf("%d", &n);
	printf("%2c%20s\n", 'k', "k!");
	printf("%2s%20s\n", "---", "---");
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= i; ++j)
		{
			k = k * j;
		}
		printf("%2d%20lld", i, k);
		printf("\n");
		k = 1;
	}
}
