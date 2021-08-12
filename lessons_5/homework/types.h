
#ifndef _TYPES_H_
#define _TYPES_H_

typedef char CountryCode[3];

typedef struct
{
    myString    Country;
    CountryCode AlphaCode;
    int         Numeric;
    
}TABLE_HOME_S;

#endif