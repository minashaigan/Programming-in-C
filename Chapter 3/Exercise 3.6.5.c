#include <stdio.h>
#include <stdlib.h>

/*
 * Function:  main
 * ------------------
 * generates 3 integer numbers in range [0-20], [-10,10], [200,250) using library functions
 *
 *  returns: The generated number [0,20] is: 20
 *           The generated number [-10,10] is: -2
 *           The generated number [200,250) is: 234
 */
int main()
{
    int random1, random2, random3;
    random1 = rand() % 21;
    random2 = rand() % 21 - 10;
    random3 = rand() % 50 + 200;
    printf("The generated number [0,20] is: %d\n", random1);
    printf("The generated number [-10,10] is: %d\n", random2);
    printf("The generated number [200,250) is: %d\n", random3);
}

