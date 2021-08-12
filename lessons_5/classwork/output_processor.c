#include <stdio.h>
#include "output_processor.h"


void output(TABLE_RAW_S * table_raw){
    printf("%-31s %8i %11.2f\n", table_raw->CpuName, table_raw->CpuMark, table_raw->Price);
}