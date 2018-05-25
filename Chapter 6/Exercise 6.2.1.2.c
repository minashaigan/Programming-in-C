#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determines if value of a is positive or negative and if it is positive whether value of b is zero or not
 *
 *  returns: a:positive b:non-zero
 */
int main()
{
    int a = 10, b = 12;
    if(a > 0)
        if(b == 0)
            printf("a:positive b:zero");
        else
            printf("a:positive b:non-zero");
    else
        printf("a:non-positive");
}
