#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using break in for statement
 *
 *  returns: 1 2 3 4 5
 */
int main()
{
    int k;
    for(k = 1; k < 10; ++k)
    {
        if(k == 6) break;
        printf("%d ", k);
    }
}
