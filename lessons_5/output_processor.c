#include <stdio.h>
#include "output_processor.h"


void output_homework(TABLE_HOME_S * table_raw){
    printf("%-35s %11s %11i\n", table_raw->Country, table_raw->AlphaCode, table_raw->Numeric);
}

void output(TABLE_RAW_S * table_raw){
    printf("%-31s %8i %11.2f\n", table_raw->CpuName, table_raw->CpuMark, table_raw->Price);
}