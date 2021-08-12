#include <stdio.h>
#include "output_processor.h"


void output_homework(TABLE_HOME_S * table_raw){
    printf("%-35s %11s %11i\n", table_raw->Country, table_raw->AlphaCode, table_raw->Numeric);
}
