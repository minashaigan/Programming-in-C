#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  gets() function
 *
 *  returns: enter a string: a sample string
 *           you entered: a sample string
 */
int main()
{
    char line[80];
	printf("enter a string: ");
	gets(line);
	printf("you entered: %s", line);
}
