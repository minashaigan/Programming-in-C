#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  if operator usage
 *
 *  returns: month and day : 1 1
 *            happy new year
 */
int main()
{
    int month, day;
    printf("month and day : ");
    scanf("%d%d", &month, &day);
    if(month == 1 && day == 1)
        printf("happy new year");
}
