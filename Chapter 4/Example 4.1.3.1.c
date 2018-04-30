#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * displays expressions using the character & string conversion specifiers
 *
 *  returns: the ASCII code of 'f' is 102
 *           ***the C language.***
 */
int main()
{
    char letter = 'f';
    char line[20] = "the C language.";
    printf("the ASCII code of '%c' is %d\n", letter, letter);
    printf("***%s***\n", line);
}
