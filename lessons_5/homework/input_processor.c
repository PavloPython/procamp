#include <stdio.h>
#include "input_processor.h"



void input_homework(TABLE_HOME_S * table_raw){
    scanf("%s %s %i", table_raw->Country, table_raw->AlphaCode, &table_raw->Numeric);
}
