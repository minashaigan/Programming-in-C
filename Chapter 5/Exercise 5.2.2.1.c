#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: 
 *           Value of i at this point is: 20
 */
int main()
{
    int i = 20;
    while( i<=10 )
        printf("%d ", i++);
    printf("\nValue of i at this point is: %d", i);
}
