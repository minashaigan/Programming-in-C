#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads 3 student grades, computes and prints student's term grade
 *
 *  returns: Enter midterm grade: 13
 *           Enter final grade: 17
 *           Enter home work grade: 16
 *           The result is : 9.200000
 *           Do you want to continue for another student? (y / n) y
 *           Enter midterm grade: 15
 *           Enter final grade: 15
 *           Enter home work grade: 18
 *           The result is : 9.600000
 *           Do you want to continue for another student? (y / n) Y
 *           Enter midterm grade: 20
 *           Enter final grade: 20
 *           Enter home work grade: 10
 *           The result is : 10.000000
 *           Do you want to continue for another student? (y / n) n
 */
int main()
{
    float midterm_grade, final_grade, hw_grade, result;
    char ans = 'y';
    while(ans == 'y' || ans == 'Y')
    {
        printf("Enter midterm grade: ");
        scanf("%f", &midterm_grade);
        printf("Enter final grade: ");
        scanf("%f", &final_grade);
        printf("Enter home work grade: ");
        scanf("%f", &hw_grade);
        result = (midterm_grade + final_grade + hw_grade) / 5;
        printf("The result is : %f\n", result);
        printf("Do you want to continue for another student? (y / n) ");
        scanf(" %c", &ans);
    }
}