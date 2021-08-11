/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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


void output(TABLE_RAW_S *table_raw);
void input(TABLE_RAW_S *table_raw);

void output_homework(TABLE_HOME_S *table_raw);
void input_homework(TABLE_HOME_S *table_raw);


int main()
{
    TABLE_RAW_S table[3];
    int i = 0;

    // header
    printf("Please enter the following data:\n");
    printf("---------------------------------------------------------\n");
    printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
    printf("---------------------------------------------------------\n");

    for (i = 0; i <= 2; i++)
    {
        input(&table[i]);
    }


    printf("---------------------------------------------------------\n");
    printf("| %-31s | %4s | %s |\n", "CPU", "CPU Mark", "Price (USD)");
    printf("---------------------------------------------------------\n");

    // body
    for (i = 0; i <= 2; i++)
    {
        output(&table[i]);
    }
    
    // footer
    printf("---------------------------------------------------------\n");
    

    printf("Homework table\n\n");

    TABLE_HOME_S table_home[3];
    
    
    // header
    printf("Please enter the following data:\n");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    printf("| %-35s | %6s | %s |\n", "Country", "Alpha-2 code", "Numeric");
    printf("---------------------COUNTRY CODES ALPHA-2----------------------\n");
    
    for (i = 0; i <= 2; ++i)
    {
        input_homework(&table_home[i]);
    }

    // body

    for (i = 0; i <= 2; ++i)
    {
        output_homework(&table_home[i]);
    }
    // footer
    printf("----------------------------------------------------------------\n");
    
    return 0;
}


void output(TABLE_RAW_S * table_raw){
    printf("%-31s %8i %11.2f\n", table_raw->CpuName, table_raw->CpuMark, table_raw->Price);
}


void input(TABLE_RAW_S * table_raw){
    scanf("%s %i %f", table_raw->CpuName, &table_raw->CpuMark, &table_raw->Price);
}


void output_homework(TABLE_HOME_S * table_raw){
    printf("%-35s %11s %11i\n", table_raw->Country, table_raw->AlphaCode, table_raw->Numeric);
}


void input_homework(TABLE_HOME_S * table_raw){
    scanf("%s %s %i", table_raw->Country, table_raw->AlphaCode, &table_raw->Numeric);
}