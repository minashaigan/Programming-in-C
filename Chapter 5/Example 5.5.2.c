#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  generates and prints 50 random numbers
 *
 *  returns: 41 18467 6334 26500 19169 15724 11478 29358 26962 24464 5705 28145 23281 16827 9
 *           961 491 2995 11942 4827 5436 32391 14604 3902 153 292 12382 17421 18716 19718 19
 *           895 5447 21726 14771 11538 1869 19912 25667 26299 17035 9894 28703 23811 31322 3
 *           0333 17673 4664 15141 7711 28253 6868
 */
int main()
{
    int count;
    for(count = 1; count <= 50; ++count)
        printf("%d ", rand());
}