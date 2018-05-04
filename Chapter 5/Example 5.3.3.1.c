#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  logical operators
 *
 *  returns: x < 10 && y > 0 result is : 1
 *           x - 4 != y || y < 3 result is : 1
 *           !(x > 6 || y >= 2) result is : 0
 */
int main()
{
    int x = 6, y = 2;
    printf("x < 10 && y > 0 result is : %d\n", x < 10 && y > 0);
    printf("x - 4 != y || y < 3 result is : %d\n", x - 4 != y || y < 3);
    printf("!(x > 6 || y >= 2) result is : %d", !(x > 6 || y >= 2));
}
