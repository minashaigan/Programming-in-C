#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads expressions
 *
 *  returns: Enter:12 34 test best
 *           a = 12, st = 34, mt = test
 */
int main()
{
    int a;
	char mt[10], st[10];
	printf("Enter:");
	scanf("%d %s %s", &a, st, mt);
	printf("a = %d, st = %s, mt = %s", a, st, mt);
}
