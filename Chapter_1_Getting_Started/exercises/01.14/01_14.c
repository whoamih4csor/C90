/*
 * AUTHOR: whoamih4csor
 * DATE: Saturday, March 11, 2023
 *
 * Exercise 1-14: Write a program to print a histogram of the frequencies
 * of different characters in its input.
 *
 * To compile:
 * gcc -std=c90 01_14.c
 */

#include <stdio.h>

#define ASCII_TOTAL 127 /* total number of ASCII characters */
#define ASCII_START 32 /* ASCII code for space character */

int main() {/*the entry point*/
    int c; /* variable to store each character input */
    int i; /* auxiliary count */
    long histogram[ASCII_TOTAL]; /* array to store the frequencies of each ASCII character */
    int active_subscripts[ASCII_TOTAL]; /* array to store the subscripts of each active ASCII character */
    
    /* initialize the histogram array to all zeroes */
    for (c = 0; c < ASCII_TOTAL; ++c) {
        histogram[c] = 0;
    }

    /* count the frequency of each ASCII character in the input */
    while ((c = getchar()) != EOF) {
        if (c >= ASCII_START && c < ASCII_TOTAL) {
            ++histogram[c - ASCII_START];
        }
    }

    /* make a copy of the histogram array to use later */
    for (c = 0; c < ASCII_TOTAL; ++c) {
        active_subscripts[c] = histogram[c];
    }

    /* print the histogram in a horizontal orientation */
    printf("HORIZONTAL ORIENTATION\n");
    for (c = ASCII_START; c < ASCII_TOTAL; ++c) {
        if (histogram[c - ASCII_START] > 0) {
            if (c == ' ') {
                printf("\\s | ");
            } else {
                printf("%c  | ", c);
            }

            for (i = 0; i < histogram[c - ASCII_START]; ++i) {
                putchar('*');
            }

            putchar('\n');
        }
    }

    /* determine the maximum size of the histogram for the vertical orientation */
    int max_size = 0;

    for (c = ASCII_START; c < ASCII_TOTAL; ++c) {
        if (histogram[c - ASCII_START] > max_size) {
            max_size = histogram[c - ASCII_START];
        }
    }

    /* print the histogram in a vertical orientation */
    putchar('\n');
    printf("VERTICAL ORIENTATION\n");

    for (c = max_size; c > 0; --c) {
        printf("%9d | ", c);

        for (i = ASCII_START; i < ASCII_TOTAL; ++i) {
            if (histogram[i - ASCII_START] >= c) {
                printf("*    ");
            } else if (histogram[i - ASCII_START] > 0) {
                printf("     ");
            }
        }

        putchar('\n');
    }

    /* print the subscripts for the histogram in the vertical orientation */
    printf("            ");
    for (c = ASCII_START; c < ASCII_TOTAL; ++c) {
        if (active_subscripts[c - ASCII_START] > 0) {
            printf("%c    ", c);
        }
    }

    return 0;
}
