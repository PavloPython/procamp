#include <stdio.h>
#include "input_processor.h"


void input(TABLE_RAW_S * table_raw){
    scanf("%s %i %f", table_raw->CpuName, &table_raw->CpuMark, &table_raw->Price);
}

