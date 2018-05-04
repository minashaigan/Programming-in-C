#include <stdio.h>
#include <stdlib.h>

/*
 * Function:  main
 * ------------------
 *  calculates the average of n random numbers
 *
 *  returns: How many random numbers to generate ? 5
 *           The average of numbers is : 14102.200195
 */
int main()
{
    int n, count = 1;
    float r, sum = 0, average;
    printf("How many random numbers to generate ? ");
    scanf("%d", &n);
    do
    {
        r = rand();
        sum += r;
        count++;
    }while(count <= n);
    average = sum / n;
    printf("The average of numbers is : %f", average);
}
