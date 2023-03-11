/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023

Exercise 1-8 Write a program to counts blanks,tabs,and newlines.

to compile:
gcc -ansi 01_08.c
*/
#include <stdio.h>/*The C library that include I/O operations*/

main(){/*the entry point*/

    int blanks; /*counts blanks*/
    int tabs; /*counts tabs*/
    int nl; /*counts new lines*/

    int c; /*save the character*/
    for( 
        nl=tabs=blanks=0; /*init the variables to 0*/
        (c = getchar()) != EOF;/*while c is diferent to EOF*/
        /*omit this part*/
    )
    {
        if (c == '\n'){
            ++nl;
        }
        else if (c == '\t')
        {
            ++tabs;
        }
        else if (c == ' ')
        {
            ++blanks;
        }        
    }

    printf("lines:%d blanks:%d tabs:%d\n", nl,blanks,tabs);
}