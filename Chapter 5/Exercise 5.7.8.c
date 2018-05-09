#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  computes The first n Fibonacci series
 *
 *  returns: how many number of Fibonacci : 14
 *           1 1 2 3 5 8 13 21 34 55 89 144 233 377
 */
int main()
{
    int i, n, a = 1, b = 1, c;
	printf("how many number of Fibonacci : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i += n)
        printf("%d", a);
    for(i = 2; i <= n; i += n)
        printf(" %d", b);
	for(i = 3; i <= n; ++i)
	{
		c = a + b;
		a = b;
		b = c;
		printf(" %ld", c);
	}
	printf("\n");
}
