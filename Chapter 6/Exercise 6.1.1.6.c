#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  if operator usage
 *
 *  returns: flag : 0
 */
int main()
{
    int a = 1, b = 1, c = 3, x = 1, y = 2;
    int flag = 1;
    if(x < y || a + b > c)
        flag = 0;
    printf("flag : %d", flag);
}
