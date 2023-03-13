/*
 * AUTHOR: whoamih4csor
 * DATE: Monday, March 13, 2023
 *
 * Exercise 1-19: Write a function reverse(s) that reverses the character
 * string s. Use it to write a program that reverses its input a line at a time.
 *
 * To compile:
 * gcc -std=c90 01_19.c
 */

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maximum input line size */
#define OFFSET 2 /* offset to take into account newline and null characters */

/* Function prototypes */
int getline(char line[], int maxline);
void reverse(char line[], int maxline, int length);

int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    /* read input line by line, reverse each line, and print the reversed line */
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 1)
        {
            reverse(line, MAXLINE, strlen(line));
        }
        printf("%s", line);
    }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
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

/* reverse: reverse the string s */
void reverse(char s[], int lim, int length) {
    char prevchar;
    char newchar;

    int i;
    int j = length - OFFSET;

    /* swap characters from the start and end of the string */
    for (i = 0; i != j && i + 1 != j; ++i) {
        prevchar = s[i];
        newchar = s[j];

        s[i] = newchar;
        s[j] = prevchar;

        if (j != i) {
            --j;
        }
    }

    /* swap the remaining two characters if the string length is even */
    if (i + 1 == j) {
        prevchar = s[i + 1];
        newchar = s[j - 1];

        s[i + 1] = newchar;
        s[j - 1] = prevchar;
    }
}
