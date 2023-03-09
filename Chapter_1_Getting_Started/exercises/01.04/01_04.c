/*
AUTHOR: whoamih4csor
DATE: Thursday, March 9, 2023

Exercise 1-3. Modify the temperature conversion program to print a heading
above the table

print Celsius-Fahrenheit table
    for cel = 0,20,....,300


FORMULA ->  °F = (°C × 9/5) + 32 

NOTE: this version uses float

to compile:
gcc -ansi 01_04.c
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

    celsius = lower;

    /*heading*/
    printf("CELSIUS-FAHRENHEIT\n");

    /*loop, while fahr less than or equal to upper */
    while (celsius <= upper)
    {
        fahr = (celsius * (9.0 / 5.0)) + 32; /*arithmetic operation*/
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}