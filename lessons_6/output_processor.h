#ifndef _OUTPUT_PROCESSOR_H_
#define _OUTPUT_PROCESSOR_H_

#include "types.h"

void OP_Init(DATA_TYPE_E heading_type);
void OP_output(TABLE_ROW_U *table_raw);
void OP_output_homework(TABLE_HOME_S *table_raw);


#endif