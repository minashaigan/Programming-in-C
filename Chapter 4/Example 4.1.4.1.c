#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * displays expressions using the p, n & % conversion specifiers
 *
 *  returns: the value of x is 7
 *           the address of x is 0028FF0C
 *           computation contains 53 characters
 *           the price is %10 off
 */
int main()
{
    int x = 7, y;
    printf("the value of x is %d\n", x);
    printf("the address of x is %p\n", &x);
    printf("computation%n", &y);
    printf(" contains %d characters\n", y);
    printf("the price is %%10 off\n");
}
