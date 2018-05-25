#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  if operator usage
 *
 *  returns: Enter your grade : 18.1
 *           good student
 *           ***
 */
int main()
{
    float grade;
    printf("Enter your grade : ");
    scanf("%f", &grade);
    if(grade > 18.0)
        printf("good student\n");
    printf("***");
}
