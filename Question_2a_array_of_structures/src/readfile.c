#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "array_of_structures.h"

int read_file()
{
    FILE *fp = NULL;
    fp  = fopen ("data.csv", "r");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    else
    {
        printf("***Problem_statement_2a***:\n");
        char buffer[1024];
  
        int row = 0;
        int column = 0;
  
        while (fgets(buffer,1024, fp)) 
        {
            column = 0;
            row++;

            char* value = strtok(buffer, ",");
  
            while (value) {
                if (column == 0) {
                    printf("Name = ");
                }
  
                if (column == 1) {
                    printf("EmailID = ");
                }
  
                if (column == 2) {
                    printf("GitHub Link = ");
                }
  
                printf("%s \n", value);
                value = strtok(NULL, ",");
                column++;
            }
  
            printf("\n");
        }
    }
    fclose(fp);
    return 1;
}