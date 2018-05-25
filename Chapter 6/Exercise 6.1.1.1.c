#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  if operator usage
 *
 *  returns: Enter three sides of a triangle : 3 4 5
 *           right triangle
 *
 *           Enter a digit : 45
 *           difference of the first digit from zero is : 4
 *
 *           Enter a value :5.4
 *           multiplicative inverse of the value is : 0.185185
 */
int main()
{
    // verify right triangle
    float a, b, c;
    printf("Enter three sides of a triangle : ");
    scanf("%f%f%f", &a, &b, &c);
    if(a * a + b * b == c * c)
        printf("right triangle\n");
    printf("\n");
    // difference of the digit from zero
    int digit;
    char ch;
    printf("Enter a digit : ");
    scanf("%s", &ch);
    if(ch >= '0' && ch <= '9')
    {
        digit = ch - '0';
        printf("difference of the first digit from zero is : %d\n", digit);
    }
    printf("\n");
    // computes multiplicative inverse
    float x, y;
    printf("Enter a value :");
    scanf("%f", &x);
    if( x )
        y = 1/x;
    printf("multiplicative inverse of the value is : %f", y);
    printf("\n");
}
