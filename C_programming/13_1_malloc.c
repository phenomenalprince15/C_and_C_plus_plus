#include <stdio.h>
#include <stdlib.h>

// The malloc() function allocates a specified number of contiguous bytes in memory.
// If the allocation is unsuccessful, NULL is returned.
// A simple two-dimensional array requires (rows*columns)*sizeof(datatype) bytes of memory.

int main()
{
    int *ptr;
    ptr = malloc(10*sizeof(*ptr));
    // a block of 10 ints.
    if (ptr != NULL){
        *(ptr+2) = 50;
    }
    *ptr = 5;
    *ptr + 1;
    printf("%d, %d\n", *ptr, *ptr+2);

    ptr = realloc(ptr, 100*sizeof(*ptr));

    free(ptr);
}

/*
* size of char is always 1 byte.
so use,
char *str;
str = malloc(strlen(s) + 1); // 1 extra byte for '\0'
*/