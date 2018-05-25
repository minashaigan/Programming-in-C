#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: tax : 0.200000
 */
int main()
{
    int amount = 256, code = 2;
    float tax;
    if(amount < 100)
    {
        if(code == 1)
            tax = 0.05;
        else
            tax = 0.1;
    }
    else
    {
        if(amount < 200 || code == 2)
            tax = 0.2;
        else
            tax = 0.25;
    }
    printf("tax : %f", tax);
}
