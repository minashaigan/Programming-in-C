#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  logical operators
 *
 *  returns: x < y || a > b && b == t result is 0
 *           ((x < y) || ((a > b) && (b == t))) result is 0
 */
int main()
{
    int x = 6, y = 2;
    int a = 5, b = 3;
    int t = 4;
    printf("x < y || a > b && b == t result is %d\n", x < y || a > b && b == t);
    printf("((x < y) || ((a > b) && (b == t))) result is %d\n", ((x < y) || ((a > b) && (b == t))));
}
