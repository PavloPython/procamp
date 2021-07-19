/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // header
    printf("---------------------------------------------------------\n");
    printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
    printf("---------------------------------------------------------\n");
    // body
    printf("%-31s %8i %11.2f\n", "Apple M1 8 Core 3200 MHz", 3767, 0.0);
    printf("%-31s %8i %11.2f\n", "Intel Core i9-11900KF @ 3.50GHz", 3594, 587.99);
    printf("%-31s %8i %11.2f\n", "Intel Core i9-11900F @ 2.50GHz", 3577, 519.99);
    // footer
    printf("---------------------------------------------------------\n");
    
    
    
    printf("Homework table\n\n");
    
    // header
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    printf("| %-35s | %6s | %s |\n", "Country", "Alpha-2 code", "Numeric");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    // body
    printf("%-35s %11s %11i\n", "Ukraine", "UA", 804);
    printf("%-35s %11s %11i\n", "United States of America (the)", "US", 840);
    printf("%-35s %11s %11i\n", "Poland", "PL", 616);
    // footer
    printf("----------------------------------------------------------------\n");
    
    return 0;
}
