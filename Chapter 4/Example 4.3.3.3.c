#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads characters and strings
 *
 *  returns: Enter a string: good morning
 *           you entered: good and: morning
 *           Enter the string again: good morning
 *           you entered:
 *           good mo and: rning
 *           Enter the string again: good morning
 *           you entered:
 *           goo and: d 
 */
int main()
{
    char str1[10], str2[10];
	printf("Enter a string: ");
	scanf("%s %s", str1, str2);
	printf("you entered: %s and: %s\n", str1, str2);
	printf("Enter the string again: ");
	scanf("%[ abcdgmno\n] %s", str1, str2);
	printf("you entered: %s and: %s\n", str1, str2);
	printf("Enter the string again: ");
	scanf("%[^abcd] %s", str1, str2);
	printf("you entered: %s and: %s\n", str1, str2);
}
