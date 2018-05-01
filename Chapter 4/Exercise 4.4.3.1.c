#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determination the length of the field in reading
 *
 *  returns: Enter: 12.34.5 67
 *           w = 12.3, x = 4.5, y = 67
 */
int main()
{
    float w, x, y;
    printf("Enter: ");
    scanf("%4f%6f%5f", &w, &x, &y);
    printf("w = %g, x = %g, y = %g\n", w, x, y);

}
