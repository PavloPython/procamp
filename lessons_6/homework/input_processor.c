#include <stdio.h>
#include "input_processor.h"
#define TABLE_TYPE 2


void IP_Init(void)
{
#if TABLE_TYPE == 1
    printf("Please enter the following data:\n");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    printf("| %-35s | %6s | %s |\n", "Country", "Alpha-2 code", "Numeric");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
#endif

#if TABLE_TYPE == 2
    printf("Please enter the following data:\n");
    printf("---------------------COUNTRY CODES ALPHA-2 ALPHA-3----------------------\n");
    printf("| %-35s | %6s | %6s | %s |\n", "Country", "Alpha-2 code", "Alpha-3 code", "Numeric");
    printf("---------------------COUNTRY CODES ALPHA-2 ALPHA-3----------------------\n");
#endif
}


void IP_input(TABLE_ROW_U * table_raw){

#if TABLE_TYPE == 1
    table_raw->DataType = COUNTRY_TWO_DATA_TYPE;
    scanf("%s %s %i", table_raw->Data.two.Country, table_raw->Data.two.AlphaCodeTwo, &table_raw->Data.two.Numeric);
#endif

#if TABLE_TYPE == 2
    table_raw->DataType = COUNTRY_THREE_DATA_TYPE;
    scanf("%s %s %s %i", table_raw->Data.three.Country, table_raw->Data.three.AlphaCodeTwo, table_raw->Data.three.AlphaCodeThree, &table_raw->Data.three.Numeric);
#endif
    
}
