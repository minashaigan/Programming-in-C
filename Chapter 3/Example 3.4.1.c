#include <stdio.h>
#include <math.h>

#define PI 3.1415

/*
 * Function:  main
 * ------------------
 * computes sin 30 using library functions
 *
 *  returns: the sine(30) is: 0.499987
 */
int main()
{
    float x = 30, y;
    y = sin(x*PI/180);
    printf("the sine(30) is: %f", y);
}

