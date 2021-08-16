#include <stdio.h>
#include "output_processor.h"
#include "types.h"


void OP_Init(char * buffer)
{
    TABLE_ROW_U* pTableRow = (TABLE_ROW_U*)buffer;

    if (pTableRow->DataType == COUNTRY_TWO_DATA_TYPE)
    {
        printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
        printf("| %-35s | %6s | %s |\n", "Country", "Alpha-2 code", "Numeric");
        printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    }
    else if (pTableRow->DataType == COUNTRY_THREE_DATA_TYPE)
    {
        printf("-----------------------------COUNTRY CODES ALPHA-2 ALPHA-3---------------------------\n");
        printf("| %-35s | %6s | %6s | %s |\n", "Country", "Alpha-2 code", "Alpha-3 code", "Numeric");
        printf("-----------------------------COUNTRY CODES ALPHA-2 ALPHA-3---------------------------\n");
    }

}


void OP_output(char *buffer)
{
    TABLE_ROW_U* pTableRow = 0;
    unsigned int i = 0;

    for (i = 0; i <= 2; i++)
    {

        pTableRow = (TABLE_ROW_U*)buffer + i;

        switch (pTableRow->DataType)
        {
        case COUNTRY_TWO_DATA_TYPE:
        {
            printf("%-35s %11s %11i\n", pTableRow->Data.two.CountryName, pTableRow->Data.two.AlphaCodeTwo, pTableRow->Data.two.Numeric);
            break;
        }
        case COUNTRY_THREE_DATA_TYPE:
        {
            printf("%-35s %11s %11s %11i\n", pTableRow->Data.three.CountryName, pTableRow->Data.three.AlphaCodeTwo, pTableRow->Data.three.AlphaCodeThree, pTableRow->Data.three.Numeric);
            break;
        }
        default:
        {
            printf("Error: incorrect type\n");
        }
        }
    }
}