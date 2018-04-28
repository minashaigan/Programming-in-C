#include <stdio.h>

/*
 * Function:  main
 * ------------------
 * some computational terms
 *
 *  returns: k = 34
 *           k = 276
 *           k = 277
 */
int main()
{
    int i = 24;
    int j = 10;
    int k;
    k = j+++i;
    printf("k = %d\n", k);
    k = --i*++j;
    printf("k = %d\n", k);
    k = j--*2+j*i++;
    printf("k = %d\n", k);
}

