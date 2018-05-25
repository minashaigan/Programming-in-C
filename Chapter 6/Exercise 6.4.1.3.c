#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using break in do...while statement
 *  reads a value, validates whether it is in base 7 or not
 *
 *  returns: Enter your number: 678
 *           ...
 */
int main()
{
    int number, digit;
    printf("Enter your number: ");
    scanf("%d", &number);
    do
    {
        digit = number % 10;
        if(digit > 6) continue;
        number = number / 10;
    }while(number > 0);
    if(number == 0)
        printf("Valid in base 7");
    else
        printf("Invalid number");
}
