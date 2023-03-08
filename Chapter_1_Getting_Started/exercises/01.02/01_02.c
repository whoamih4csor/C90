/*
AUTHOR: whoamih4csor
DATE: Wednesday, March 8, 2023

Exercise 1-2. Experiment to find out what happens when printf's argument
string contains \c,where c is some character not listed above.

to compile:
gcc -ansi 01_02.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

main(){ /*this is the entry point*/

    /*what will happen is that the compiler will warn us 
    that the sequence character \c does not exist
    but it will compile normal
    */
    printf("this is a test : \c \n"); 
}