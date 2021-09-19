#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//The calloc() function allocates memory based on the size of a specific item, such as a structure.

typedef struct{
    int num;
    char *info;
}record;

int main()
{
    record *recs;
    int num_recs = 2;
    char str[] = "This is information";

    recs = calloc(num_recs,sizeof(record));

    if (recs != NULL){
        for (int k=0; k<num_recs; k++)
        {
            (recs+k)->num = k;
            (recs+k)->info = malloc(sizeof(str));
            strcpy((recs+k)->info, str);
        }
    }

    return 0;
}

/*
calloc allocates blocks of memory within a contiguous block of memory for an array of structure elements. You can navigate from one structure to the next with pointer arithmetic.

After allocating room for a structure, memory must be allocated for the string within the structure. Using a pointer for the info member allows any length string to be stored.

Dynamically allocated structures are the basis of linked lists and binary trees as well as other data structures.
*/