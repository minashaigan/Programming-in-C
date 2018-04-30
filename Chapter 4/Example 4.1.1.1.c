#include <stdio.h>
#include <stdlib.h>

/*
 * Function:  main
 * ------------------
 * displays expressions using the integer conversion specifiers
 *
 *  returns: 428
 *           428
 *           428
 *           -428
 *           30000
 *           40000000
 *           654
 *           428
 *           4294966868
 *           1ac
 *           1AC
 */
int main()
{
    printf("%d\n", 428);
    printf("%i\n", 428);
    printf("%d\n", +428);
    printf("%d\n", -428);
    printf("%hd\n", 30000);
    printf("%ld\n", 40000000);
    printf("%o\n", 428);
    printf("%u\n", 428);
    printf("%u\n", -428);
    printf("%x\n", 428);
    printf("%X\n", 428);
}
