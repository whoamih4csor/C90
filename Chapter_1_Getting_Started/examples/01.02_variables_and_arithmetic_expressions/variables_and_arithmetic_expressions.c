/*
AUTHOR: whoamih4csor
DATE: Wednesday, March 8, 2023
SECTION : 1.2 Variables and arithmetic expressions

print Fahrenheit-Celsius table
    for fahr = 0,20,....,300


FORMULA -> C = (5/9) (F-32)

to compile:
gcc -ansi variables_and_arithmetic_expressions.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main(){ /*this is the entry point*/

    /*statements*/
    int fahr, celsius;
    int lower, upper, step;

    /*assignments*/
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    /*loop, while fahr less than or equal to upper */
    while (fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9; /*arithmetic operation*/
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}