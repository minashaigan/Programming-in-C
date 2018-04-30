#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  Determination the field length and accuracy in printing
 *
 *  returns: ***12345***
 *           ***   12345***
 *           ***12345***
 */
int main()
{
    printf("***%d***\n", 12345);
    printf("***%8d***\n", 12345);
    printf("***%3d***\n", 12345);
}
