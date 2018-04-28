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
    float radius = 2.5, area, perimeter;
    area = 3.1415*radius*radius;
    perimeter = 2*3.1415*radius;
    printf("The area is: %f\n", area);
    printf("Perimeter is: %f\n", perimeter);
}

