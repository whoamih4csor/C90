/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023


Exercise 1-13 Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.

to compile:
gcc -ansi 01_13.c
*/

#include <stdio.h> /*The C library that include I/O operations*/

/* Define constants for the state of whether we are currently inside a word 
 or outside of one. */
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_LENGTH 100 /*maximum length that can be in a word*/
main(){

    int c; /*to capture a character*/
    int i; /*auxiliar count*/
    int nw; /*count words*/
    int state;/*state word*/
    int nchars;/*count characters*/
    long histogram[MAX_LENGTH];/*array where we will store the lengths*/
    int active_subscripts[MAX_LENGTH];
    
    /*initialize the array*/
    for ( c = 0; c < MAX_LENGTH; ++c)
    {
        histogram[c] = 0;
    }
    
    state = OUT;
    nchars = nw = 0;

    /* Count the lengths of each word */
    while ((c = getchar()) != EOF) {  /* loop through each character in input */

        if (state == IN && nchars <= MAX_LENGTH)
        {
            ++nchars;
        }
        
        /* if we encounter a space, newline, or tab character */
        if (c == ' ' || c == '\n' || c == '\t') {
            ++histogram[nchars-1];
            state = OUT;  /* set the state to OUT */
            nchars = 0;
        }
        /*  if we encounter a non-whitespace character */
        else if (state == OUT) {
            state = IN;  /* set the state to IN */
            ++nw;  /* increment the word count */
        }
    }

    /* Make a copy of the histogram array to use later */
    for (c = 0; c < MAX_LENGTH; ++c)
    {
        active_subscripts[c] = histogram[c];
    }
    
    /* Print the histogram in a horizontal orientation */
    printf("HORIZONTAL ORIENTATION\n");
    for (c = 0; c < MAX_LENGTH; ++c)
    {
        if(histogram[c] > 0){
            printf("%9d | ",c+1);
            for (i = 0; i < histogram[c]; ++i)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }
    
    /* Determine the maximum size of the histogram for the vertical orientation */
    int max_size = 0;

    for ( c = 0; c < MAX_LENGTH; ++c)
    {
        if (histogram[c] > max_size)
        {
            max_size = histogram[c];
        }
        
    }
    
    /* Print the histogram in a vertical orientation */
    putchar('\n');
    printf("VERTICAL ORIENTATION\n");
    for ( c = max_size ; c > 0; --c)
    {
        printf("%9d | ",c);
        for ( i = 0; i < MAX_LENGTH; ++i)
        {
            if (histogram[i] == c)
            {
                printf("*    ");
                --histogram[i];
            }
            else{
                if(histogram[i] > 0){
                    printf("     ");
                }
            }
            
        }
        putchar('\n');
    }

    /* Print the subscript values for the histogram in the vertical orientation */
    printf("        ",c);
    for ( i = 0; i < MAX_LENGTH; ++i)
    {
        if (active_subscripts[i] > 0)
        {
            printf("%5d",i+1);
        }
        
    }
    
    
}
