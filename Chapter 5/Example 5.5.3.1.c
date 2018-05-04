#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  nested loop of for
 *
 *  returns: 1 1
 *           1 2
 *           1 3
 *           2 1
 *           2 2
 *           2 3
 *           3 4
 */
int main()
{
    int i, j;
    for(i = 1; i <= 2; ++i)
        for(j = 1; j <= 3; ++j)
            printf("%d %d\n", i, j);
    printf("%d %d\n", i, j);
}
