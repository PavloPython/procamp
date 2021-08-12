#include <stdio.h>
#include "output_processor.h"


void OP_Init(DATA_TYPE_E heading_type){
    if (heading_type == CPU_DATA_TYPE)
    {
        printf("---------------------------------------------------------\n");
        printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
        printf("---------------------------------------------------------\n");
    }
    else if (heading_type == ORDER_DATA_TYPE)
    {
        printf("------------------------------------------------------------------------------\n");
        printf("| %-3s | %31s | %11s | %11s | %11s |\n", "Order Number", "Cpu Name", "Number", "Price (USD)", "Total Price");
        printf("------------------------------------------------------------------------------\n");   
    }

}

void OP_output_homework(TABLE_HOME_S * table_raw){
    printf("%-35s %11s %11i\n", table_raw->Country, table_raw->AlphaCode, table_raw->Numeric);
}

void OP_output(TABLE_ROW_U * table_raw){
    if (table_raw->DataType == CPU_DATA_TYPE)
    {
        printf("%-31s %8i %11.2f\n", table_raw->Data.cpu.CpuName, table_raw->Data.cpu.CpuMark, table_raw->Data.cpu.Price);
    } 
    else if (table_raw->DataType == ORDER_DATA_TYPE)
    {
        printf("%3i %31s %4i, %11.2f, %11.2f\n", table_raw->Data.order.OrderNumber, table_raw->Data.order.CpuName, table_raw->Data.order.Number, table_raw->Data.order.Price, table_raw->Data.order.TotalPrice);
    }
    else{
        printf("Error: incorrect type\n");
    }
}