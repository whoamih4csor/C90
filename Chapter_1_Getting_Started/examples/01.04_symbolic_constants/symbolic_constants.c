/*
AUTHOR: whoamih4csor
DATE: Thursday, March 9, 2023
SECTION: 1.4 Symbolic Constants


print Fahrenheit-Celsius table
    for fahr = 300,280,...0


FORMULA -> C = (5/9) (F-32)

to compile:
gcc -ansi symbolic_constants.c
*/

#include <stdio.h>/*The C library that include I/O operations*/
#define LOWER 0
#define UPPER 300
#define STEP 20

main(){/*the entry point*/


    printf("FAHRENHEIT-CELSIUS\n");
    /*do this while fahr is greater than or equal to lower*/
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP )
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0) * (fahr - 32.0));
    }
    
}