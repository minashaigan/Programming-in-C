#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: grade: 18.7
 *           very good
 */
int main()
{
    float grade;
    printf("grade: ");
    scanf("%f",&grade);
    switch( (int)grade )
    {
        case 20: printf("excellent");break;
        case 18 ... 19: printf("very good");break;
        case 16 ... 17: printf("good");break;
        case 14 ... 15: printf("not bad");break;
        case 12 ... 13: printf("bad");break;
        case 0 ... 11: printf("very bad");break;
        default: printf("out of range");
    }
}
