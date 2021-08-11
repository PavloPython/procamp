#include <stdio.h>
#include "domain_logic.h"
#include "output_processor.h"
#include "input_processor.h"


void CreateTable(void)
{

	TABLE_RAW_S table[3];
    TABLE_RAW_S *pTableRaw = 0;

    // header
    printf("Please enter the following data:\n");
    printf("---------------------------------------------------------\n");
    printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
    printf("---------------------------------------------------------\n");

    for (pTableRaw = &table[0]; pTableRaw <= &table[2]; pTableRaw++)
    {
        input(pTableRaw);
    }


    printf("---------------------------------------------------------\n");
    printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
    printf("---------------------------------------------------------\n");

    // body
    for (pTableRaw = &table[0]; pTableRaw <= &table[2]; pTableRaw++)
    {
        output(pTableRaw);
    }
    
    // footer
    printf("---------------------------------------------------------\n");
    

    printf("Homework table\n\n");

    TABLE_HOME_S table_home[3];
    TABLE_HOME_S *pTableHome = 0;
    
    
    // header
    printf("Please enter the following data:\n");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    printf("| %-35s | %6s | %s |\n", "Country", "Alpha-2 code", "Numeric");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    
    for (pTableHome = &table_home[0]; pTableHome <= &table_home[2]; pTableHome++)
    {
        input_homework(pTableHome);
    }

    // body

    for (pTableHome = &table_home[0]; pTableHome <= &table_home[2]; pTableHome++)
    {
        output_homework(pTableHome);
    }
    // footer
    printf("----------------------------------------------------------------\n");
}