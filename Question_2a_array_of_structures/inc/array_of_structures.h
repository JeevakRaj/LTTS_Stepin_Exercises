#ifndef ARRAY_OF_STRUCTURES_H
#define ARRAY_OF_STRUCTURES_H

typedef struct info_t {
    char* name;
    char* email_id;
    char* git_link;
} info_t;

void allocatemem(char **data , char * token );

int compare(const void* a, const void* b);

int read_file();
void array_of_struct();
void sort_array_of_struct();

#endif