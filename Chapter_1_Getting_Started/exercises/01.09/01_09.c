/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023

Exercise 1-9 Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank

to compile:
gcc -ansi 01_09.c
*/
#include <stdio.h>/*The C library that include I/O operations*/
#define MAX_SPACES 1 /*max number of spaces you can change this arbitrarily*/


main(){/*the entry point*/
    int c; /*to capture a character*/
    long spc = 0;/*space counter*/

    while ((c = getchar()) != EOF) {
        if(c == ' '){
            ++spc; /*increment by one*/

            if(spc <= MAX_SPACES){
                putchar(c);
            }
        }
        else{
            spc = 0;
            putchar(c);
        }
    }

}