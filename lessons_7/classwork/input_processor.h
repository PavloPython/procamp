#ifndef _INPUT_PROCESSOR_H_
#define _INPUT_PROCESSOR_H_

#include "types.h"

typedef void (*INPUT_PROCESSOR_FP)(DATA_TYPE_E DataType, myString CpuName, int CpuMark, float Price);


void IP_Init(INPUT_PROCESSOR_FP callback);
void IP_input();

#endif