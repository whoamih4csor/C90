/*
 * AUTHOR: whoamih4csor
 * DATE: Sunday, March 12, 2023
 *
 * Exercise 1-16: Revise the main routine of the longest-line progma so it will
 * correctly print the length of arbitrarily long input lines,and as much as possible
 * of the text
 * 
 * 
 * To compile:
 * gcc -std=c90 01_16.c
 */
#include <stdio.h>/*The C library that include I/O operations*/

#define MAXLINE 10 /* maximum input line size */

int getline(char line[], int maxline);
void copy(char top[],char from[]);

/*print longest input line*/

main(){

    int len; /* current line length*/
    int max; /* maximum length seen so far*/
    char line[MAXLINE]; /*current input line*/
    char longest[MAXLINE]; /*longest line saved here*/


    max = 0;
    while ((len = getline(line,MAXLINE)) > 0)
    {
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) /*there was a line*/
    {
        printf("%d:%s",max,longest);
    }
    return 0;
    
}
/*getline: read a line into s, return length*/
int getline(char s[], int lim)
{
    int c;
    int i;/*for total characters until EOF*/
    int j;/*total characters until j < lim-1*/

    /*lim-2 because we need to store a '\n' and '\0'*/
    for ( j = i = 0;(c=getchar()) != EOF && c != '\n';++i){
        if(j < lim-2){
            s[j] = c;
            ++j;
        }
    }
    if (c == '\n')
    {
        s[j] = c;
        ++j;
        ++i;
    }
    
    s[j] = '\0';

    return i;
}

/*copy: copy 'from' into 'to'; assume to is big enough*/

void copy(char to[],char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
    
}