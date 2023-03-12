/*
AUTHOR: whoamih4csor
DATE: Sunday, March 12, 2023
SECTION: 01.09 Character Arrays

while(there's another line)
    if(it's longer than the previous longest)
        save it
        save its length
print longest line

to compile:
gcc -ansi character_arrays.c
*/

#include <stdio.h>

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
        printf("%s",longest);
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