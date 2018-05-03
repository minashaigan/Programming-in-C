#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  gets() function
 *
 *  returns: a test line
 *           cat
 *           a test line***c***a
 */
int main()
{
    char c1, c2, line[20];
	gets(line);
	c1 = getchar();
	c2 = getchar();
	printf("%s***%c***%c\n", line, c1, c2);
}
