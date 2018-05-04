#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: I will practice hard
 *           I will practice hard
 */
int main()
{
    char ch;
    for(ch = getchar(); ch != '\n'; ch = getchar())
        putchar(ch);
}
