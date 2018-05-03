#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads student number, name, family name and major, reads 3 courses with their numbers, number of units and names
 *  computes total number of units and prints registration form of a term
 *
 *  returns: Student no. : 9513067
 *           Student name : Mina Shaigan
 *           Major : Computer_Science
 *           Course no.          Course name         Units
 *                111
 *                                 Algebra
 *                                                     3
 *
 *                112
 *                                 Algorithm
 *                                                     4
 *
 *                113
 *                                 Network
 *                                                     3
 *
 *           Total units : 10
 */
int main()
{
    int student_no, course_no, unit, totalunit = 0;
	char fName[10], lName[10], major[30], course_name[30];
	printf("Student no. : ");
	scanf("%d", &student_no);
	printf("Student name : ");
	scanf("%s %s", fName, lName);
	printf("Major : ");
	scanf("%s", major);
	printf("%-20s%-20s%s\n", "Course no.", "Course name", "Units");
	printf("%5c", ' ');
	scanf("%d", &course_no);
	printf("%22c" ,' ');
	scanf("%s", course_name);
	printf("%42c", ' ');
	scanf("%d", &unit);
	printf("\n");
	totalunit+= unit;

	printf("%5c", ' ');
	scanf("%d", &course_no);
	printf("%22c" ,' ');
	scanf("%s", course_name);
	printf("%42c", ' ');
	scanf("%d", &unit);
	printf("\n");
	totalunit+= unit;

	printf("%5c", ' ');
	scanf("%d", &course_no);
	printf("%22c" ,' ');
	scanf("%s", course_name);
	printf("%42c", ' ');
	scanf("%d", &unit);
	printf("\n");
	totalunit+= unit;
	printf("Total units : %-20d\n", totalunit);
}
