#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using switch
 *
 *  returns: code: 1
 *           **********
 */
int main()
{
    int code;
    printf("code: ");
    scanf("%d", &code);
    switch( code )
    {
        case 1:printf("*");
        case 2:printf("**");
        case 3:printf("***");
        case 4:printf("****");
    }
}
