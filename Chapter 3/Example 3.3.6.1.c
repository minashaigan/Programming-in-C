#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: j = 4
 *           j = 4
 *           j = 4
 */
int main()
{
    int i = 12345, j;
    float x = 5.2;
    j = sizeof i;
    printf("j = %d\n", j);
    j = sizeof x;
    printf("j = %d\n", j);
    j = sizeof 12;
    printf("j = %d\n", j);
}

