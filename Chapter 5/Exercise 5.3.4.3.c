#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *
 *  returns: 18 <= age <= 25 result is : 1
 *           18 <= age && age <= 25 result is : 0
 *           18 <= age <= 25 result is : 1
 *           18 <= age && age <= 25 result is : 1
 *           18 <= age <= 25 result is : 1
 *           18 <= age && age <= 25 result is : 0
 */
int main()
{
    int age = 10;
    printf("18 <= age <= 25 result is : %d\n", 18 <= age <= 25);
    printf("18 <= age && age <= 25 result is : %d\n", 18 <= age && age <= 25);
    age = 20;
    printf("18 <= age <= 25 result is : %d\n", 18 <= age <= 25);
    printf("18 <= age && age <= 25 result is : %d\n", 18 <= age && age <= 25);
    age = 30;
    printf("18 <= age <= 25 result is : %d\n", 18 <= age <= 25);
    printf("18 <= age && age <= 25 result is : %d\n", 18 <= age && age <= 25);
}
