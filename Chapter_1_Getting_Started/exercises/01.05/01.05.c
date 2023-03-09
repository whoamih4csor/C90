/*
AUTHOR: whoamih4csor
DATE: Thursday, March 9, 2023

Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0


print Fahrenheit-Celsius table
    for fahr = 300,280,...0


FORMULA -> C = (5/9) (F-32)

to compile:
gcc -ansi 01.05.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main(){/*the entry point*/

    int lower = 0; /*min value*/
    int upper = 300; /*max value*/
    int step  = 20; /*increment*/

    /*heading*/
    printf("FAHRENHEIT-CELSIUS\n");
    /*do this while fahr is greater than or equal to lower*/
    int fahr;
    for (fahr = upper; fahr >= lower; fahr = fahr - step )
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0) * (fahr - 32.0));
    }
    
}