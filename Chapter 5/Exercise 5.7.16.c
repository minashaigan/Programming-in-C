#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  using nested loop
 *
 *  returns: 111111
 *           011111
 *           001111
 *           000111
 *           000011
 *           000001
 */
int main()
{
    int i, j, k;
	for(i = 1; i <= 6; ++i)
	{
		k = 1;
		for(j = i; j <= 6; ++j)
		{
			for(; k <= i - 1; ++k)
				printf("0");
			printf("%d", 1);
		}
		printf("\n");
	}
}
