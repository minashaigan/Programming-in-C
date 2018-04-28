#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: 2.5 + 6    -> 8.5
 *           7 - 0.0    -> 7.0
 *           2.25 * 4   -> 9.0
 *           12 / 4.0   -> 3.0
 *           10 % -4    -> 2
 *           -10 % 4    -> -2
 */
int main()
{
    printf("2.5 + 6    -> %.1f\n", 2.5 + 6);
    printf("7 - 0.0    -> %.1f\n", 7 - 0.0);
    printf("2.25 * 4   -> %.1f\n", 2.25 * 4);
    printf("12 / 4.0   -> %.1f\n", 12 / 4.0);
    printf("10 %% -4    -> %d\n", 10 % -4);
    printf("-10 %% 4    -> %d\n", -10 % 4);
}

