/*
AUTHOR: whoamih4csor
DATE: Thursday, March 9, 2023
SECTION : 1.2 Variables and arithmetic expressions

print Fahrenheit-Celsius table
    for fahr = 0,20,....,300


FORMULA -> C = (5/9) (F-32)

NOTE: this second version uses float

to compile:
gcc -ansi variables_and_arithmetic_expressions_v2.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main(){ /*this is the entry point*/

    /*statements*/
    float fahr, celsius;
    int lower, upper, step;

    /*assignments*/
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    /*loop, while fahr less than or equal to upper */
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0); /*arithmetic operation*/
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}