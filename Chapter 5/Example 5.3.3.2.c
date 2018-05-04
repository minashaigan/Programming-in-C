#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  logical operators
 *
 *  returns: x < y && ++i > j result is : 0
 *           i = 5
 *           x < y || ++i > j result is : 1
 *           i = 6
 */
int main()
{
    int x = 6, y = 2;
    int i = 5, j = 3;
    printf("x < y && ++i > j result is : %d\n", x < y && ++i > j);
    printf("i = %d\n", i);
    printf("x < y || ++i > j result is : %d\n", x < y || ++i > j);
    printf("i = %d", i);
}
