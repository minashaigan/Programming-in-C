#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads n numbers, computer sum of their squares
 *
 *  returns: Enter number of numbers : 6
 *           34.5
 *           16
 *           78.9
 *           12.3
 *           11
 *           6
 *           sum of their square is : 7979.750245
 */
int main()
{
    int i, n;
    float x;
    double sum;
    printf("Enter number of numbers : ");
    scanf("%d", &n);
    for(sum = 0.0, i = 1; i<= n; ++i)
    {
        scanf("%f", &x);
        sum += x * x;
    }
    printf("sum of their square is : %lf", sum);
}
