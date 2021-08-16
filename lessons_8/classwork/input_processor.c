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
    printf("---------------------------------------------------------\n");
    printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
    printf("---------------------------------------------------------\n");
#endif

#if TABLE_TYPE == 2
    printf("Please enter the following data:\n");
    printf("---------------------------------------------------------\n");
    printf("| %3s | %-31s | %4s | %s | \n", "Order Number", "Cpu Name", "Number", "Price (USD)");
    printf("---------------------------------------------------------\n");

#endif
}


void IP_input()
{
    TABLE_ROW_U tableRow;
    unsigned int i = 0;

    for (i = 0; i <= 2; i++)
    {
        memset(&tableRow, 0, sizeof(TABLE_ROW_U));

#if TABLE_TYPE == 1

        tableRow.DataType = CPU_DATA_TYPE;

        scanf("%s %i %f", &tableRow.Data.cpu.CpuName,
            &tableRow.Data.cpu.CpuMark,
            &tableRow.Data.cpu.Price);

        InputCallBack((char*)&tableRow, sizeof(TABLE_ROW_U));

#endif

#if TABLE_TYPE == 2
        tableRow.DataType = ORDER_DATA_TYPE;

        scanf("%i %s %i %f", &tableRow.Data.order.OrderNumber, &tableRow.Data.order.CpuName, &tableRow.Data.order.Number, &tableRow.Data.order.order.Price);
        tableRow.Data.order.TotalPrice = tableRow.Data.order.Price * tableRow.Data.order.Number;
#endif
    }
}
