#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using continue in for statement
 *  reads 10 numbers, computes and prints average of positive values
 *
 *  returns: 12
 *           6
 *           -15.7
 *           8.3
 *           0
 *           -10
 *           35
 *           34.2
 *           -17
 *           17
 *           average of positive numbers is: 18.750000
 */
int main()
{
    int count, npos = 0;
    float x, sum = 0, ave = 0;
    for(count = 1; count <= 10; ++count)
    {
        scanf("%f", &x);
        if(x <= 0)continue;
        sum += x;
        npos++;
    }
    if( npos ) ave = sum / npos;
    printf("average of positive numbers is: %f", ave);
}