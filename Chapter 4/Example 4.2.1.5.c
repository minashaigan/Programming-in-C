#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  Determination the field length and accuracy in printing
 *
 *  returns: $  5.25
 */
int main()
{
    int n = 2;
    printf("$%*.*f", n+4, n, 5.248);
}
