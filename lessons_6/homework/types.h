
#ifndef _TYPES_H_
#define _TYPES_H_

typedef char myString[31];
typedef char CountryTwoCode[2];
typedef char CountryThreeCode[3];


typedef enum 
{
    COUNTRY_TWO_DATA_TYPE = 1,
    COUNTRY_THREE_DATA_TYPE = 2
}DATA_TYPE_E;


typedef struct
{
    myString       Country;
    CountryTwoCode AlphaCodeTwo;
    int            Numeric;
    
}ALPHA_TWO_TABLE_ROW_S;


typedef struct
{
    myString         Country;
    CountryTwoCode   AlphaCodeTwo;
    CountryThreeCode AlphaCodeThree;
    int              Numeric;
}ALPHA_THREE_TABLE_ROW_S;


typedef union
{
    ALPHA_TWO_TABLE_ROW_S   two;
    ALPHA_THREE_TABLE_ROW_S three;
}TABLE_ROW_DATA_U;


typedef struct types
{
    DATA_TYPE_E      DataType;
    TABLE_ROW_DATA_U Data;
}TABLE_ROW_U;


#endif