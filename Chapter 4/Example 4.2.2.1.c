#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  Determination the field length and accuracy in printing
 *
 *  returns: ***test      ***m    ***12    ***
 *           ***12***+12***+12       ***
 *           *** 123***000123***
 *           ***32***032***1a***0x1a***
 *           ***   13***  13.***
 *           ***     36***  36.00***
 */
int main()
{
    printf("***%-10s***%-5c***%-6d***\n","test",'m',12);
	printf("***%d***%+d***%-+10d***\n",12,12,12);
	printf("***% d***%06d***\n",123,123);
	printf("***%o***%#o***%x***%#x***\n",26,26,26,26);
	printf("***%5.0f***%#5.0f***\n",12.75,12.75);
	printf("***%7.4g***%#7.4g***\n",35.997,35.997);
}
