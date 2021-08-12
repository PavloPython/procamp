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
}