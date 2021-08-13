#include <stdio.h>
#include "domain_logic.h"
#include "output_processor.h"
#include "input_processor.h"


void CreateTable(void)
{

	TABLE_ROW_U table[3];
    TABLE_ROW_U *pTableRaw = 0;

    // header
    IP_Init();

    for (pTableRaw = &table[0]; pTableRaw <= &table[2]; pTableRaw++)
    {
        IP_input(pTableRaw);
    }

    OP_Init(table[0].DataType);

    // body
    for (pTableRaw = &table[0]; pTableRaw <= &table[2]; pTableRaw++)
    {
        OP_output(pTableRaw);
    }
    
    // footer
    printf("---------------------------------------------------------\n");
}
