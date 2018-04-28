#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: j = 7
 *           y = 1.75
 */
int main()
{
    int i = 4, j;
    float x = 15.0, y;
    j = (int)x % 8;
    printf("j = %d\n", j);
    y = (float)j / i;
    printf("y = %g", y);
}

