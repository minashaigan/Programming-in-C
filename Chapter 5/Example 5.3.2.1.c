#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  equality operators
 *
 *  returns: x == y result is : 0
 *           x - 2 != y * 3 - 2 result is : 0
 *           x != 6 - y > 3 result is : 1
 */
int main()
{
    int x = 6, y = 2;
    printf("x == y result is : %d\n", x == y);
    printf("x - 2 != y * 3 - 2 result is : %d\n", x - 2 != y * 3 - 2);
    printf("x != 6 - y > 3 result is : %d", x != 6 - y > 3);
}
