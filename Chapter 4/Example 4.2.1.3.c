#include <stdio.h>

/*
 * Function:  main
 * ------------------
 *  Determination the field length and accuracy in printing
 *
 *  returns: 0456***456***
 *           1.237e+001***1.2369100E+001***
 *           4.57e+003***45.6***46***
 *           good ***C class***
 */
int main()
{
    printf("%.4d***%.2d***\n", 456, 456);
    printf("%.3e***%.7E***\n", 12.3691, 12.3691);
    printf("%.3g***%.5g***%.3g***\n", 4567.8, 45.6, 45.961);
    printf("%.5s***%.10s***\n", "good bye", "C class");
}
