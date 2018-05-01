#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determination the length of the field in reading
 *
 *  returns: 2006-10-23
 *           2006/10/23
 */
int main()
{
    int year, month, day;
	scanf("%d-%d-%d", &year, &month, &day);
	printf("%d/%d/%d", year, month, day);
}
