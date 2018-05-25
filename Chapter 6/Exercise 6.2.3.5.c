#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: grade is : 10.000000
 *           grade is : 10.000000
 *
 *           upper is : V
 *           upper is : V
 *
 *           warm
 *           warm
 */
int main()
{
    // computes grade student
    float grade, test1 = 20, test2 = 20, hw = 10;
    grade = test1 + test2 < 40 ? (test1 + test2) / 4 : (test1 + test2 + hw) / 5;
    printf("grade is : %f\n", grade);
    if( test1 + test2 < 40)
        grade = (test1 + test2) / 4;
    else
        grade = (test1 + test2 + hw) / 5;
    printf("grade is : %f\n", grade);
    printf("\n");
    // converts lowercase to uppercase
    char upper, lower = 'v';
    upper = lower >= 'a' && lower <= 'z' ? 'A' + lower - 'a' : lower;
    printf("upper is : %c\n", upper);
    if(lower >= 'a' && lower <= 'z')
        upper = 'A' + lower - 'a';
    else
        upper = lower;
    printf("upper is : %c\n", upper);
    printf("\n");
    // decides weather is cold or warm according to degree
    float degree = 14;
    printf("%s\n", degree < 10 ? "cold" : "warm");
    if(degree < 10)
        printf("%s\n", "cold");
    else
        printf("%s\n", "warm");
}
