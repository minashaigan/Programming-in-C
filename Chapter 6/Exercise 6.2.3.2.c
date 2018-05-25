#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: good
 */
int main()
{
    float grade = 17;
    if(grade >= 20)
        if(grade == 20)
            printf("excellent");
        else
            printf("out of range");
    else
        if(grade >= 18)
            printf("very good");
        else
            if(grade >= 16)
                printf("good");
            else
                if(grade >= 14)
                    printf("not bad");
                else
                    if(grade >= 12)
                        printf("bad");
                    else
                        printf("very bad");
}
