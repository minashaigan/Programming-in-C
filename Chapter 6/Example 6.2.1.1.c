#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determines if a value is positive or zero or negative
 *
 *  returns: zero
 */
int main()
{
    float a = 0;
    if(a > 0)
        printf("positive");
    else
        if(a == 0)
            printf("zero");
        else
            printf("negative");
}
