/*
 * AUTHOR: whoamih4csor
 * DATE: Saturday, March 11, 2023
 *
 * Exercise 1-15: Rewrite the temperature conversion program of Section
 * 1.2 to use a funcion for conversion.
 * 
 * DESCRIPTION:
 * This program converts temperatures between Fahrenheit and Celsius scales
 * using functions ftoc() and ctof(). The user can choose to display the
 * conversion in normal or inverse mode.
 * 
 * To compile:
 * gcc -std=c90 01_15.c
 */

#include <stdio.h>/*The C library that include I/O operations*/
/*you can change this values*/
#define UPPER 300
#define LOWER 0
#define STEP 20

/*modes*/
#define NORMAL_MODE 1
#define INVERSE_MODE 2

/*celcius to fahrenheit*/
int ctof(int min,int max,int step,int mode);
/*fahrenheit to celsius*/
int ftoc(int min,int max,int step,int mode);

main(){/*the entry point*/
    int i;

    /*fahrenheit*/
    printf("FAHRENHEIT-CELSIUS\n");
    ftoc(LOWER,UPPER,STEP,NORMAL_MODE); /*Display Fahrenheit to Celsius conversion*/
    putchar('\n');
    printf("FAHRENHEIT-CELSIUS INVERSE\n");
    ftoc(LOWER,UPPER,STEP,INVERSE_MODE); /*Display Fahrenheit to Celsius conversion in inverse mode*/

    putchar('\n');

    /*celcius*/
    printf("CELSIUS-FAHRENHEIT\n");
    ctof(LOWER,UPPER,STEP,NORMAL_MODE);/*Display Celsius to Fahrenheit conversion*/
    putchar('\n');
    printf("CELSIUS-FAHRENHEIT INVERSE\n");
    ctof(LOWER,UPPER,STEP,INVERSE_MODE); /* Display Celsius to Fahrenheit conversion in inverse mode*/
    
    return 0;
}

/*  Function to convert Fahrenheit to Celsius   °C = (°F − 32) × 5/9  */
int ftoc(int min,int max,int step,int mode){
    int i;

    if (mode == NORMAL_MODE){
        for ( i = min; i <= max; i = i + step)
        {
            printf("%d   %.2f\n",i,(i - 32.0) * (5.0/9.0));
        }        
    }
    else if (mode == INVERSE_MODE)
    {
        for ( i = max; i >= min; i = i - step)
        {
            printf("%d   %.2f\n",i,(i - 32.0) * (5.0/9.0));
        } 
    }
    
}

/*   Function to convert Celsius to Fahrenheit  °F = (°C × 9/5) + 32  */
int ctof(int min,int max,int step,int mode){
    int i;

    if (mode == NORMAL_MODE){
        for ( i = min; i <= max; i = i + step)
        {
            printf("%d   %.2f\n",i,(i * (9.0 / 5.0)) + 32.0);
        }        
    }
    else if (mode == INVERSE_MODE)
    {
        for ( i = max; i >= min; i = i - step)
        {
            printf("%d   %.2f\n",i,(i * (9.0 / 5.0)) + 32.0);
        } 
    }
    
}