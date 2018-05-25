#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using break in do...while statement
 *  reads a value, validates whether it is in base 7 or not
 *
 *  returns: Enter your number: 87
 *           Valid in base 7
 */
int main()
{
    int number, digit;
    printf("Enter your number: ");
    scanf("%d", &number);
    do
    {
        digit = number % 10;

        number = number / 10;
    }while(number > 0);
    if(number == 0)
        printf("Valid in base 7");
    else
        printf("Invalid number");
}

