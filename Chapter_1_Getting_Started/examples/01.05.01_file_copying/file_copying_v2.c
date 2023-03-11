/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023
SECTION: 1.5.1 Symbolic Constants

copy input to output; 2nd version

to compile:
gcc -ansi file_copying_v2.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main(){/*the entry point*/
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    
}
