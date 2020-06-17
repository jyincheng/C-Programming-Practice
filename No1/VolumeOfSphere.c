/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: Cheng Chieh Yin                                       */
/* ID: 108054304                                                 */
/* Date: 2019.09.18                                              */
/* Purpose: compute volume of sphere from user input radius      */
/* Change History:                                               */
/*****************************************************************/

#include <stdio.h>

int main(void) {

    /* declare and initialize variables: r (radius) */
    int r = 0;

    /* display instruction for user */
    printf("Enter radius of the sphere: ");
    /* input value of raduis */
    scanf("%d", &r);

    /* display computed volume */
    printf("\n Volume of the sphere: %.2f (cubic meters)\n", 4.0f / 3.0f * 3.1415926f * r * r * r);

    return 0;

}
