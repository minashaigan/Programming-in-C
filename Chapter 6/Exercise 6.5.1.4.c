#include <stdio.h>
#include <stdlib.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: x : 4
 *           y : 4
 *           ***
 */
int main()
{
    int x;
    float y;
    printf("x : ");
    scanf("%d", &x);
    switch( x )
    {
        case 4: printf("y : ");
                scanf("%f", &y);
                switch( (int)(y/abs(y)) )
                {
                    case -1: break;
                    case 1: switch( (int)y )
                            {
                                case 0 ... 2: break;
                                default: printf("***");
                            }
                }
                break;
        case 8:
        case 10: printf("+++");break;
        default: printf("---");
    }
}
