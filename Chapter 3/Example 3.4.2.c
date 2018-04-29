#include <stdio.h>
#include <stdlib.h>

/*
 * Function:  main
 * ------------------
 * generates a non-negative and integer in range [0-1000) using library functions
 *
 *  returns: the generated number (below 1000) is: 41
 *           The maximum random number is: 32767
 */
int main()
{
    int random;
    random = rand() % 1000;
    printf("the generated number (below 1000) is: %d\n", random);
    printf("The maximum random number is: %d", RAND_MAX);
}

