#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: 1 1 1 1 1 ...
 */
int main()
{
    int i = 1;
    while( i<=10 )
        printf("%d ", i);
    printf("\nValue of i at this point is: %d", i);
}
