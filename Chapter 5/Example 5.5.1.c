#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  generates and prints all positive odd numbers less than 300
 *
 *  returns: 1
 *           3
 *           5
 *           .
 *           .
 *           .
 *           299
 */
int main()
{
    int odd;
    for(odd = 1; odd < 300; odd = odd + 2)
        printf("%d\n", odd);
}
