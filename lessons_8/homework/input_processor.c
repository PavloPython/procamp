#include <stdio.h>
#include <string.h>

#include "input_processor.h"
#include "types.h"

#define TABLE_TYPE 1

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


void IP_input()
{
    TABLE_ROW_U tableRow;
    unsigned int i = 0;
    for (i = 0; i <= 2; i++)
    {

#if TABLE_TYPE == 1


        memset(&tableRow, 0, sizeof(TABLE_ROW_U));

        tableRow.DataType = COUNTRY_TWO_DATA_TYPE;

        scanf("%s %s %i", &tableRow.Data.two.CountryName,
            &tableRow.Data.two.AlphaCodeTwo,
            &tableRow.Data.two.Numeric);

        InputCallBack((char*)&tableRow, sizeof(TABLE_ROW_U));

#endif

#if TABLE_TYPE == 2
        tableRow.DataType = COUNTRY_THREE_DATA_TYPE;

        scanf("%s %s %s %i", &tableRow.Data.three.CountryName,
            &tableRow.Data.three.AlphaCodeTwo,
            &tableRow.Data.three.AlphaCodeThree,
            &tableRow.Data.three.Numeric);
#endif
    }
}
