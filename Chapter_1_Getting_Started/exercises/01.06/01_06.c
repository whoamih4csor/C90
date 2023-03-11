/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023

Exercise 1-6 Verify that the expression getchar() != EOF is 0 or 1

to compile:
gcc -ansi 01_06.c
*/


#include <stdio.h>/*The C library that include I/O operations*/

main(){/*the entry point*/

    /*the result depends, if you send any character that is not EOF it will be 1*/
    /*to send  EOF windows:CTRL+z , linux:CTRL+d*/
    printf("The result is : %d\n",getchar() != EOF);
}