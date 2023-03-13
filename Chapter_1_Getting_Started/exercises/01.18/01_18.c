/*
 * AUTHOR: whoamih4csor
 * DATE: Sunday, March 12, 2023
 *
 * Exercise 1-18: Write a program to remove trailing blanks and tabs from each
 * line of input, and to delete entirely blank lines.
 *
 * This program reads input lines from the standard input, removes trailing
 * blanks and tabs, and deletes entirely blank lines. The program uses the
 * getline function to read input lines and the rmblanks function to remove
 * trailing blanks and tabs and delete entirely blank lines. The modified lines
 * are printed to standard output.
 * 
 * To compile:
 * gcc -std=c90 01_18.c
 */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/
/* Function prototypes */
int getline(char line[], int maxline);
void rmblanks(char line[], int maxline);

main()
{
    int len; /* current line length*/
    char line[MAXLINE]; /* current input line */

    while ((len = getline(line,MAXLINE)) > 0)
    {
        rmblanks(line,MAXLINE);
        printf("%s",line);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

/* rmblanks: remove trailing blanks and tabs and delete entirely blank lines */
void rmblanks(char s[], int lim)
{
    int i;
    int status = OUT; /* status of the current word (inside/outside) */
    int nwords = 0; /* number of words in the line */
    int pos = 0; /* position of the last non-blank character in the line */

    /* Iterate through each character in the line */
    for (i = 0; i < lim && s[i] != '\0'; ++i)
    {
        /* If the character is not a blank or tab */
        if (s[i] != '\t' && s[i] != ' ' && s[i] != '\n')
        {
            /* If we were outside a word, we have entered a new one */
            if (status == OUT) {
                ++nwords;
                status = IN;
                pos = 0;
            }
        }
        /* If the character is a newline and there are no words in the line, set it to empty */
        else if (s[i] == '\n' && nwords == 0) {
            s[0] = '\0';
        }
        /* If the character is not a newline and we were inside a word, we have just left it */
        else if (s[i] != '\n' && status == IN) {
            status = OUT;
            pos = i;
        }
    }
    
    /* If there is at least one word in the line */
    if (pos > 0)
    {
        /* If the last character is not a newline, add one */
        if (pos <= MAXLINE - 2) {
            s[pos] = '\n';
            ++pos;
        }
        s[pos] = '\0';
    }
}
