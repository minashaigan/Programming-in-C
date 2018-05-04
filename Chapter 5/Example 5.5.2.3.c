#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  comma operator
 *
 *  returns: z = (x - 1, y + 5) result is : 7
 *           z = x - 1, y + 5 result is : 7
 */
int main()
{
    int x = 6, y = 2, z;
    printf("z = (x - 1, y + 5) result is : %d\n", z = (x - 1, y + 5));
    printf("z = x - 1, y + 5 result is : %d", (z = x - 1, y + 5));
}
