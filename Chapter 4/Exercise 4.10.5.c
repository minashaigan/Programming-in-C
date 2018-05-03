#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  reads time in hh: mm format in time of Iran, prints on time of GMT
 *
 *  returns: enter time with hh:mm format: 21:18
 *           equivalent time in GMT is : 16:48
 *           equivalent time in GMT is : 16:48
 */
int main()
{
    int hour, minute;
    printf("enter time with hh:mm format: ");
	scanf("%d:%d", &hour, &minute);
	int fulltime, difference, time;
	fulltime = minute*60 + hour*60*60;
	difference = 30*60 + 4*60*60;
	time = fulltime - difference;
	printf("equivalent time in GMT is : %d:%d\n", time/3600, (time-(int)(time/3600)*3600)/60);
	if(minute == 0){
		minute = 60;
		hour--;
	}
	if(minute < 30){
		minute+= 60;
		hour--;
	}
    printf("equivalent time in GMT is : %d:%d\n", hour-4, minute-30);
}