#ifndef _TYPES_H_
#define _TYPES_H_

typedef char myString[31];


typedef enum 
{
    CPU_DATA_TYPE = 1,
    ORDER_DATA_TYPE = 2
}DATA_TYPE_E;


typedef struct
{
    myString    CpuName;
    int         CpuMark;
    float       Price;
    
}CPU_TABLE_RAW_S;


typedef struct
{
    unsigned int OrderNumber;
    myString     CpuName;
    unsigned int Number;
    float        Price;
    float        TotalPrice;
}ORDER_TABLE_RAW_S;


typedef union
{
    CPU_TABLE_RAW_S   cpu;
    ORDER_TABLE_RAW_S order;
}TABLE_RAW_DATA_U;


typedef struct types
{
    DATA_TYPE_E    DataType;
    TABLE_RAW_DATA_U Data;
}TABLE_ROW_U;


#endif