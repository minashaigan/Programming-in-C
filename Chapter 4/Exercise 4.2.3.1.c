#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  Determination the field length and accuracy in printing
 *
 *  returns: &      0.01
 *           &    7.8900E-003
 *           &       100
 *           &    100.00
 *           &     a b c
 *           &-00012000
 */
int main()
{
    printf("&%10.2f\n",0.00789);
	printf("&% 15.4E\n",0.00789);
	printf("&%10.5g\n",99.9997);
	printf("&%#10.5g\n",99.9997);
	printf("&%10.5s\n","a b c d e f");
	printf("&%09d\n",-12000);
}
