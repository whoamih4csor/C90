/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023
SECTION: 1.5.2 Character Counting

The next program counts Characters;it is similar to the copy program

to compile:
gcc -ansi character_counting_v2.c
*/
#include <stdio.h>/*The C library that include I/O operations*/


main(){/*the entry point*/
    double nc;

    /*void loop*/
    for ( nc = 0; getchar() != EOF; ++nc);
    
    printf("%.0f\n", nc);
    
}