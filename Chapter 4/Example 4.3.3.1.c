#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads characters and strings
 *
 *  returns: Enter a string: University
 *           you entered the character U and the string is niversity
 */
int main()
{
    char c,str[10];
	printf("Enter a string: ");
	scanf("%c%s", &c, str);
	printf("you entered the character %c and the string is %s\n", c, str);
}
