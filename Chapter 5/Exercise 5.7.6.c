#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads clients names until they want to continue, prints number of clients
 *
 *  returns: please enter a name at most have 10 characters: shohre
 *           Your name is shohre
 *           continue?(y/n)y
 *           please enter a name at most have 10 characters: nazanin
 *           Your name is nazanin
 *           continue?(y/n)Y
 *           please enter a name at most have 10 characters: kimia
 *           Your name is kimia
 *           continue?(y/n)n
 *           the number of names was 3
 */
int main()
{
    char name[10], ans;
	int count = 0;
	do
	{
		printf("please enter a name at most have 10 characters: ");
		scanf("%s", name);
		printf("Your name is %s\n", name);
		printf("continue?(y/n)");
		scanf(" %c", &ans);
		count++;
	}
	while(ans == 'y' || ans == 'Y');
	printf("the number of names was %d\n", count);
}
