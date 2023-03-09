/*
AUTHOR: whoamih4csor
DATE: Thursday, March 9, 2023

Exercise 1-3. Modify the temperature conversion program to print a heading
above the table

print Fahrenheit-Celsius table
    for fahr = 0,20,....,300


FORMULA -> C = (5/9) (F-32)

NOTE: this second version uses float

to compile:
gcc -ansi 01_03.c
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

    /*heading*/
    printf("FAHRENHEIT-CELSIUS\n");
    /*loop, while fahr less than or equal to upper */
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0); /*arithmetic operation*/
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}