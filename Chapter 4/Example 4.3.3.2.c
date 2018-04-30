#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads characters and strings
 *
 *  returns: Enter an integer, a space and another integer: 123 456
 *           x = 123 c = ' ' y = 456
 *
 *           Enter an integer, a space and another integer: 123 456
 *           x = 123 c = '4' y = 56
 *
 */
int main()
{
    char c;
	int x, y;
	printf("Enter an integer, a space and another integer: ");
	scanf("%d%c%d", &x, &c, &y);
	printf("x = %d c = '%c' y = %d\n\n", x, c, y);

	printf("Enter an integer, a space and another integer: ");
	scanf("%d %c%d", &x, &c, &y);
	printf("x = %d c = '%c' y = %d\n", x, c, y);
}
