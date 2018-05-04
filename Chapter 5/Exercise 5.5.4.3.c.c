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
    ch = getchar();
    while(ch != '\n')
    {
        putchar(ch);
        ch = getchar();
    }
}
