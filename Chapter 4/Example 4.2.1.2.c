#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  Determination the field length and accuracy in printing
 *
 *  returns: ***-12345***  -12345***
 *           ***  123.450000***123.450000***
 *           *** 1.234500e+002***    123.45***
 *           ***  test line***test line***    !***
 */
int main()
{
    printf("***%d***%8d***\n", -12345, -12345);
    printf("***%12f***%8f***\n", 123.45, 123.45);
    printf("***%14e***%10g***\n", 123.45, 123.45);
    printf("***%11s***%6s***%5c***", "test line", "test line", '!');
}
