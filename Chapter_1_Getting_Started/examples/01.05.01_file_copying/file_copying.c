/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023
SECTION: 1.5.1 Symbolic Constants

copy input to output; 1st version

to compile:
gcc -ansi file_copying.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main(){/*the entry point*/
    int c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    
}
