#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: x = 2.0
 *           j = 2
 *           y = 4.0
 */
int main()
{
    int i, j;
    float x, y;
    i = 20;
    x = i / 8;          /* -> x = 2.0 */
    printf("x = %.1f\n", x);
    j = x;              /* -> j = 2 */
    printf("j = %d\n", j);
    y = i = x = 9/x;    /* -> x = 4.5 -> i = 4 -> y = 4.0 */
    printf("y = %.1f\n", y);
}

