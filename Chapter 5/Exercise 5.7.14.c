#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Function:  main
 * ------------------
 *  This program will create different sequence of random numbers on every program run
 *
 *  returns: 1 : 8435
 *           2 : 24096
 *           3 : 17918
 *           4 : 2404
 *           5 : 667
 *           6 : 28524
 *           7 : 30602
 */
int main()
{
    int i;
    float r;

    // Use current time as seed for random generator
    srand(time(0));

    for(i = 1; i <= 7; ++i)
    {
        r = rand();
        printf("%d : %g\n", i, r);
    }
}
