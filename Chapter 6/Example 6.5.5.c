#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using switch
 *
 *  returns: 1 1
 *           yellow
 */
int main()
{
    int choice, sign;
    scanf("%d%d", &choice, &sign);
    switch( choice )
    {
        case 1: switch( sign )
                {
                    case 0: printf("red");break;
                    case 1: printf("yellow");break;
                    case 2: printf("green");break;
                }
                break;
        case 2: switch( sign )
                {
                    case 0: printf("blue");break;
                    case 1: printf("orange");break;
                    case 2: printf("purple");break;
                }
                break;
    }
}
