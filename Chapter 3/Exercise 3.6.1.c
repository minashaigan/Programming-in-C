#include <stdio.h>
#include <math.h>

/*
 * Function:  main
 * ------------------
 *  computes the area and perimeter of a equilateral triangle with side size 2.5
 *
 *  returns: The area is: 2.706329
 *           Perimeter is: 7.500000
 */
int main()
{
    float side = 2.5, area, perimeter;
    area = sqrt(3)/4*side*side;
    perimeter = 3*side;
    printf("The area is: %f\n", area);
    printf("Perimeter is: %f\n", perimeter);
}

