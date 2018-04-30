#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * displays expressions using the real conversion specifiers
 *
 *  returns: 123.450000
 *           1.234500e+002
 *           123.45
 *           123.456788
 *           1.234568e+002
 *           123.457
 *           1.234565E-003
 *           1.2345e+007
 *           1.23E-005
 */
int main()
{
    printf("%f\n", 123.45);
    printf("%e\n", 123.45);
    printf("%g\n", 123.45);
    printf("%f\n", 123.45678765);
    printf("%e\n", 123.45678765);
    printf("%g\n", 123.45678765);
    printf("%E\n", 0.0012345654);
    printf("%g\n", 12345000.0);
    printf("%G\n", 0.0000123);
}
