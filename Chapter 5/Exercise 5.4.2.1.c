#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  generates and prints integer numbers 1 to 10, prints 11 in next line
 *
 *  returns: 20
 *           Value of i at this point is: 21
 */
int main()
{
    int i = 20;
    do
        printf("%d ", i++);
    while(i <= 10);
    printf("\nValue of i at this point is: %d", i);
}
