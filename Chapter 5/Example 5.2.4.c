#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  computes and prints the average of n grades
 *
 *  returns: Enter number of students please : 5
 *           15.6
 *           18
 *           11
 *           14.5
 *           16.7
 *           The average of class is : 15.160001
 */
int main()
{
    int n, count = 1;
    float grade, sum = 0, average;
    printf("Enter number of students please : ");
    scanf("%d", &n);
    while(count <= n)
    {
        scanf("%f", &grade);
        sum += grade;
        count++;
    }
    average = sum / n;
    printf("The average of class is : %f", average);
}
