#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: !(age1 < age2 || age2 > 25) result is : 0
 *           !(age1 < age2) || age2 > 25 result is : 1
 *           !age1 < age2 || age2 > 25 result is : 1
 */
int main()
{
    int age1 = 10, age2 = 30;
    printf("!(age1 < age2 || age2 > 25) result is : %d\n", !(age1 < age2 || age2 > 25));
    printf("!(age1 < age2) || age2 > 25 result is : %d\n", !(age1 < age2) || age2 > 25);
    printf("!age1 < age2 || age2 > 25 result is : %d\n", !age1 < age2 || age2 > 25);
}
