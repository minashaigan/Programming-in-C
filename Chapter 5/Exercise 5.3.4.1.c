#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: a + b < c result is : 1
 *           a + (b < c) result is : 4
 *           a < b != b < c result is : 0
 */
int main()
{
    int a = 3, b = 5, c = 9;
    printf("a + b < c result is : %d\n", a + b < c);
    printf("a + (b < c) result is : %d\n", a + (b < c));
    printf("a < b != b < c result is : %d", a < b != b < c);
}
