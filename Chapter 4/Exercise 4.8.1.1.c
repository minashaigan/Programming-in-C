#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  puts() function
 *
 *  returns: Enter a sentence:
 *           Hello World
 *           your sentence was:
 *           Hello World
 */
int main()
{
    char line[20];
    puts("Enter a sentence: ");
	gets(line);
	puts("your sentence was: ");
	puts(line);
}
