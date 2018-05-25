#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using break in do...while statement
 *  reads a value for 10 times, validates whether it is in base 7 or not
 *
 *  returns: Enter your number: 734
 *           Invalid number
 *           Enter your number: 23
 *           Valid in base 7
 *           Enter your number: 65
 *           Valid in base 7
 *           Enter your number: 62236
 *           Valid in base 7
 *           Enter your number: 2412
 *           Valid in base 7
 *           Enter your number: 68
 *           Invalid number
 *           Enter your number: 2356
 *           Valid in base 7
 *           Enter your number: 8346
 *           Invalid number
 *           Enter your number: 7674
 *           Invalid number
 *           Enter your number: 467
 *           Invalid number
 */
int main()
{
    int count, number, digit;
    for(count = 1; count <= 10; ++count)
    {
        printf("Enter your number: ");
        scanf("%d", &number);
        do
        {
            digit = number % 10;
            if(digit > 6) break;
            number = number / 10;
        }while(number > 0);
        if(number == 0)
            printf("Valid in base 7\n");
        else
            printf("Invalid number\n");
        }
}
