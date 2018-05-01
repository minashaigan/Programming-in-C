#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads expressions
 *
 *  returns: Enter:a b c
 *           c1 = a, c2 =  , c3 = b
 */
int main()
{
    char c1,c2,c3;
	printf("Enter:");
	scanf("%c%c%c", &c1, &c2, &c3);
	printf("c1 = %c, c2 = %c, c3 = %c", c1, c2, c3);
}
