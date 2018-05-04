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
 */
int main()
{
    int odd = 1;
    while(odd < 300)
    {
        printf("%d\n", odd);
        odd = odd + 2;
    }
}
