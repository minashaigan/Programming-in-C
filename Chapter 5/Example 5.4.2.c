#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  generates and prints integer numbers 1 to 10, prints 11 in next line
 *
 *  returns: 1 2 3 4 5 6 7 8 9 10
 *           Value of i at this point is: 11
 */
int main()
{
    int i = 1;
    do
        printf("%d ", i++);
    while(i <= 10);
    printf("\nValue of i at this point is: %d", i);
}
