#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  getchar() function
 *
 *  returns: Enter a word of 3 letters: c a t
 *           you entered c &   & a
 */
int main()
{
    char c1, c2;
	printf("Enter a word of 3 letters: ");
	c1 = getchar();
	c2 = getchar();
	printf("you entered %c & %c & %c\n", c1, c2, getchar());
}
