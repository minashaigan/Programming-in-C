#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  nested if...else
 *
 *  returns: ***
 */
int main()
{
    int x = 10, y = 0;
    if(x < 0)
    {
        if(y >= 0)
            printf("+++");
    }
    else
        printf("***");
}
