#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads 3 real values, prints them, prints them with rotary arrangement
 *
 *  returns: Enter 3 real values:
 *           12.3 4.5 678.9
 *           The numbers were read as :
 *           12.3 4.5 678.9
 *           The numbers with rotary arrangement were read as :
 *           678.9 12.3 4.5
 */
int main()
{
    float n1, n2, n3;
    printf("Enter 3 real values:\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("The numbers were read as :\n");
    printf("%g %g %g\n", n1, n2, n3);
    printf("The numbers with rotary arrangement were read as :\n");
    printf("%g %g %g", n3, n1, n2);
}
