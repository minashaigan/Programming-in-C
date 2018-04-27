#include <stdio.h>
#define START main()
#define BEGIN {
#define END }
#define WRITE printf
#define STARS "******"

/*
 * Function:  main
 * ------------------
 *  uses symbolic constant
 *
 *  returns: ******
 *           there are 6 stars above and 6 stars below
 *           ******
 */
int START
BEGIN
    WRITE(STARS);
    WRITE("\nthere are 6 stars above and 6 stars below\n");
    WRITE(STARS);
END
