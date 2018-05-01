#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads expressions
 *
 *  returns: Enter:1234
 *           c1 = 1, a = 234
 */
int main()
{
    int a;
	char c1;
	printf("Enter:");
	scanf("%c%d", &c1, &a);
	printf("c1 = %c, a = %d", c1, a);
}
