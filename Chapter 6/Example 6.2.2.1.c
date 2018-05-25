#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  using ? :
 *
 *  returns: min : 11
 *           min : 11
 */
int main()
{
    int min, a = 11, b = 43;
    min = (a < b)? a: b;
    printf("min : %d\n",min);
    //
    if(a < b)
        min = a;
    else
        min = b;
    printf("min : %d\n",min);
}
