/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char CpuName1[32] = "Apple M1 8 Core 3200 MHz";
    char CpuName2[32] = "Intel Core i9-11900KF @ 3.50GHz";
    char CpuName3[32] = "Intel Core i9-11900F @ 2.50GHz";

    int CpuMark1 = 3767;
    int CpuMark2 = 3594;
    int CpuMark3 = 3577;

    float Price1 = 0.0;
    float Price2 = 587.99;
    float Price3 = 519.99;

    // header
    printf("Please enter the following data:\n");
    printf("---------------------------------------------------------\n");
    printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
    printf("---------------------------------------------------------\n");

    scanf("%s %i %f", &CpuName1[0], &CpuMark1, &Price1);
    scanf("%s %i %f", &CpuName2[0], &CpuMark2, &Price2);
    scanf("%s %i %f", &CpuName3[0], &CpuMark3, &Price3);


    // body
    printf("%-31s %8i %11.2f\n", &CpuName1[0], CpuMark1, Price1);
    printf("%-31s %8i %11.2f\n", &CpuName2[0], CpuMark2, Price2);
    printf("%-31s %8i %11.2f\n", &CpuName3[0], CpuMark3, Price3);
    // footer
    printf("---------------------------------------------------------\n");
    

    printf("Homework table\n\n");


    char Country1[32] = "Ukraine";
    char Country2[32] = "United States of America";
    char Country3[32] = "Poland";

    char AlphaCode1[3] = "UA";
    char AlphaCode2[3] = "US";
    char AlphaCode3[3] = "PL";

    int Numeric1 = 804;
    int Numeric2 = 840;
    int Numeric3 = 616;
    
    
    
    // header
    printf("Please enter the following data:\n");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    printf("| %-35s | %6s | %s |\n", "Country", "Alpha-2 code", "Numeric");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    
    scanf("%s %s %i", &Country1[0], &AlphaCode1[0], &Numeric1);
    scanf("%s %s %i", &Country2[0], &AlphaCode2[0], &Numeric2);
    scanf("%s %s %i", &Country3[0], &AlphaCode3[0], &Numeric3);

    // body
    printf("%-35s %11s %11i\n", &Country1[0], &AlphaCode1[0], Numeric1);
    printf("%-35s %11s %11i\n", &Country2[0], &AlphaCode2[0], Numeric2);
    printf("%-35s %11s %11i\n", &Country3[0], &AlphaCode3[0], Numeric3);
    // footer
    printf("----------------------------------------------------------------\n");
    
    return 0;
}
