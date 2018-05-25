#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  if operator usage
 *
 *  returns: Enter your grade : 17
 *           rank : B
 */
int main()
{
    // if grade is between 16 and 18 give rank 'B'
    float grade;
    char rank;
    printf("Enter your grade : ");
    scanf("%f", &grade);
    if(16 <= grade && grade < 18)
        rank = 'B';
    printf("rank : %c", rank);
}
