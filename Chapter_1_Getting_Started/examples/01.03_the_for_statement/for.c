/*
AUTHOR: whoamih4csor
DATE: Thursday, March 9, 2023
SECTION : 1.3 The for stament

print Fahrenheit-Celsius table
    for fahr = 0,20,....,300


FORMULA -> C = (5/9) (F-32)

to compile:
gcc -ansi for.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main(){
    int fahr;

    /*heading*/
    printf("FAHRENHEIT-CELSIUS\n");

    for(fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3d %6.1f\n", fahr,(5.0 / 9.0) * (fahr - 32) );
    }
}