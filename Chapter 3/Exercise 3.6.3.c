#include <stdio.h>
#include <math.h>

#define PI 3.1415

/*
 * Function:  main
 * ------------------
 * computes cos 45 using library functions
 *
 *  returns: the cos(45) is: 0.707123
 */
int main()
{
    float x = 45, y;
    y = cos(x*PI/180);
    printf("the cos(45) is: %f", y);
}

