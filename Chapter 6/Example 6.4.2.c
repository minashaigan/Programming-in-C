#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using continue in while statement
 *  reads a line and eliminate spaces
 *
 *  returns: Enter a sentence: I am Learning C programming
 *           IamLearningCprogramming
 */
int main()
{
    char c;
    printf("Enter a sentence: ");
    while((c = getchar()) != '\n')
    {
        if(c == ' ')continue;
        putchar(c);
    }
}
