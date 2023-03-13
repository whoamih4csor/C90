/*
 * AUTHOR: whoamih4csor
 * DATE: DATE: Sunday, March 12, 2023
 *
 * Exercise 1-17: Write a program to print all input lines that are longer than 80
 * characters
 * 
 * To compile:
 * gcc -std=c90 01_17.c
 */

#include <stdio.h>/*The C library that include I/O operations*/

#define MAXLINE 1000 /* maximum input line size */
#define MINLENGTH 80  /* minimum length to be printed */

int getline(char line[], int maxline);

main(){ /*the entry point*/
    int len; /* current line length*/
    char line[MAXLINE]; /*current input line*/

    while ((len = getline(line,MAXLINE)) > 0)
    {
        if (len > MINLENGTH)
        {
            printf("%s",line);
        }
        
    }
    return 0;
}

/*getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for ( i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';

    return i;
}

