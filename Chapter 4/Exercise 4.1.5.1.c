#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *
 *  returns: x is: 12, y is: 20
 *           x + y = 32
 *           25.000000  2.500000e+001  25
 */
int main()
{
    printf("x is: %d, y is: %i\n", 12, 20);
    printf("%s %d\n", "x + y =", 12+20);
    printf("%f  %e  %g\n", 25.0, 25.0, 25.0);
}
