#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: i = 6
 *           i = 7 & j = 7
 *           k = 7 & i = 8
 */
int main()
{
    int i, j, k;
    i = 6;
    printf("i = %d\n", i);
    j = ++i;
    printf("i = %d & j = %d\n", i, j);
    k = i++;
    printf("k = %d & i = %d", k, i);
}

