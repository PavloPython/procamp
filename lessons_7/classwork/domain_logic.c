#include <stdio.h>
#include <string.h>
#include "domain_logic.h"
#include "output_processor.h"
#include "input_processor.h"

TABLE_ROW_U table[3];

static void dl_WriteData(DATA_TYPE_E DataType, myString CpuName, int CpuMark, float Price);


void CreateTable(void)
{

    TABLE_ROW_U *pTableRaw = 0;

    // header
    IP_Init(dl_WriteData);

    for (pTableRaw = &table[0]; pTableRaw <= &table[2]; pTableRaw++)
    {
        IP_input();
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


static void dl_WriteData(DATA_TYPE_E DataType, myString CpuName, int CpuMark, float Price)
{
    static int i = 0;

    switch (DataType)
    {
        case CPU_DATA_TYPE:
        {
            table[i].DataType = DataType;
            table[i].Data.cpu.CpuMark = CpuMark;
            table[i].Data.cpu.Price = Price;
            memcpy(&table[i].Data.cpu.CpuName, CpuName, sizeof(myString));
            break;
        }
    }
    i++;
}