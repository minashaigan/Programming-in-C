#include <stdio.h>
#include <math.h>

#define pi 3.1415

/*
 * Function:  main
 * ------------------
 *  nested if...else
 *
 *  returns: y : 0.499987
 */
int main()
{
    int count = 1, n = 1, code = 11;
    float x = 30 * pi / 180, y;
    if(count == n)
        if(code > 10)
            y = sin(x);
        else
            y = cos(x);
    printf("y : %f", y);
}
