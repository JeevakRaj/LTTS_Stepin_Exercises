#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "array_of_structures.h"

void sort_array_of_struct()
{
    info_t info[3];
    FILE *fp = NULL;
    fp  = fopen ("data.csv", "r");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    else
    {
        printf("***Problem Statement 2b part2(sorting array of structure)***:\n");
        char buffer[1024];
  
        int row = 0;
        int column = 0;
        int i=0;
        while (fgets(buffer,1024, fp)) 
        {
            column = 0;
            char* value = strtok(buffer, ",");
  
            while (value) {
                if (column == 0) {
                    allocatemem(&info[row].name,value);
                }
  
                if (column == 1) {
                    allocatemem(&info[row].email_id,value);
                }
  
                if (column == 2) {
                    allocatemem(&info[row].git_link,value);
                }
                value = strtok(NULL, ",");
                column++;
            }
            row++;
            printf("\n");
        }
    }
    printf("\nEntered Values before sorting:\n\n");
    for(int i=0;i<3;i++){    
    printf("Name: %s, Email_ID: %s, Git_link: %s\n",info[i].name,info[i].email_id,info[i].git_link);
    }
    qsort(info,3, sizeof(info_t), compare);    
    printf("\nEntered Values after sorting:\n\n");
    for(int i=0;i<3;i++){    
    printf("Name: %s, Email_ID: %s, Git_link: %s\n",info[i].name,info[i].email_id,info[i].git_link);
    }
    //free(info);
    fclose(fp);    
}