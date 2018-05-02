#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  getchar() function
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
	printf("reverse word is %c%c%c\n", c3, c2, c1);
}
