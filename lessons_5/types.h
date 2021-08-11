
#ifndef _TYPES_H_
#define _TYPES_H_

typedef char myString[31];

typedef struct
{
    myString CpuName;
    int      CpuMark;
    float    Price;
    
}TABLE_RAW_S;


typedef char CountryCode[3];

typedef struct
{
    myString    Country;
    CountryCode AlphaCode;
    int         Numeric;
    
}TABLE_HOME_S;

#endif