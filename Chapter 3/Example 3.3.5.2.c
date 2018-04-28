#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: i = 6
 *           i = 5 & j = 5
 *           k = 5 & i = 4
 */
int main()
{
    int i, j, k;
    i = 6;
    printf("i = %d\n", i);
    j = --i;
    printf("i = %d & j = %d\n", i, j);
    k = i--;
    printf("k = %d & i = %d", k, i);
}

