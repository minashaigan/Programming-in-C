#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: j = 4
 *           j = 4
 *           j = 8
 *           j = 1
 */
int main()
{
    int j;
    j = sizeof( int );
    printf("j = %d\n", j);
    j = sizeof( float );
    printf("j = %d\n", j);
    j = sizeof( double );
    printf("j = %d\n", j);
    j = sizeof( char );
    printf("j = %d", j);
}

