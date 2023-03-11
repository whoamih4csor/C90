/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023
SECTION: 1.5.4 Word Counting

This is a bare-bones version of the program wc. 

to compile:
gcc -ansi word_counting.c
*/

#include <stdio.h>/*The C library that include I/O operations*/
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
main() { /*the entry point*/
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') 
        {
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }

    }
    printf("%d %d %d\n", nl, nw, nc);
    
}