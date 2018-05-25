#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Function:  main
 * ------------------
 *  if operator usage
 *
 *  returns: delta : -9
 *           negative delta
 *           x : 3.000000
 */
int main()
{
    float x, delta;
    printf("delta : ");
    scanf("%f", &delta);
    if( delta < 0)
    {
        x = sqrt((float)abs((int)delta));
        printf("negative delta\n");
        printf("x : %f", x);
    }
}
