/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023


Exercise 1-12 Write a program that prints its input one word per line

to compile:
gcc -ansi 01_12=.c
*/

#include <stdio.h>/*The C library that include I/O operations*/

/* Define constants for the state of whether we are currently inside a word 
 or outside of one. */
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* Define a constant for the maximum number of words to be printed per line. 
   if you want change this
*/
#define MAX_WORDS 1

main() {/*the entry point*/
    int c; /*to capture a character*/
    int nw; /*count words*/
    int state;/*state word*/

    state = OUT;
    nw = 0;

    while ((c = getchar()) != EOF) {  /* loop through each character in input */
        putchar(c);  /* print the character */

        if (c == '\n') {  /* if we encounter a newline character */
            nw = 0;  /* reset the word count to 0 */
        }

        /* if we encounter a space, newline, or tab character */
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;  /* set the state to OUT */

            /* if we have printed the maximum number of words allowed per line */
            if (nw == MAX_WORDS) {
                putchar('\n');  /*  print a newline character */
                nw = 0;  /* reset the word count to 0 */
            }
        }
        /*  if we encounter a non-whitespace character */
        else if (state == OUT) {
            state = IN;  /* set the state to IN */
            ++nw;  /* increment the word count */
        }
    }
}