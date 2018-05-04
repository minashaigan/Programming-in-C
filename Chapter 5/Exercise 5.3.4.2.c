#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: a = b > 0 result is : 1
 *           a = 1
 *           (a = b) > 0 result is : 1
 *           a = 5
 */
int main()
{
    int a = 3, b = 5;
    printf("a = b > 0 result is : %d\n", a = b > 0);
    printf("a = %d\n", a);
    printf("(a = b) > 0 result is : %d\n", (a = b) > 0);
    printf("a = %d\n", a);
}
