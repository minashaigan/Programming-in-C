#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *
 *  returns: (5 + 8) = 13
 *           %5 of 8 is: 0.4
 */
int main()
{
    int a = 5, b = 8;
    printf("(%d + %d) = %d\n", a, b, a+b);
    printf("%%%d of %d is: %g\n", a, b, (float)a*b/100);
}
