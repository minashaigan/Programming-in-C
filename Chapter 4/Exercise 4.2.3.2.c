#include <stdio.h>

#define PI 3.1415

/*
 * Function:  main
 * ------------------
 *  Determination the field length and accuracy in printing
 *
 *  returns: Degree              sin(x)              cos(x)              tan(x)
 *
 *            30                 0.5000              0.8660              0.5773
 *
 *            45                 0.7071              0.7071              1.0000
 *
 *            60                 0.8660              0.5000              1.7319
 */
int main()
{
    int i;
    printf("%-20s%-20s%-20s%-20s\n","Degree","sin(x)","cos(x)","tan(x)");
	for(i=30;i<=60;i=i+15)
    {
        printf("% -20d%-20.4f%-20.4f%-20.4f\n",i,sin(i*PI/180),cos(i*PI/180),tan(i*PI/180));
    }
}
