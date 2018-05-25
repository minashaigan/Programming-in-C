#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using switch
 *
 *  returns: 1 1
 *           yellow
 *           orange
 */
int main()
{
    int choice, sign;
    scanf("%d%d", &choice, &sign);
    switch( choice )
    {
        case 1: switch( sign )
                {
                    case 0: printf("red\n");break;
                    case 1: printf("yellow\n");break;
                    case 2: printf("green\n");break;
                }
        case 2: switch( sign )
                {
                    case 0: printf("blue\n");break;
                    case 1: printf("orange\n");break;
                    case 2: printf("purple\n");break;
                }
                break;
    }
}
