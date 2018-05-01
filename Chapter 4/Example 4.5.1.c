#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  getchar() function
 *
 *  returns: Enter a word of 3 letters: cat
 *           you entered c & a & t
 */
int main()
{
    char c1, c2;
	printf("Enter a word of 3 letters: ");
	c1 = getchar();
	c2 = getchar();
	printf("you entered %c & %c & %c\n", c1, c2, getchar());
}
