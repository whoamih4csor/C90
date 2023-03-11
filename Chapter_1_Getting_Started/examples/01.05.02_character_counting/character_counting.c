/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023
SECTION: 1.5.2 Character Counting

The next program counts Characters;it is similar to the copy program

to compile:
gcc -ansi character_counting.c
*/
#include <stdio.h>/*The C library that include I/O operations*/


main(){/*the entry point*/
    long nc;

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;/*increment by one ++*/
    }
    printf("%ld\n", nc);/*%ld prints long variables*/
    
}