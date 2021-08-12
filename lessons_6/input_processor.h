#ifndef _INPUT_PROCESSOR_H_
#define _INPUT_PROCESSOR_H_

#include "types.h"

void IP_Init(void);

void IP_input(TABLE_ROW_U *table_raw);
void IP_input_homework(TABLE_HOME_S *table_raw);

#endif