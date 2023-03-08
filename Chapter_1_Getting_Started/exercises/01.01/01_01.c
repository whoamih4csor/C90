/*
AUTHOR: whoamih4csor
DATE: Wednesday, March 8, 2023

Exercise 1-1. Run the "hello, world" program on your system.Experiment
with leaving out parts of the program, to see what error messages you get. 

to compile:
gcc -ansi 01_01.c
*/


#include <stdio.h>


main(){
    /*
    This code is correct and has no errors.

    printf("Hello World\n");
    */

    /*
    This code prints the string "Hello World" but without a newline.

    printf("Hello World");

    Behavior:

    LINUX: If you are using sh or bash, you will see:

    Hello World[username@machinename ~]$

    or

    Hello World$

    This is because the prompt is printed before the string because there was no newline.

    WINDOWS: In cmd you will see that it prints a newline. Why?

    It's because cmd automatically prints a newline if you put a \n. If you use printf("Hello World\n");
    you will see that there are two new lines.

    NOTE: In Powershell or zsh, this behavior is different. 
    zsh prevents the output of a program from joining the prompt
    and prints a % to let you know that there was an EOF. Powershell has similar behavior.

    */

    /*
    ERRORS:
    If you leave parts out of your code, you will get compile-time errors.

    Examples:
        printf("Hello World\n")

        printf("Hello World\n);

        print("Hello World\n");

        printf("Hello World\n";
    */
}