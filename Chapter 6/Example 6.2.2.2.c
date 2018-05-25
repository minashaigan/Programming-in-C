#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  using ? :
 *
 *  returns: a < b? a: b + 4 result is : 11
 *           (a < b? a: b) + 4 result is : 15
 */
int main()
{
    int result, a = 11, b = 43;
    result = a < b? a: b + 4;
    printf("a < b? a: b + 4 result is : %d\n",result);
    //
    result = (a < b? a: b) + 4;
    printf("(a < b? a: b) + 4 result is : %d\n",result);
}
