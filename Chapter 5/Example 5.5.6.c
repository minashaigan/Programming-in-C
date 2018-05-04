#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  for with empty body
 *
 *  returns: 4 7
 *           5 10
 *           8 3
 *           The first number is not less than second.
 */
int main()
{
    int x, y;
    for(scanf("%d%d", &x, &y); x < y; scanf("%d%d", &x, &y) );
    printf("The first number is not less than second.");
}
