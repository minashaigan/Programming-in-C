#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: x = 1.2
 *           one
 *           x = 2.5
 *           two
 *           three
 *           x = 5.7
 */
int main()
{
    float x;
    x = 1.2;
    printf("x = 1.2\n");
    switch( (int)x )
    {
        case 1: printf("one\n");break;
        case 2: printf("two\n");
        case 3: printf("three\n");break;
    }
    x = 2.5;
    printf("x = 2.5\n");
    switch( (int)x )
    {
        case 1: printf("one\n");break;
        case 2: printf("two\n");
        case 3: printf("three\n");break;
    }
    x = 5.7;
    printf("x = 5.7\n");
    switch( (int)x )
    {
        case 1: printf("one\n");break;
        case 2: printf("two\n");
        case 3: printf("three\n");break;
    }
}