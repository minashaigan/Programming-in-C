#include <stdio.h>
#include <math.h>
/*
 * Function:  main
 * ------------------
 *  reads a three-digit positive integer value, prints number in basics 10, 8 and 16,
 *  prints its anagram, prints its anagram to power 4, prints the result of dividing the number into its anagram,
 *  prints logarithm of result of dividing
 *
 *  returns: Enter a three-digit positive integer value : 126
 *           in basic 10 : 126
 *           in basic 8 : 176
 *           in basic 16 : 7e
 *           its anagram : 621
 *           its anagram to power 4 : 148718980881.000000
 *           the result of dividing the number into its anagram : 0.202899
 *           logarithm of the result of dividing the number into its anagram : -0.692721
 */
int main()
{
    int num, anagram, temp;
    printf("Enter a three-digit positive integer value : ");
    scanf("%d", &num);
    printf("in basic 10 : %d\n", num);
    printf("in basic 8 : %o\n", num);
    printf("in basic 16 : %x\n", num);
    anagram = num % 10 * 100;
    temp = num / 10;
    anagram += temp % 10 * 10;
    temp = temp / 10;
    anagram += temp * 1;
    printf("its anagram : %d\n", anagram);
    printf("its anagram to power 4 : %lf\n", pow((float)anagram,4.0));
    printf("the result of dividing the number into its anagram : %f\n", (float)num/anagram);
    printf("logarithm of the result of dividing the number into its anagram : %f\n", log10((float)num/anagram));
}
