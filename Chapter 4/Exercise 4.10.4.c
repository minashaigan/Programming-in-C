#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads Lifetime of a device in seconds, prints by year, month, week, day, hour, minute and second
 *
 *  returns: Enter a time according to second: 31567000
 *           time according to second is: 31567000
 *           time according to minute is: 526116
 *           time according to hour is: 8768
 *           time according to day is: 365
 *           time according to week is: 52
 *           time according to month is: 12
 *           time according to year is: 1
 */
int main()
{
    long int time;
    long int second, minute, hour, day, week, month, year;
	printf("Enter a time according to second: ");
	scanf("%ld", &time);
	second = time;
	printf("time according to second is: %ld\n", second);
	minute = time/60;
	printf("time according to minute is: %ld\n", minute);
	hour = minute/60;
    printf("time according to hour is: %ld\n", hour);
	day = hour/24;
	printf("time according to day is: %ld\n", day);
	week = day/7;
	printf("time according to week is: %ld\n", week);
	month = day/30;
	printf("time according to month is: %ld\n", month);
    year = month/12;
	printf("time according to year is: %ld\n", year);
}
