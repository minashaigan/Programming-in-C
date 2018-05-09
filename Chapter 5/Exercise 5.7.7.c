#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  computes pi to 10, 20, ..., 100 sentences
 *
 *  returns: 10 : 3.041840
 *           20 : 3.091624
 *           30 : 3.108268
 *           40 : 3.116596
 *           50 : 3.121594
 *           60 : 3.124927
 *           70 : 3.127307
 *           80 : 3.129093
 *           90 : 3.130482
 *           100 : 3.131593
 */
int main()
{
    int n, i;
	float pi = 0.0;
	for(n = 10; n <= 100; n += 10)
    {
        pi = 0.0;
        for(i = 1; i <= n; ++i)
        {
            pi += 4 * (pow(-1.0, i + 1)) / (2 * i - 1);
        }
        printf("%d : %f\n", n, pi);
    }
}
