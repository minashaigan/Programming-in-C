#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  generates and prints integer numbers 10 to 0, prints 0 in next line with a message
 *
 *  returns: 10 9 8 7 6 5 4 3 2 1
 *           Value of i at this point is: 0
 */
int main()
{
    int i = 10;
    while( i )
        printf("%d ", i--);
    printf("\nValue of i at this point is: %d", i);
}
