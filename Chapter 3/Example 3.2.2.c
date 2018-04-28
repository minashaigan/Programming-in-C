#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * computes the area and perimeter of a circle of radius 2.5
 *
 *  returns: The area is: 19.634375
 *           Perimeter is: 15.707500
 */
int main()
{
    const float pi = 3.1415;
    float radius, area, perimeter;
    radius = 2.5;
    area = pi*radius*radius;
    perimeter = 2*pi*radius;
    printf("The area is: %f\n", area);
    printf("Perimeter is: %f\n", perimeter);
}

