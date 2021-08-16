#include <stdio.h>
#include <string.h>

#include "domain_logic.h"
#include "output_processor.h"
#include "input_processor.h"

char buffer[1024];

static void dl_WriteData(char * pData, unsigned int sizeOfData);


void CreateTable(void)
{
    unsigned int i = 0;

    IP_Init(dl_WriteData);

    for (i = 0; i <= 2; i++)
    {
        IP_input();
    }

    OP_Init();

    for (i = 0; i <= 2; i++)
    {
        OP_output(buffer);
    }
    
    // footer
    printf("---------------------------------------------------------\n");
}


static void dl_WriteData(char* pData, unsigned int sizeOfData)
{
    static int i = 0;

    memcpy(buffer[sizeOfData*i], pData, sizeOfData);
    
    i++;
}