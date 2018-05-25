#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: a + b == 4 ? 8 : 9 - b result is : 5
 *           a + (b == 4 ? 8 : 9 - b) result is : 11
 *           a + (b == 4 ? 8 : 9) - b result is : 7
 */
int main()
{
    int a = 3, b = 4;
    printf("a + b == 4 ? 8 : 9 - b result is : %d\n", a + b == 4 ? 8 : 9 - b);
    printf("a + (b == 4 ? 8 : 9 - b) result is : %d\n", a + (b == 4 ? 8 : 9 - b));
    printf("a + (b == 4 ? 8 : 9) - b result is : %d\n", a + (b == 4 ? 8 : 9) - b);
}
