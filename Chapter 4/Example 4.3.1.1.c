#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads integer numbers
 *
 *  returns: Enter 7 integer values:
 *           26 26 026 0x26 26 26 26
 *           The numbers were read as :
 *           26 26 22 38 22 26 38
 */
int main()
{
    int a, b, c, d, e, f, g;
    printf("Enter 7 integer values:\n");
    scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);
    printf("The numbers were read as :\n");
    printf("%d %d %d %d %d %d %d", a, b, c, d, e, f, g);
}
