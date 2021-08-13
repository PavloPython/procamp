#include <stdio.h>
#include "input_processor.h"
// #define TABLE_TYPE 1

void IP_Init(void)
{
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


void IP_input(TABLE_ROW_U * table_raw){

#if TABLE_TYPE == 1
    table_raw->DataType = CPU_DATA_TYPE;
    scanf("%s %i %f", table_raw->Data.cpu.CpuName, &table_raw->Data.cpu.CpuMark, &table_raw->Data.cpu.Price);
#endif

#if TABLE_TYPE == 2
    table_raw->DataType = ORDER_DATA_TYPE;
    scanf("%i %s %i %f", &table_raw->Data.order.OrderNumber, table_raw->Data.order.CpuName, &table_raw->Data.order.Number, &table_raw->Data.order.Price);
    table_raw->Data.order.TotalPrice = table_raw->Data.order.Price * table_raw->Data.order.Number;
#endif
    
}
