#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  comma operator
 *
 *  returns: n : 6
 *           1 10
 *           2 9
 *           3 8
 *           4 7
 *           5 6
 */
int main()
{
    int i, j, n;
    printf("n : ");
    scanf("%d", &n);
    for(i = 1, j = 10; i < n, j > i; i++, j--)
        printf("%d %d\n", i, j);
}
