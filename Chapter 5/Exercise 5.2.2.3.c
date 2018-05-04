#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  generates and prints all positive even numbers less than 100
 *
 *  returns: 2
 *           4
 *           6
 *           .
 *           .
 *           .
 *           98    
 */
int main()
{
    int even = 2;
    while(even < 100)
    {
        printf("%d\n", even);
        even = even + 2;
    }
}
