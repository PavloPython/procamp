#include <stdio.h>
#include "input_processor.h"

static INPUT_PROCESSOR_FP InputCallBack;

void IP_Init(INPUT_PROCESSOR_FP callback)
{
    InputCallBack = callback;

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


void IP_input(){

#if TABLE_TYPE == 1
    myString       CountryName;
    CountryTwoCode AlphaCodeTwo;
    int            Numeric;

    // table_raw->DataType = COUNTRY_TWO_DATA_TYPE;
    scanf("%s %s %i", CountryName, AlphaCodeTwo, &Numeric);

    InputCallBack(COUNTRY_TWO_DATA_TYPE, CountryName, AlphaCodeTwo, Numeric);

#endif

#if TABLE_TYPE == 2
    table_raw->DataType = COUNTRY_THREE_DATA_TYPE;
    scanf("%s %s %s %i", table_raw->Data.three.CountryName, table_raw->Data.three.AlphaCodeTwo, table_raw->Data.three.AlphaCodeThree, &table_raw->Data.three.Numeric);
#endif
    
}
