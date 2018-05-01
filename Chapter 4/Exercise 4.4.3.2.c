#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  determination the length of the field in reading
 *
 *  returns: Enter: C programming language
 *           s1 = C, s2 = prog, s3 = ram
 */
int main()
{
    char s1[8], s2[8], s3[8];
    printf("Enter: ");
    scanf("%5s%4s%3s", s1, s2, s3);
    printf("s1 = %s, s2 = %s, s3 = %s", s1, s2, s3);
}
