#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  if operator usage
 *
 *  returns: Enter a and b : 8 4
 *            2
 */
int main()
{
    // increase count value if a>b
    int count = 1;
    float a, b;
    printf("Enter a and b : ");
    scanf("%f%f", &a, &b);
    if(a > b)
        count++;
    printf("%d", count);
}
