/*
Understanding memory is an important aspect of C programming. When you declare a variable using a basic data type, C automatically allocates space for the variable in an area of memory called the stack.

An int variable, for example, is typically allocated 4 bytes when declared. We know this by using the sizeof operator.
sizeof(int) -> 4bytes
sizeof(arr) -> 40, with arr_size = 10

Dynamic memory allocation is the process of allocating and freeing memory as needed.
Now you can prompt at runtime for the number of array elements and then create an array with that many elements.
Dynamic memory is managed with pointers that point to newly allocated blocks of memory in an area called the heap.

* The stdlib.h library includes memory management functions.
  The statement #include <stdlib.h> at the top of your program gives you access to the following:
  
- malloc(bytes) Returns a pointer to a contiguous block of memory that is of size bytes.
- calloc(num_items, item_size) Returns a pointer to a contiguous block of memory that has num_items items, each of size item_size bytes. Typically used for arrays, structures, and other derived data types. The allocated memory is initialized to 0.
- realloc(ptr, bytes) Resizes the memory pointed to by ptr to size bytes. The newly allocated memory is not initialized.
- free(ptr) Releases the block of memory pointed to by ptr.
*/
