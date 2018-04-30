#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads integer numbers
 *
 *  returns: Enter 5 real values:
 *           123.45 123.4e-2 12.345e1 12.345 1.23
 *           The numbers were read as :
 *           123.450 1.234 123.450 12.345 1.230
 */
int main()
{
    float x, y, z, w, t;
    printf("Enter 5 real values:\n");
    scanf("%f%f%e%e%g", &x, &y, &z, &w, &t);
    printf("The numbers were read as :\n");
    printf("%.3f %.3f %.3f %.3f %.3f", x, y, z, w, t);
}
