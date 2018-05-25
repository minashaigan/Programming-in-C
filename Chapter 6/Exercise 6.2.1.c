#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determines whether x is odd or even
 *
 *  returns: x is even
 *           ***
 */
int main()
{
    int x = 18;
    if(x % 2 == 1)
        printf("x is odd");
    else
        printf("x is even");
    printf("\n***");
}
