#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  comma operator
 *
 *  returns:     1
 *              12
 *             123
 *            1234
 *           12345
 */
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        printf("%*d", 6 - i, 1);
        for(j = 2; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

}
