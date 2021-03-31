#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "array_of_structures.h"

void allocatemem(char **data , char * token ){
    (*data) = (char *)malloc(strlen(token) + 1);
    strcpy((*data),token);
}

int compare(const void* a, const void* b)
{
    return strcmp(((info_t*)a)->name,((info_t*)b)->name);
}

void freeMemory(info_t *mem){
	free(mem);
}