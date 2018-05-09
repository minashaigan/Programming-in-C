#include <stdio.h>

#define pi 3.1415

/*
 * Function:  main
 * ------------------
 *  draws x sinus curve at intervals of 0 to 2 pi
 *
 *  returns: .           *
 *           .         *   *
 *           .       *       *
 *           .
 *           .     *           *
 *           .
 *           .   *               *
 *           .
 *           . *                   *
 *           .
 *           .
 *           .*.......................*.......................*..........
 *           .
 *           .
 *           .                          *                   *
 *           .
 *           .
 *           .                            *               *
 *           .
 *           .                              *           *
 *           .
 *           .                                *       *
 *           .
 *           .                                  *   *
 *           .                                    *
 */
int main()
{
    int i, j, count = 1, dify;
	float prev1 = 5 * pi / 12, next = 6 * pi / 12, prev2 = next;
	printf(".%*c\n", (int)(next*8), '*');
	while(count < 6)
	{
		dify = (int)((sin(prev2) - sin(prev1)) * 8);
		for(i = 1; i <= dify; ++i)
			printf(".\n");
		prev2 = prev1;
		next += pi / 12;
		printf(".%*c%*c\n", (int)(prev1 * 8), '*', (int)(next * 8 - prev1 * 8), '*');
		prev1 -= pi / 12;
		count++;
	}
	dify = (int)((sin(next) - sin(prev1)) * 8);
	for(i = 1; i <= dify; ++i)
        printf(".\n");
	printf(".*");
	for(j = 1; j <= 2; ++j)
	{
		for(i = 1; i <= (int)(next * 8); ++i)
			printf(".");
		printf("*");
	}
	printf("..........\n");
	prev1 = pi;
	next = 2 * pi;
	while(count < 11)
	{
		dify = (int)((sin(prev2) - sin(prev1)) * 8);
		for(i = 1;i <= dify; ++i)
			printf(".\n");
		prev2 = prev1;
		prev1 += pi / 12;
		next -= pi / 12;
		printf(".%*c%*c\n", (int)(prev1 * 8), '*', (int)(next * 8 - prev1 * 8), '*');
		count++;
	}
	printf(".%*c\n",(int)(3 * pi / 2*8), '*');
}
