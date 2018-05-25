#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using switch
 *
 *  returns: C
 *           Circle
 */
int main()
{
    switch( getchar() )
    {
        default: printf("other shape");
                 break;
        case 'c':
        case 'C': printf("Circle");
                  break;
        case 'r':
        case 'R': printf("Rectangle");
                  break;
        case 't':
        case 'T': printf("Triangle");
                  break;
    }

}
