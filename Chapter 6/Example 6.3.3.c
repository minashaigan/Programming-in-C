#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using break in for statement
 *
 *  returns: x : 2.3
 *           x : 1.1
 *           x : 5
 *           x : 8.2
 *           x : 7
 *           x : 17
 *           x : 4.7
 *           x : 5.5
 *           x : 7.1
 *           x : 9
 *           sum : 620.489990
 */
int main()
{
    float sum = 0.0, x;
    int i = 1, n = 10;
    for(; ; )
    {
        if(i > n) break;
        printf("x : ");
        scanf("%f", &x);
        sum += x * x;
        ++i;
    }
    printf("sum : %f", sum);
}
