#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads two integer values, if first number was less than second number reads another two values
 *  until first one become less than second one
 *
 *  returns: 4 7
 *           5 10
 *           8 3
 *           The first number is not less than second.
 */
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    while(x < y)
        scanf("%d%d", &x, &y);
    printf("The first number is not less than second.");
}
