#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  using nested loop
 *
 *  returns: 123456
 *            23456
 *             3456
 *              456
 *               56
 *                6
 */
int main()
{
    int i, j, k;
	for(i = 1; i <= 6; ++i)
	{
		k = 1;
		for(j = i; j <= 6; ++j)
		{
			for(; k <= i-1; ++k)
				printf(" ");
			printf("%d", j);
		}
		printf("\n");
	}
}
