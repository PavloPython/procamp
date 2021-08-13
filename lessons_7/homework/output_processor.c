#include <stdio.h>
#include "output_processor.h"


void OP_Init(DATA_TYPE_E heading_type)
{
    if (heading_type == COUNTRY_TWO_DATA_TYPE)
    {
        printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
        printf("| %-35s | %6s | %s |\n", "Country", "Alpha-2 code", "Numeric");
        printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    }
    else if (heading_type == COUNTRY_THREE_DATA_TYPE)
    {
        printf("-----------------------------COUNTRY CODES ALPHA-2 ALPHA-3---------------------------\n");
        printf("| %-35s | %6s | %6s | %s |\n", "Country", "Alpha-2 code", "Alpha-3 code", "Numeric");
        printf("-----------------------------COUNTRY CODES ALPHA-2 ALPHA-3---------------------------\n");
    }

}


void OP_output(TABLE_ROW_U * table_raw)
{
    switch (table_raw->DataType)
    {
        case COUNTRY_TWO_DATA_TYPE:
        {
            printf("%-35s %11s %11i\n", table_raw->Data.two.CountryName, table_raw->Data.two.AlphaCodeTwo, table_raw->Data.two.Numeric);
            break;
        }
        case COUNTRY_THREE_DATA_TYPE:
        {
            printf("%-35s %11s %11s %11i\n", table_raw->Data.three.CountryName, table_raw->Data.three.AlphaCodeTwo, table_raw->Data.three.AlphaCodeThree, table_raw->Data.three.Numeric);
            break;
        }
        default:
        {
            printf("Error: incorrect type\n");
        }
    }
}