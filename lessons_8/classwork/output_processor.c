#include <stdio.h>
#include "output_processor.h"
#include "types.h"


void OP_Init(){

    if (1 == CPU_DATA_TYPE)
    {
        printf("---------------------------------------------------------\n");
        printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
        printf("---------------------------------------------------------\n");
    }
    else if (2 == ORDER_DATA_TYPE)
    {
        printf("------------------------------------------------------------------------------\n");
        printf("| %-3s | %31s | %11s | %11s | %11s |\n", "Order Number", "Cpu Name", "Number", "Price (USD)", "Total Price");
        printf("------------------------------------------------------------------------------\n");   
    }

}


void OP_output(char *buffer)
{
    TABLE_ROW_U *pTableRow = (TABLE_ROW_U*)buffer;

    switch (pTableRow->DataType)
    {
        case CPU_DATA_TYPE:
        {
            printf("%-31s %8i %11.2f\n", pTableRow->Data.cpu.CpuName, pTableRow->Data.cpu.CpuMark, pTableRow->Data.cpu.Price);
            break;
        }
        case ORDER_DATA_TYPE:
        {
            printf("%3i %31s %4i, %11.2f, %11.2f\n", pTableRow->Data.order.OrderNumber, pTableRow->Data.order.CpuName, pTableRow->Data.order.Number, pTableRow->Data.order.Price, pTableRow->Data.order.TotalPrice);
            break;
        }
        default:
        {
            printf("Error: incorrect type\n");
        }
    }    
}
