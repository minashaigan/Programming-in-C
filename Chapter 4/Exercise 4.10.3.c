#include <stdio.h>
#include <math.h>
/*
 * Function:  main
 * ------------------
 *  reads your student number, prints product of its first two digits in 10^12, prints square of its next two digits
 *  prints subtraction its last 4 digits from first 4 digits
 *
 *  returns: Enter your student number : 9513067
 *           product of its first two digits in 10^12 : 9.5e+013
 *           square of its next two digits : 3.605551
 *           subtraction its last 4 digits from first 4 digits : -6446
 */
int main()
{
    int std_num;
    printf("Enter your student number : ");
    scanf("%d", &std_num);
    printf("product of its first two digits in 10^12 : %lg\n", (std_num/100000)*pow(10.0,12.0));
    printf("square of its next two digits : %f\n", sqrt((float)(std_num/1000%100)));
    printf("subtraction its last 4 digits from first 4 digits : %d", (std_num%10000)-(std_num/1000));
}
