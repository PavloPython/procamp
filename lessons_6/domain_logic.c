#include <stdio.h>
#include "domain_logic.h"
#include "output_processor.h"
#include "input_processor.h"


void CreateTable(void)
{

	TABLE_ROW_U table[3];
    TABLE_ROW_U *pTableRaw = 0;
    DATA_TYPE_E HeaderSwitch = CPU_DATA_TYPE;

    // header
    IP_Init();

    for (pTableRaw = &table[0]; pTableRaw <= &table[2]; pTableRaw++)
    {
        IP_input(pTableRaw);
    }

    OP_Init(HeaderSwitch);

    // body
    for (pTableRaw = &table[0]; pTableRaw <= &table[2]; pTableRaw++)
    {
        OP_output(pTableRaw);
    }
    
    // footer
    printf("---------------------------------------------------------\n");
}


void HomeTable(void)
{

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
        IP_input_homework(pTableHome);
    }

    // body

    for (pTableHome = &table_home[0]; pTableHome <= &table_home[2]; pTableHome++)
    {
        OP_output_homework(pTableHome);
    }
    // footer
    printf("----------------------------------------------------------------\n");

}