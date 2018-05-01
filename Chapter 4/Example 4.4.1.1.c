#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determination the length of the field in reading
 *
 *  returns: Enter two positive three digit integers: 123  456
 *           The integers input were: 123 and: 456
 *           Enter a nine digit integer: 123456789
 *           The new integers input were: 1234 and: 567
 */
int main()
{
    int x, y, z, w;
	printf("Enter two positive three digit integers: ");
    scanf("%4d %3d", &x, &y);
	printf("The integers input were: %d and: %d\n", x, y);
	printf("Enter a nine digit integer: ");
	scanf("%4d %3d", &z, &w);
	printf("The new integers input were: %d and: %d\n", z, w);
}
