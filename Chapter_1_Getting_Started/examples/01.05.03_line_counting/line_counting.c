/*
AUTHOR: whoamih4csor
DATE: Saturday, March 11, 2023
SECTION: 1.5.2 Character Counting

The next program counts input lines.

to compile:
gcc -ansi line_counting.c
*/
#include <stdio.h>/*The C library that include I/O operations*/


main(){/*the entry point*/

    /*c  : for characters
      nl : for newlines
    */
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c=='\n')
        {
            ++nl;/*increment by one*/
        }
        
    }
    printf("lines: %d\n",nl);
    

}