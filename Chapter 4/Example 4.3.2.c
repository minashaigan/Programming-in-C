#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  scanf function
 *
 *  returns: enter 3 integer values: 12 20 -4
 *           the values are: 12 20 -4
 *           enter 3 integer values: 12
 *
 *           20 -4
 *           the values are: 12 20 -4
 *
 */
int main()
{
    int a, b, c;
    printf("enter 3 integer values: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("the values are: %d %d %d\n", a, b, c);

    printf("enter 3 integer values: ");
    scanf("%d%d", &a, &b);
    scanf("%d", &c);
    printf("the values are: %d %d %d", a, b, c);
}
