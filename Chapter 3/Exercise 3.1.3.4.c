#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * computes the area and perimeter of a square of side length 2.5
 *
 *  returns: The area is: 6.250000
 *           Perimeter is: 10.000000
 */
int main()
{
    float side = 2.5, area, perimeter;
    area = side*side;
    perimeter = 4*side;
    printf("The area is: %f\n", area);
    printf("Perimeter is: %f\n", perimeter);
}

