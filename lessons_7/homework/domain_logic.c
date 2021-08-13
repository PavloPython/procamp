#include <stdio.h>
#include <string.h>
#include "domain_logic.h"
#include "output_processor.h"
#include "input_processor.h"

TABLE_ROW_U table[3];

static void dl_WriteData(DATA_TYPE_E DataType, myString CountryName, CountryTwoCode AlphaCodeTwo, int Numeric);


void HomeTable(void)
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


static void dl_WriteData(DATA_TYPE_E DataType, myString CountryName, CountryTwoCode AlphaCodeTwo, int Numeric)
{
    static int i = 0;

    switch (DataType)
    {
        case COUNTRY_TWO_DATA_TYPE:
        {
            table[i].DataType = DataType;
            memcpy(&table[i].Data.two.CountryName, CountryName, sizeof(myString));
            memcpy(&table[i].Data.two.AlphaCodeTwo, AlphaCodeTwo, sizeof(CountryTwoCode));
            table[i].Data.two.Numeric = Numeric;            
            break;
        }
    }
    i++;
}
