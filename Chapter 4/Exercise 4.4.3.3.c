#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determination the length of the field in reading
 *
 *  returns: Enter a Date: 2006/10/23
 *           year = 2006, month = 10, day = 23
 */
int main()
{
    int year, month, day;
	printf("Enter a Date: ");
	scanf("%d/%d/%d", &year, &month, &day);
	printf("year = %d, month = %d, day = %d", year, month, day);
}
