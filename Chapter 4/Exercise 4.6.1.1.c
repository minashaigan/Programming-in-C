#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  putchar() function
 *
 *  returns: Enter a word of 3 letters: cat
 *           reverse word is tac
 */
int main()
{
    char c1, c2, c3;
	printf("Enter a word of 3 letters: ");
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	printf("reverse word is ");
	putchar(c3);
	putchar(c2);
	putchar(c1);
}
