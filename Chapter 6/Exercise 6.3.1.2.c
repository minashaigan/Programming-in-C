#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  example of using break in while statement
 *
 *  returns: Enter the maximum price you can afford : 1000
 *           Enter the price of each item: (to be ended with high price) : 200
 *           I can buy it.
 *           Enter the price of each item: (to be ended with high price) : -100
 */
int main()
{
    int price, accepted_value;
    printf("Enter the maximum price you can afford : ");
    scanf("%d", &accepted_value);
    printf("Enter the price of each item: (to be ended with high price) : ");
    scanf("%d", &price);
    while(price < accepted_value && price >= 0)
    {
        printf("I can buy it.\n");
        printf("Enter the price of each item: (to be ended with high price) : ");
        scanf("%d", &price);
    }
}
