#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  nested loop of for
 *
 *  returns: *
 *           *
 *           *
 *           *
 *
 *           **
 *           **
 *           **
 *           **
 *
 *           ***
 *           ***
 *           ***
 *           ***
 */
int main()
{
    int i, j, k;
    for(i = 1; i <= 3; ++i)
    {
        for(j = 1; j <= 4; ++j)
        {
            for(k = 1; k <= i; ++k)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
}
