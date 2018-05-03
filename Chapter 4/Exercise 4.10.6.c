#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads a integer and less than 80 value, prints in the synonym column,
 *
 *  returns: Enter a column number: 17
 *                          17
 */
int main()
{
    int a;
    printf("Enter a column number: ");
	scanf("%d", &a);
	printf("%*d\n", a, a);
}
