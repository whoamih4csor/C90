/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023

Exercise 1-10 Write a program to copy its input to its output, replacing each
tab by \t, each backspace by \b,and each backslash by \\.This makes tabs and 
backspaces visible in an unambiguous way.

to compile:
gcc -ansi 01_10.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main() { /*the entry point*/
    int c;

    while ((c = getchar()) != EOF) {
        /* \t */
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        /* \b */
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        /* \\ */
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        /* space */
        else if (c == ' ') {
            putchar('\\');
            putchar('s');
        }
        else {
            putchar(c);
        }
    }

    return 0;
}
