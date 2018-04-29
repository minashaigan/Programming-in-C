#include <stdio.h>

#define PI 3.1415

/*
 * Function:  main
 * ------------------
 * computes the surface area and volume of a sphere of radius 2.5
 *
 *  returns: The area is: 78.537498
 *           Perimeter is: 49.085938
 */
int main()
{
    float radius, area, perimeter;
    radius = 2.5;
    area = 4*PI*radius*radius;
    perimeter = 4/3*PI*radius*radius*radius;
    printf("The area is: %f\n", area);
    printf("Perimeter is: %f\n", perimeter);
}

