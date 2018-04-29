#include <stdio.h>
#include <math.h>

#define PI 3.1415

/*
 * Function:  main
 * ------------------
 * computes the average of 3 grades
 *
 *  returns: The average number is 16.6667
 */
int main()
{
    float grade1, grade2, grade3, average;
    grade1 = 14.3;
    grade2 = 19.7;
    grade3 = 16;
    average = (grade1 + grade2 + grade3)/3;
    printf("The average number is %g", average);
}

